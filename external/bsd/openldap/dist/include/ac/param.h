/*	$NetBSD: param.h,v 1.1.1.3 2010/12/12 15:21:26 adam Exp $	*/

/* Generic param.h */
/* OpenLDAP: pkg/ldap/include/ac/param.h,v 1.13.2.6 2010/04/13 20:22:51 kurt Exp */
/* This work is part of OpenLDAP Software <http://www.openldap.org/>.
 *
 * Copyright 1998-2010 The OpenLDAP Foundation.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted only as authorized by the OpenLDAP
 * Public License.
 *
 * A copy of this license is available in file LICENSE in the
 * top-level directory of the distribution or, alternatively, at
 * <http://www.OpenLDAP.org/license.html>.
 */

#ifndef _AC_PARAM_H
#define _AC_PARAM_H

#ifdef HAVE_SYS_PARAM_H
#include <sys/param.h>
#endif

/* MAXPATHLEN should come from <unistd.h> */
#include <ac/unistd.h>

#ifndef MAXPATHLEN
#	if defined(PATH_MAX)
#		define MAXPATHLEN	PATH_MAX

#	elif defined(_MAX_PATH)
#		define MAXPATHLEN	_MAX_PATH

#	else
#		define MAXPATHLEN	4096
#	endif
#endif

#endif /* _AC_PARAM_H */