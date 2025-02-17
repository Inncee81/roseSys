#	$NetBSD: crypto.inc,v 1.3.18.1 2014/06/06 05:20:06 msaitoh Exp $
#
#	@(#) Copyright (c) 1995 Simon J. Gerraty
#
#	SRCS extracted from src/crypto/dist/openssl/crypto/Makefile
#

.PATH:	${OPENSSLSRC}/crypto


CRYPTO_SRCS = cryptlib.c mem.c mem_dbg.c cversion.c ex_data.c \
	cpt_err.c ebcdic.c uid.c o_time.c o_str.c o_dir.c o_fips.c o_init.c
SRCS += ${CRYPTO_SRCS}

.if !defined(CPUID)
CRYPTO_SRCS+=  mem_clr.c
.else
CRYPTO_SRCS+=  ${CPUID_SRCS}
CRYPTOCPPFLAGS=-DOPENSSL_CPUID_OBJ
.endif

.for cryptosrc in ${CRYPTO_SRCS}
CPPFLAGS.${cryptosrc} += -I${OPENSSLSRC}/crypto/crypto ${CRYPTOCPPFLAGS}
.endfor
