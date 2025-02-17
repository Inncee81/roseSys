#	$NetBSD: defs.mk.in,v 1.10 2011/08/14 20:22:42 apb Exp $

COMPATOBJ:=	${.PARSEDIR}
HOSTEXEEXT=	

HOST_BSHELL=	/bin/sh

BUILD_OSTYPE!=  uname -s

# Disable use of pre-compiled headers on Darwin.
.if ${BUILD_OSTYPE} == "Darwin"
HOST_CPPFLAGS+=	-no-cpp-precomp
.endif

HOST_CPPFLAGS+=	-I${COMPATOBJ} -I${COMPATOBJ}/include \
		-I${.CURDIR}/../compat -DHAVE_NBTOOL_CONFIG_H=1 \
		-D_FILE_OFFSET_BITS=64

DPADD+=		${COMPATOBJ}/libnbcompat.a
LDADD+=		-L${COMPATOBJ} -lnbcompat -lz 

HAVE_PTHREAD_H=	yes
