#if HAVE_NBTOOL_CONFIG_H
#include "nbtool_config.h"
#endif
#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#ifdef _LIBC
#include "namespace.h"
#endif
#include <stdlib.h>
#include <string.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 4 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/mkesdb/../../usr.bin/mkesdb/yacc.y"
/*-
 * Copyright (c)2003 Citrus Project,
 * All rights reserved.
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
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#if HAVE_NBTOOL_CONFIG_H
#include "nbtool_config.h"
#endif

#include <sys/cdefs.h>
#if !defined(lint)
__RCSID("$NetBSD: yacc.y,v 1.6 2011/09/16 15:39:27 joerg Exp $");
#endif /* not lint */

#include <assert.h>
#include <err.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/queue.h>

#include "citrus_namespace.h"
#include "citrus_types.h"
#include "citrus_region.h"
#include "citrus_esdb_file.h"
#include "citrus_db_hash.h"
#include "citrus_db_factory.h"
#include "citrus_lookup_factory.h"

#include "ldef.h"

static int			debug = 0, num_csids = 0;
static char			*output = NULL;
static char			*name, *encoding, *variable;
static u_int32_t		invalid;
static int			use_invalid = 0;
static struct named_csid_list	named_csids;

static void	dump_file(void);
static void	register_named_csid(char *, u_int32_t);
static void	set_prop_string(const char *, char **, char **);
static void	set_invalid(u_int32_t);
#line 72 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/mkesdb/../../usr.bin/mkesdb/yacc.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	u_int32_t	i_value;
	char		*s_value;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 104 "yacc.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#define YYERROR_DECL() yyerror(const char *s)
#define YYERROR_CALL(msg) yyerror(msg)

extern int YYPARSE_DECL();


#define R_NAME 257
#define R_ENCODING 258
#define R_VARIABLE 259
#define R_DEFCSID 260
#define R_INVALID 261
#define R_LN 262
#define L_IMM 263
#define L_STRING 264
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    1,    1,    1,    1,    1,    1,    2,    3,
    4,    5,    6,
};
static const short yylen[] = {                            2,
    1,    0,    2,    3,    3,    3,    3,    3,    2,    2,
    2,    3,    2,
};
static const short yydefred[] = {                         2,
    0,    0,    0,    0,    0,    0,    0,    3,    0,    0,
    0,    0,    0,    9,   10,   11,    0,   13,    4,    5,
    6,    7,    8,   12,
};
static const short yydgoto[] = {                          1,
    2,    9,   10,   11,   12,   13,
};
static const short yysindex[] = {                         0,
    0, -257, -258, -256, -255, -254, -252,    0, -250, -249,
 -248, -247, -246,    0,    0,    0, -245,    0,    0,    0,
    0,    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    7,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 18
static const short yytable[] = {                          3,
    4,    5,    6,    7,    8,   14,    1,   15,   16,   17,
   18,   19,   20,   21,   22,   23,    0,   24,
};
static const short yycheck[] = {                        257,
  258,  259,  260,  261,  262,  264,    0,  264,  264,  264,
  263,  262,  262,  262,  262,  262,   -1,  263,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 264
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"R_NAME","R_ENCODING",
"R_VARIABLE","R_DEFCSID","R_INVALID","R_LN","L_IMM","L_STRING",
};
static const char *yyrule[] = {
"$accept : file",
"file : property",
"property :",
"property : property R_LN",
"property : property name R_LN",
"property : property encoding R_LN",
"property : property variable R_LN",
"property : property defcsid R_LN",
"property : property invalid R_LN",
"name : R_NAME L_STRING",
"encoding : R_ENCODING L_STRING",
"variable : R_VARIABLE L_STRING",
"defcsid : R_DEFCSID L_STRING L_IMM",
"invalid : R_INVALID L_IMM",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 118 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/mkesdb/../../usr.bin/mkesdb/yacc.y"

int
yyerror(const char *s)
{
	fprintf(stderr, "%s in %d\n", s, line_number);

	return (0);
}

#define CHKERR(ret, func, a)						\
do {									\
	ret = func a;							\
	if (ret)							\
		errx(EXIT_FAILURE, "%s: %s", #func, strerror(ret));	\
} while (/*CONSTCOND*/0)
static void
dump_file(void)
{
	int ret;
	FILE *fp;
	struct _db_factory *df;
	struct _region data;
	struct named_csid *csid;
	char buf[100];
	int i;
	void *serialized;
	size_t size;

	ret = 0;
	if (!name) {
		fprintf(stderr, "NAME is mandatory.\n");
		ret = 1;
	}
	if (!encoding) {
		fprintf(stderr, "ENCODING is mandatory.\n");
		ret = 1;
	}
	if (ret)
		exit(1);

	/*
	 * build database
	 */
	CHKERR(ret, _db_factory_create, (&df, _db_hash_std, NULL));

	/* store version */
	CHKERR(ret, _db_factory_add32_by_s, (df, _CITRUS_ESDB_SYM_VERSION,
					     _CITRUS_ESDB_VERSION));

	/* store encoding */
	CHKERR(ret, _db_factory_addstr_by_s, (df, _CITRUS_ESDB_SYM_ENCODING,
					      encoding));

	/* store variable */
	if (variable)
		CHKERR(ret, _db_factory_addstr_by_s,
		       (df, _CITRUS_ESDB_SYM_VARIABLE, variable));

	/* store invalid */
	if (use_invalid)
		CHKERR(ret, _db_factory_add32_by_s, (df,
						     _CITRUS_ESDB_SYM_INVALID,
						     invalid));

	/* store num of charsets */
	CHKERR(ret, _db_factory_add32_by_s, (df, _CITRUS_ESDB_SYM_NUM_CHARSETS,
					     num_csids));
	i=0;
	SIMPLEQ_FOREACH(csid, &named_csids, ci_entry) {
		snprintf(buf, sizeof(buf), _CITRUS_ESDB_SYM_CSNAME_PREFIX "%d",
		    i);
		CHKERR(ret, _db_factory_addstr_by_s,
		       (df, buf, csid->ci_symbol));
		snprintf(buf, sizeof(buf), _CITRUS_ESDB_SYM_CSID_PREFIX "%d",
		    i);
		CHKERR(ret, _db_factory_add32_by_s, (df, buf, csid->ci_csid));
		i++;
	}

	/*
	 * dump database to file
	 */
	if (output)
		fp = fopen(output, "wb");
	else
		fp = stdout;

	if (fp == NULL) {
		perror("fopen");
		exit(1);
	}

	/* dump database body */
	size = _db_factory_calc_size(df);
	serialized = malloc(size);
	_region_init(&data, serialized, size);
	CHKERR(ret, _db_factory_serialize, (df, _CITRUS_ESDB_MAGIC, &data));
	if (fwrite(serialized, size, 1, fp) != 1)
		err(EXIT_FAILURE, "fwrite");

	fclose(fp);
}

static void
set_prop_string(const char *res, char **store, char **data)
{
	char buf[256];

	if (*store) {
		snprintf(buf, sizeof(buf),
			 "%s is duplicated. ignored the one", res);
		yyerror(buf);
		return;
	}

	*store = *data;
	*data = NULL;
}

static void
set_invalid(u_int32_t inv)
{
	invalid = inv;
	use_invalid = 1;
}

static void
register_named_csid(char *sym, u_int32_t val)
{
	struct named_csid *csid;

	SIMPLEQ_FOREACH(csid, &named_csids, ci_entry) {
		if (strcmp(csid->ci_symbol, sym) == 0) {
			yyerror("multiply defined CSID");
			exit(1);
		}
	}

	csid = malloc(sizeof(*csid));
	if (csid == NULL) {
		perror("malloc");
		exit(1);
	}
	csid->ci_symbol = sym;
	csid->ci_csid = val;
	SIMPLEQ_INSERT_TAIL(&named_csids, csid, ci_entry);
	num_csids++;
}

static void
do_mkdb(FILE *in)
{
	int ret;
	FILE *out;

        /* dump DB to file */
	if (output)
		out = fopen(output, "wb");
	else
		out = stdout;

	if (out==NULL)
		err(EXIT_FAILURE, "fopen");

	ret = _lookup_factory_convert(out, in);
	fclose(out);
	if (ret && output)
		unlink(output); /* dump failure */
	if (ret)
		errx(EXIT_FAILURE, "%s\n", strerror(ret));
}

__dead static void
usage(void)
{
	errx(EXIT_FAILURE,
	     "usage:\n"
	     "\t%s [-o outfile] [infile]\n"
	     "\t%s -m [-o outfile] [infile]",
	     getprogname(), getprogname());
}

int
main(int argc, char **argv)
{
	int ch;
	extern char *optarg;
	extern int optind;
	FILE *in = NULL;
	int mkdb = 0;

	while ((ch=getopt(argc, argv, "do:m")) != EOF) {
		switch (ch) {
		case 'd':
			debug = 1;
			break;
		case 'o':
			output = strdup(optarg);
			break;
		case 'm':
			mkdb = 1;
			break;
		default:
			usage();
		}
	}

	argc-=optind;
	argv+=optind;
	switch (argc) {
	case 0:
		in = stdin;
		break;
	case 1:
		in = fopen(argv[0], "r");
		if (!in)
			err(EXIT_FAILURE, "%s", argv[0]);
		break;
	default:
		usage();
	}

	if (mkdb)
		do_mkdb(in);
	else {
		SIMPLEQ_INIT(&named_csids);
		yyin=in;
		yyparse();
	}

	return (0);
}
#line 483 "yacc.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 85 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/mkesdb/../../usr.bin/mkesdb/yacc.y"
	{ dump_file(); }
break;
case 9:
#line 96 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/mkesdb/../../usr.bin/mkesdb/yacc.y"
	{
			set_prop_string("NAME", &name, &yystack.l_mark[0].s_value);
		}
break;
case 10:
#line 101 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/mkesdb/../../usr.bin/mkesdb/yacc.y"
	{
			set_prop_string("ENCODING", &encoding, &yystack.l_mark[0].s_value);
		}
break;
case 11:
#line 105 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/mkesdb/../../usr.bin/mkesdb/yacc.y"
	{
			set_prop_string("VARIABLE", &variable, &yystack.l_mark[0].s_value);
		}
break;
case 12:
#line 109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/mkesdb/../../usr.bin/mkesdb/yacc.y"
	{
			register_named_csid(yystack.l_mark[-1].s_value, yystack.l_mark[0].i_value);
			yystack.l_mark[-1].s_value = NULL;
		}
break;
case 13:
#line 114 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/mkesdb/../../usr.bin/mkesdb/yacc.y"
	{
			set_invalid(yystack.l_mark[0].i_value);
		}
break;
#line 724 "yacc.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
