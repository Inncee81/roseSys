/*	$NetBSD: v7fs_vfsops.c,v 1.5.6.1.6.1 2014/04/21 10:17:48 bouyer Exp $	*/

/*-
 * Copyright (c) 2004, 2011 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by UCHIYAMA Yasushi.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: v7fs_vfsops.c,v 1.5.6.1.6.1 2014/04/21 10:17:48 bouyer Exp $");
#if defined _KERNEL_OPT
#include "opt_v7fs.h"
#endif

#include <sys/types.h>
#include <sys/param.h>
#include <sys/systm.h>
#include <sys/pool.h>
#include <sys/time.h>
#include <sys/ucred.h>
#include <sys/mount.h>
#include <sys/disk.h>
#include <sys/device.h>
#include <sys/fcntl.h>
#include <sys/malloc.h>
#include <sys/kauth.h>
#include <sys/proc.h>

/* v-node */
#include <sys/namei.h>
#include <sys/vnode.h>
/* devsw */
#include <sys/conf.h>

#include "v7fs_extern.h"
#include "v7fs.h"
#include "v7fs_impl.h"
#include "v7fs_inode.h"
#include "v7fs_superblock.h"

#ifdef V7FS_VFSOPS_DEBUG
#define	DPRINTF(fmt, args...)	printf("%s: " fmt, __func__, ##args)
#else
#define	DPRINTF(arg...)		((void)0)
#endif

MALLOC_JUSTDEFINE(M_V7FS_VFS, "v7fs vfs", "v7fs vfs structures");

struct pool v7fs_node_pool;

static int v7fs_mountfs(struct vnode *, struct mount *, int);
static int v7fs_openfs(struct vnode *, struct mount *, struct lwp *);
static void v7fs_closefs(struct vnode *, struct mount *);
static int is_v7fs_partition(struct vnode *);
static enum vtype v7fs_mode_to_vtype(v7fs_mode_t mode);
int v7fs_vnode_reload(struct mount *, struct vnode *);

int
v7fs_mount(struct mount *mp, const char *path, void *data, size_t *data_len)
{
	struct lwp *l = curlwp;
	struct v7fs_args *args = data;
	struct v7fs_mount *v7fsmount = (void *)mp->mnt_data;
	struct vnode *devvp = NULL;
	int error = 0;
	bool update = mp->mnt_flag & MNT_UPDATE;

	DPRINTF("mnt_flag=%x %s\n", mp->mnt_flag, update ? "update" : "");

	if (args == NULL)
		return EINVAL;
	if (*data_len < sizeof(*args))
		return EINVAL;

	if (mp->mnt_flag & MNT_GETARGS) {
		if (!v7fsmount)
			return EIO;
		args->fspec = NULL;
		args->endian = v7fsmount->core->endian;
		*data_len = sizeof(*args);
		return 0;
	}

	DPRINTF("args->fspec=%s endian=%d\n", args->fspec, args->endian);
	if (args->fspec == NULL) {
		/* nothing to do. */
		return EINVAL;
	}

	if (args->fspec != NULL) {
		/* Look up the name and verify that it's sane. */
		error = namei_simple_user(args->fspec,
		    NSM_FOLLOW_NOEMULROOT, &devvp);
		if (error != 0)
			return (error);
		DPRINTF("mount device=%lx\n", (long)devvp->v_rdev);

		if (!update) {
			/*
			 * Be sure this is a valid block device
			 */
			if (devvp->v_type != VBLK)
				error = ENOTBLK;
			else if (bdevsw_lookup(devvp->v_rdev) == NULL)
				error = ENXIO;
		} else {
			KDASSERT(v7fsmount);
			/*
			 * Be sure we're still naming the same device
			 * used for our initial mount
			 */
			if (devvp != v7fsmount->devvp) {
				DPRINTF("devvp %p != %p rootvp=%p\n", devvp,
				    v7fsmount->devvp, rootvp);
				if (rootvp == v7fsmount->devvp) {
					vrele(devvp);
					devvp = rootvp;
					vref(devvp);
				} else {
					error = EINVAL;
				}
			}
		}
	}

	/*
	 * If mount by non-root, then verify that user has necessary
	 * permissions on the device.
	 *
	 * Permission to update a mount is checked higher, so here we presume
	 * updating the mount is okay (for example, as far as securelevel goes)
	 * which leaves us with the normal check.
	 */
	if (error == 0) {
		int accessmode = VREAD;
		if (update ?
		    (mp->mnt_iflag & IMNT_WANTRDWR) != 0 :
		    (mp->mnt_flag & MNT_RDONLY) == 0)
			accessmode |= VWRITE;
		error = genfs_can_mount(devvp, accessmode, l->l_cred);
	}

	if (error) {
		vrele(devvp);
		return error;
	}

	if (!update) {
		if ((error = v7fs_openfs(devvp, mp, l))) {
			vrele(devvp);
			return error;
		}

		if ((error = v7fs_mountfs(devvp, mp, args->endian))) {
			v7fs_closefs(devvp, mp);
			VOP_UNLOCK(devvp);
			vrele(devvp);
			return error;
		}
		VOP_UNLOCK(devvp);
	} else 	if (mp->mnt_flag & MNT_RDONLY) {
		/* XXX: r/w -> read only */
	}

	return set_statvfs_info(path, UIO_USERSPACE, args->fspec, UIO_USERSPACE,
	    mp->mnt_op->vfs_name, mp, l);
}

static int
is_v7fs_partition(struct vnode *devvp)
{
	struct dkwedge_info dkw;
	int error;

	if ((error = getdiskinfo(devvp, &dkw)) != 0) {
		DPRINTF("getdiskinfo=%d\n", error);
		return error;
	}
	DPRINTF("ptype=%s size=%" PRIu64 "\n", dkw.dkw_ptype, dkw->dkw_size);

	return strcmp(dkw.dkw_ptype, DKW_PTYPE_V7) == 0 ? 0 : EINVAL;
}

static int
v7fs_openfs(struct vnode *devvp, struct mount *mp, struct lwp *l)
{
	kauth_cred_t cred = l->l_cred;
	int oflags;
	int error;

	/* Flush buffer */
	vn_lock(devvp, LK_EXCLUSIVE | LK_RETRY);
	if ((error = vinvalbuf(devvp, V_SAVE, cred, l, 0, 0)))
		goto unlock_exit;

	/* Open block device */
	oflags = FREAD;
	if ((mp->mnt_flag & MNT_RDONLY) == 0)
		oflags |= FWRITE;

	if ((error = VOP_OPEN(devvp, oflags, NOCRED)) != 0) {
		DPRINTF("VOP_OPEN=%d\n", error);
		goto unlock_exit;
	}

	return 0; /* lock held */

unlock_exit:
	VOP_UNLOCK(devvp);

	return error;
}

static void
v7fs_closefs(struct vnode *devvp, struct mount *mp)
{
	int oflags = FREAD;

	if ((mp->mnt_flag & MNT_RDONLY) == 0)
		oflags |= FWRITE;

	VOP_CLOSE(devvp, oflags, NOCRED);
}

static int
v7fs_mountfs(struct vnode *devvp, struct mount *mp, int endian)
{
	struct v7fs_mount *v7fsmount;
	int error;
	struct v7fs_mount_device mount;

	DPRINTF("%d\n",endian);

	v7fsmount = malloc(sizeof(*v7fsmount), M_V7FS_VFS, M_WAITOK);
	if (v7fsmount == NULL) {
		return ENOMEM;
	}
	v7fsmount->devvp = devvp;
	v7fsmount->mountp = mp;

	mount.device.vnode = devvp;
	mount.endian = endian;

	if ((error = v7fs_io_init(&v7fsmount->core, &mount, V7FS_BSIZE))) {
		goto err_exit;
	}
	struct v7fs_self *fs = v7fsmount->core;

	if ((error = v7fs_superblock_load(fs))) {
		v7fs_io_fini(fs);
		goto err_exit;
	}

	LIST_INIT(&v7fsmount->v7fs_node_head);

	mp->mnt_data = v7fsmount;
	mp->mnt_stat.f_fsidx.__fsid_val[0] = (long)devvp->v_rdev;
	mp->mnt_stat.f_fsidx.__fsid_val[1] = makefstype(MOUNT_V7FS);
	mp->mnt_stat.f_fsid = mp->mnt_stat.f_fsidx.__fsid_val[0];
	mp->mnt_stat.f_namemax = V7FS_NAME_MAX;
	mp->mnt_flag |= MNT_LOCAL;
	mp->mnt_dev_bshift = V7FS_BSHIFT;
	mp->mnt_fs_bshift = V7FS_BSHIFT;

	return 0;

err_exit:
	free(v7fsmount, M_V7FS_VFS);
	return error;
}

int
v7fs_start(struct mount *mp, int flags)
{

	DPRINTF("\n");
	/* Nothing to do. */
	return 0;
}

int
v7fs_unmount(struct mount *mp, int mntflags)
{
	struct v7fs_mount *v7fsmount = (void *)mp->mnt_data;
	int error;

	DPRINTF("%p\n", v7fsmount);

	if ((error = vflush(mp, NULLVP,
		    mntflags & MNT_FORCE ? FORCECLOSE : 0)) != 0)
		return error;

	vn_lock(v7fsmount->devvp, LK_EXCLUSIVE | LK_RETRY);
	error = VOP_CLOSE(v7fsmount->devvp, FREAD, NOCRED);
	vput(v7fsmount->devvp);

	v7fs_io_fini(v7fsmount->core);

	free(v7fsmount, M_V7FS_VFS);
	mp->mnt_data = NULL;
	mp->mnt_flag &= ~MNT_LOCAL;

	return 0;
}

int
v7fs_root(struct mount *mp, struct vnode **vpp)
{
	struct vnode *vp;
	int error;

	DPRINTF("\n");
	if ((error = VFS_VGET(mp, V7FS_ROOT_INODE, &vp)) != 0) {
		DPRINTF("error=%d\n", error);
		return error;
	}
	*vpp = vp;
	DPRINTF("done.\n");

	return 0;
}

int
v7fs_statvfs(struct mount *mp, struct statvfs *f)
{
	struct v7fs_mount *v7fsmount = mp->mnt_data;
	struct v7fs_self *fs = v7fsmount->core;

	DPRINTF("scratch remain=%d\n", fs->scratch_remain);

	v7fs_superblock_status(fs);

	f->f_bsize = V7FS_BSIZE;
	f->f_frsize = V7FS_BSIZE;
	f->f_iosize = V7FS_BSIZE;
	f->f_blocks = fs->stat.total_blocks;
	f->f_bfree = fs->stat.free_blocks;
	f->f_bavail = fs->stat.free_blocks;
	f->f_bresvd = 0;
	f->f_files = fs->stat.total_files;
	f->f_ffree = fs->stat.free_inode;
	f->f_favail = f->f_ffree;
	f->f_fresvd = 0;
	copy_statvfs_info(f, mp);

	return 0;
}

int
v7fs_sync(struct mount *mp, int waitfor, kauth_cred_t cred)
{
	struct v7fs_mount *v7fsmount = mp->mnt_data;
	struct v7fs_self *fs = v7fsmount->core;
	struct v7fs_node *v7fs_node;
	struct v7fs_inode *inode;
	struct vnode *v;
	int err, error;
	int retry_cnt;

	DPRINTF("\n");

	v7fs_superblock_writeback(fs);
	for (retry_cnt = 0; retry_cnt < 2; retry_cnt++) {
		error = 0;

		mutex_enter(&mntvnode_lock);
		for (v7fs_node = LIST_FIRST(&v7fsmount->v7fs_node_head);
		    v7fs_node != NULL; v7fs_node = LIST_NEXT(v7fs_node, link)) {
			inode = &v7fs_node->inode;
			if (!v7fs_inode_allocated(inode)) {
				continue;
			}
			v = v7fs_node->vnode;
			mutex_enter(v->v_interlock);
			mutex_exit(&mntvnode_lock);
			err = vget(v, LK_EXCLUSIVE | LK_NOWAIT);
			if (err == 0) {
				err = VOP_FSYNC(v, cred, FSYNC_WAIT, 0, 0);
				vput(v);
			}
			if (err != 0)
				error = err;
			mutex_enter(&mntvnode_lock);
		}
		mutex_exit(&mntvnode_lock);

		if (error == 0)
			break;
	}

	return error;
}

static enum vtype
v7fs_mode_to_vtype (v7fs_mode_t mode)
{
	enum vtype table[] = { VCHR, VDIR, VBLK, VREG, VLNK, VSOCK };

	if ((mode & V7FS_IFMT) == V7FSBSD_IFFIFO)
		return VFIFO;

	return table[((mode >> 13) & 7) - 1];
}

int
v7fs_vget(struct mount *mp, ino_t ino, struct vnode **vpp)
{
	struct v7fs_mount *v7fsmount = mp->mnt_data;
	struct v7fs_self *fs = v7fsmount->core;
	struct vnode *vp;
	struct v7fs_node *v7fs_node;
	struct v7fs_inode inode;
	int error;

	/* Lookup requested i-node */
	if ((error = v7fs_inode_load(fs, &inode, ino))) {
		DPRINTF("v7fs_inode_load failed.\n");
		return error;
	}

retry:
	mutex_enter(&mntvnode_lock);
	for (v7fs_node = LIST_FIRST(&v7fsmount->v7fs_node_head);
	    v7fs_node != NULL; v7fs_node = LIST_NEXT(v7fs_node, link)) {
		if (v7fs_node->inode.inode_number == ino) {
			vp = v7fs_node->vnode;
			mutex_enter(vp->v_interlock);
			mutex_exit(&mntvnode_lock);
			if (vget(vp, LK_EXCLUSIVE) == 0) {
				*vpp = vp;
				return 0;
			} else {
				DPRINTF("retry!\n");
				goto retry;
			}
		}
	}
	mutex_exit(&mntvnode_lock);

	/* Allocate v-node. */
	if ((error = getnewvnode(VT_V7FS, mp, v7fs_vnodeop_p, NULL, &vp))) {
		DPRINTF("getnewvnode error.\n");
		return error;
	}
	/* Lock vnode here */
	vn_lock(vp, LK_EXCLUSIVE | LK_RETRY);

	/* Allocate i-node */
	vp->v_data = pool_get(&v7fs_node_pool, PR_WAITOK);
	memset(vp->v_data, 0, sizeof(*v7fs_node));
	v7fs_node = vp->v_data;
	mutex_enter(&mntvnode_lock);
	LIST_INSERT_HEAD(&v7fsmount->v7fs_node_head, v7fs_node, link);
	mutex_exit(&mntvnode_lock);
	v7fs_node->vnode = vp;
	v7fs_node->v7fsmount = v7fsmount;
	v7fs_node->inode = inode;/*structure copy */
	v7fs_node->lockf = NULL; /* advlock */

	genfs_node_init(vp, &v7fs_genfsops);
	uvm_vnp_setsize(vp, v7fs_inode_filesize(&inode));

	if (ino == V7FS_ROOT_INODE) {
		vp->v_type = VDIR;
		vp->v_vflag |= VV_ROOT;
	} else {
		vp->v_type = v7fs_mode_to_vtype(inode.mode);

		if (vp->v_type == VBLK || vp->v_type == VCHR) {
			dev_t rdev = inode.device;
			vp->v_op = v7fs_specop_p;
			spec_node_init(vp, rdev);
		} else if (vp->v_type == VFIFO) {
			vp->v_op = v7fs_fifoop_p;
		}
	}

	*vpp = vp;

	return 0;
}


int
v7fs_fhtovp(struct mount *mp, struct fid *fid, struct vnode **vpp)
{

	DPRINTF("\n");
	/* notyet */
	return EOPNOTSUPP;
}

int
v7fs_vptofh(struct vnode *vpp, struct fid *fid, size_t *fh_size)
{

	DPRINTF("\n");
	/* notyet */
	return EOPNOTSUPP;
}

MALLOC_DECLARE(M_V7FS);
MALLOC_DECLARE(M_V7FS_VNODE);

void
v7fs_init(void)
{

	DPRINTF("\n");
	malloc_type_attach(M_V7FS_VFS);
	malloc_type_attach(M_V7FS);
	malloc_type_attach(M_V7FS_VNODE);
	pool_init(&v7fs_node_pool, sizeof(struct v7fs_node), 0, 0, 0,
	    "v7fs_node_pool", &pool_allocator_nointr, IPL_NONE);
}

void
v7fs_reinit(void)
{

	/* Nothing to do. */
	DPRINTF("\n");
}

void
v7fs_done(void)
{

	DPRINTF("\n");
	pool_destroy(&v7fs_node_pool);
	malloc_type_detach(M_V7FS);
	malloc_type_detach(M_V7FS_VFS);
	malloc_type_detach(M_V7FS_VNODE);
}

int
v7fs_gop_alloc(struct vnode *vp, off_t off, off_t len, int flags,
    kauth_cred_t cred)
{

	DPRINTF("\n");
	return 0;
}

int
v7fs_mountroot(void)
{
	struct mount *mp;
	int error;

	DPRINTF("");
	/* On mountroot, devvp (rootdev) is opened by vfs_mountroot */
	if ((error = is_v7fs_partition (rootvp)))
		return error;

	if ((error = vfs_rootmountalloc(MOUNT_V7FS, "root_device", &mp))) {
		DPRINTF("mountalloc error=%d\n", error);
		vrele(rootvp);
		return error;
	}

	if ((error = v7fs_mountfs(rootvp, mp, _BYTE_ORDER))) {
		DPRINTF("mountfs error=%d\n", error);
		vfs_unbusy(mp, false, NULL);
		vfs_destroy(mp);
		return error;
	}

	mutex_enter(&mountlist_lock);
	CIRCLEQ_INSERT_TAIL(&mountlist, mp, mnt_list);
	mutex_exit(&mountlist_lock);

	vfs_unbusy(mp, false, NULL);

	return 0;
}

/* Reload disk inode information */
int
v7fs_vnode_reload(struct mount *mp, struct vnode *vp)
{
	struct v7fs_mount *v7fsmount = mp->mnt_data;
	struct v7fs_self *fs = v7fsmount->core;
	struct v7fs_node *v7fs_node;
	struct v7fs_inode *inode = &((struct v7fs_node *)vp->v_data)->inode;
	int target_ino = inode->inode_number;
	int error = 0;

	DPRINTF("#%d\n", target_ino);
	mutex_enter(&mntvnode_lock);
	for (v7fs_node = LIST_FIRST(&v7fsmount->v7fs_node_head);
	     v7fs_node != NULL; v7fs_node = LIST_NEXT(v7fs_node, link)) {
		inode = &v7fs_node->inode;
		if (!v7fs_inode_allocated(inode)) {
			continue;
		}
		if (inode->inode_number == target_ino) {
			error = v7fs_inode_load(fs, &v7fs_node->inode,
			    target_ino);
			DPRINTF("sync #%d error=%d\n", target_ino, error);
			break;
		}
	}
	mutex_exit(&mntvnode_lock);

	return error;
}
