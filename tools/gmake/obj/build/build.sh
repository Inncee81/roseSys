#!/bin/sh
# Shell script to build GNU Make in the absence of any `make' program.
# build.sh.  Generated from build.sh.in by configure.

# Copyright (C) 1993, 1994, 1997 Free Software Foundation, Inc.
# This file is part of GNU Make.
#
# GNU Make is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2, or (at your option)
# any later version.
#
# GNU Make is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with GNU Make; see the file COPYING.  If not, write to
# the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
# Boston, MA 02111-1307, USA.

# See Makefile.in for comments describing these variables.

srcdir='/home/licj/software/netBSD/source/netBSD/usr/src/tools/gmake/../../gnu/dist/gmake'
CC='cc'
CFLAGS='-O'
CPPFLAGS=''
LDFLAGS=''
ALLOCA=''
LOADLIBES='-lrt '
extras=''
REMOTE='@REMOTE@'
GLOBLIB=''

# Common prefix for machine-independent installed files.
prefix='/home/licj/software/netBSD/source/netBSD/usr/src/obj/tooldir.Linux-2.6.32-358.el6.x86_64-x86_64'
# Common prefix for machine-dependent installed files.
exec_prefix=`eval echo ${prefix}`
# Directory to find libraries in for `-lXXX'.
libdir=${exec_prefix}/lib
# Directory to search by default for included makefiles.
includedir=${prefix}/include

localedir=${prefix}/share/locale
aliaspath=${localedir}:.

defines="-DALIASPATH=\"${aliaspath}\" -DLOCALEDIR=\"${localedir}\" -DLIBDIR=\"${libdir}\" -DINCLUDEDIR=\"${includedir}\""' -DHAVE_CONFIG_H'

# Exit as soon as any command fails.
set -e

# These are all the objects we need to link together.
objs="ar.o arscan.o commands.o default.o dir.o expand.o file.o function.o getopt.o getopt1.o implicit.o job.o main.o misc.o read.o remake.o rule.o signame.o variable.o version.o vpath.o hash.o remote-${REMOTE}.o ${extras} ${ALLOCA}"

if [ x"$GLOBLIB" != x ]; then
  objs="$objs glob/fnmatch.o glob/glob.o"
  globinc=-I${srcdir}/glob
fi

# Compile the source files into those objects.
for file in `echo ${objs} | sed 's/\.o/.c/g'`; do
  echo compiling ${file}...
  $CC $defines $CPPFLAGS $CFLAGS \
      -c -I. -I${srcdir} ${globinc} ${srcdir}/$file
done

# The object files were actually all put in the current directory.
# Remove the source directory names from the list.
srcobjs="$objs"
objs=
for obj in $srcobjs; do
  objs="$objs `basename $obj`"
done

# Link all the objects together.
echo linking make...
$CC $LDFLAGS $objs $LOADLIBES -o make.new
echo done
mv -f make.new make
