/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "file.y" /* yacc.c:339  */

	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include "node.h"
	
	extern FILE *yyin;
	extern char *yytext;
	
	extern int yylex();
	void yyerror(const char* s);

	FILE* outfile;

	int sec_count = 0;
	int subsec_count = 0;
	int fig_count = 0;

	struct node{
		char id[20];
		char val[100]; 
		int sec_cnt;
		int subsec_cnt;
	};

	struct node label_data[100];
	int label_count=0;

	char key1[20];
	char key2[100];

	struct tree* ptr[1000];
	struct tree* temp;
	struct tree* ROOT;

	char *tempstr1, *tempstr2;
	char buffer[10000];


#line 106 "file.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "file.tab.h".  */
#ifndef YY_YY_FILE_TAB_H_INCLUDED
# define YY_YY_FILE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CRLOB = 258,
    CRLCB = 259,
    SQOB = 260,
    SQCB = 261,
    PRNOB = 262,
    PRNCB = 263,
    BGN = 264,
    END = 265,
    DOCCLS = 266,
    DOC = 267,
    USPKG = 268,
    STR = 269,
    NL = 270,
    MSTR = 271,
    DDLR = 272,
    DLR = 273,
    SUP = 274,
    SUB = 275,
    SQRT = 276,
    SUM = 277,
    INT = 278,
    FRAC = 279,
    PAR = 280,
    SEC = 281,
    SUBSEC = 282,
    CLN = 283,
    LBL = 284,
    REF = 285,
    ITEMIZE = 286,
    ENUM = 287,
    ITEM = 288,
    CAPTION = 289,
    FIG = 290,
    INCGRAP = 291,
    TUL = 292,
    TIF = 293,
    TBF = 294,
    TBLR = 295,
    HL = 296,
    VB = 297,
    AMP = 298,
    DD = 299
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 41 "file.y" /* yacc.c:355  */

	struct tree* PTR;

#line 195 "file.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_FILE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 212 "file.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   296

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  187
/* YYNRULES -- Number of rules.  */
#define YYNRULES  230
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  335

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    90,    90,    91,    92,    93,    90,    97,   100,    97,
     104,   106,   108,   104,   112,   113,   115,   116,   120,   121,
     118,   126,   125,   130,   130,   133,   136,   139,   142,   145,
     148,   151,   154,   157,   160,   163,   166,   169,   181,   182,
     183,   184,   185,   180,   192,   193,   194,   195,   191,   206,
     208,   205,   216,   219,   221,   223,   218,   246,   247,   248,
     245,   254,   255,   256,   253,   262,   263,   264,   261,   270,
     271,   272,   269,   282,   283,   284,   281,   288,   294,   295,
     292,   299,   298,   304,   305,   306,   303,   311,   317,   318,
     319,   316,   323,   329,   330,   327,   334,   333,   339,   340,
     341,   338,   345,   354,   355,   356,   357,   353,   361,   365,
     370,   371,   369,   375,   374,   380,   382,   383,   379,   387,
     388,   386,   393,   394,   395,   396,   392,   402,   403,   404,
     405,   401,   420,   421,   422,   415,   426,   431,   435,   436,
     438,   439,   440,   441,   444,   445,   443,   449,   450,   448,
     454,   453,   458,   457,   463,   464,   465,   462,   470,   471,
     469,   475,   474,   480,   481,   482,   479,   490,   494,   496,
     498,   493,   503,   505,   502,   509,   512,   508,   516,   519,
     527,   528,   525,   534,   535,   532,   541,   542,   539,   547,
     548,   545,   552,   558,   560,   562,   563,   565,   567,   569,
     557,   574,   576,   573,   580,   582,   579,   587,   589,   586,
     593,   595,   592,   599,   602,   605,   609,   613,   615,   616,
     612,   621,   623,   624,   620,   630,   629,   636,   635,   641,
     642
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CRLOB", "CRLCB", "SQOB", "SQCB",
  "PRNOB", "PRNCB", "BGN", "END", "DOCCLS", "DOC", "USPKG", "STR", "NL",
  "MSTR", "DDLR", "DLR", "SUP", "SUB", "SQRT", "SUM", "INT", "FRAC", "PAR",
  "SEC", "SUBSEC", "CLN", "LBL", "REF", "ITEMIZE", "ENUM", "ITEM",
  "CAPTION", "FIG", "INCGRAP", "TUL", "TIF", "TBF", "TBLR", "HL", "VB",
  "AMP", "DD", "$accept", "strt", "$@1", "$@2", "$@3", "$@4", "part_a",
  "$@5", "$@6", "part_b", "$@7", "$@8", "$@9", "preamble", "preamble1",
  "content", "$@10", "$@11", "$@12", "content1", "$@13", "sec", "$@14",
  "$@15", "$@16", "$@17", "$@18", "subsec", "$@19", "$@20", "$@21", "$@22",
  "label", "$@23", "$@24", "ref", "$@25", "$@26", "$@27", "un", "$@28",
  "$@29", "$@30", "if", "$@31", "$@32", "$@33", "bf", "$@34", "$@35",
  "$@36", "par", "$@37", "$@38", "$@39", "ul", "$@40", "$@41", "$@42",
  "ul_open", "ul_items", "$@43", "$@44", "$@45", "ul_item", "$@46", "$@47",
  "$@48", "ul_close", "ol", "$@49", "$@50", "$@51", "ol_open", "ol_items",
  "$@52", "$@53", "$@54", "ol_item", "$@55", "$@56", "$@57", "ol_close",
  "figenv", "$@58", "$@59", "$@60", "$@61", "fig_open", "fig_close",
  "fig_content", "$@62", "$@63", "$@64", "fig_part", "$@65", "$@66",
  "$@67", "$@68", "$@69", "img", "$@70", "$@71", "$@72", "$@73", "caption",
  "$@74", "$@75", "$@76", "$@77", "table", "$@78", "$@79", "$@80",
  "table_open", "table_close", "tblbr", "tblbr_content", "tblcontent",
  "$@81", "$@82", "$@83", "$@84", "$@85", "$@86", "tablerow", "$@87",
  "$@88", "$@89", "rowcontent", "$@90", "$@91", "$@92", "col", "$@93",
  "$@94", "$@95", "math", "$@96", "$@97", "$@98", "math_content1", "$@99",
  "$@100", "$@101", "$@102", "math_content", "$@103", "$@104", "$@105",
  "$@106", "$@107", "$@108", "$@109", "$@110", "frac", "$@111", "$@112",
  "$@113", "$@114", "$@115", "$@116", "$@117", "sumint", "$@118", "$@119",
  "$@120", "$@121", "sumint_supsub", "$@122", "$@123", "$@124", "$@125",
  "math_subcontent", "supenv", "$@126", "$@127", "$@128", "subenv",
  "$@129", "$@130", "$@131", "supenv_content", "$@132", "subenv_content",
  "$@133", "mstr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
# endif

#define YYPACT_NINF -204

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-204)))

#define YYTABLE_NINF -116

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -204,    18,  -204,  -204,  -204,    13,  -204,    34,  -204,    19,
      28,  -204,    42,    46,  -204,    39,    40,    48,    51,  -204,
    -204,    -4,    41,  -204,    53,  -204,  -204,    25,    54,    55,
      56,    57,    58,    59,    60,    61,  -204,    -4,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,    32,  -204,    33,  -204,
      31,  -204,  -204,    65,  -204,    66,   -20,  -204,    25,  -204,
    -204,  -204,  -204,  -204,    68,    25,    62,  -204,  -204,  -204,
      63,    64,    67,    69,    70,    71,    72,    73,    78,  -204,
    -204,    75,    80,    32,    77,    82,    33,    83,    31,    35,
      -6,     3,    40,    90,    91,    92,    93,  -204,    76,   -13,
     -13,  -204,  -204,  -204,   -13,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,    79,  -204,  -204,    95,  -204,  -204,  -204,
    -204,    98,  -204,  -204,  -204,    99,  -204,  -204,  -204,    38,
    -204,    -6,    -6,   100,    11,    96,    29,  -204,    74,  -204,
    -204,  -204,  -204,  -204,  -204,    86,    11,  -204,  -204,  -204,
    -204,  -204,  -204,    11,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,    47,  -204,  -204,  -204,  -204,    97,
    -204,  -204,    43,  -204,  -204,  -204,    44,  -204,  -204,    81,
    -204,  -204,   102,  -204,  -204,  -204,  -204,  -204,    84,   104,
    -204,     3,  -204,    11,  -204,  -204,  -204,  -204,   105,   107,
    -204,    94,   101,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,   108,  -204,  -204,  -204,  -204,   109,  -204,
     111,  -204,  -204,  -204,   114,  -204,  -204,   117,  -204,  -204,
     110,  -204,     3,    85,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,   119,    11,  -204,    11,  -204,  -204,  -204,   123,   125,
    -204,  -204,  -204,  -204,   126,   127,   128,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
     129,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,   130,   131,   132,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
     133,  -204,   134,  -204,  -204,   135,   112,  -204,  -204,  -204,
    -204,  -204,  -204,   137,   112,   139,  -204,  -204,  -204,  -204,
    -204,   136,   140,    11,  -204,  -204,  -204,   115,   141,   138,
    -204,  -204,  -204,   142,  -204
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     7,     1,     3,     0,    10,     0,     4,     0,
       0,     5,     0,     0,     6,     0,    15,     0,     0,     8,
      14,     0,     0,     9,     0,    23,   168,   192,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    21,    25,    26,
      27,    28,    29,    30,    31,    32,     0,    33,     0,    34,
       0,    37,    35,   139,    36,     0,     0,    24,   192,   230,
     229,   175,   201,   204,     0,   192,     0,   179,   178,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
      22,     0,     0,    81,     0,     0,    96,     0,   113,   119,
       0,     0,    17,     0,     0,     0,     0,   169,     0,   213,
     213,   193,   180,   167,   216,    69,    38,    44,    53,   122,
      57,    61,    65,     0,    19,    83,     0,    73,    78,    82,
      98,     0,    88,    93,    97,     0,   103,   110,   114,     0,
     120,   142,   143,     0,     0,     0,     0,   154,   161,   163,
      16,    77,    92,   108,   136,     0,     0,   217,   221,   202,
     210,   207,   205,     0,   181,   184,   187,   190,   173,   214,
     215,    70,    39,    45,     0,   123,    58,    62,    66,     0,
      20,    84,     0,    74,    79,    99,     0,    89,    94,     0,
     104,   111,     0,   116,   121,   140,   141,   138,     0,     0,
     132,   152,   155,     0,   162,   164,   170,   176,     0,     0,
     203,     0,     0,   206,   194,   182,   185,   188,   191,   174,
      71,    40,    46,     0,   124,    59,    63,    67,     0,    85,
       0,    75,    80,   100,     0,    90,    95,     0,   105,   112,
       0,   117,   150,     0,   133,   147,   153,   156,   158,   165,
     171,     0,     0,   218,     0,   222,   211,   208,     0,     0,
      41,    47,    54,   125,     0,     0,     0,    12,    86,    87,
      76,   101,   102,    91,   109,   106,   127,   118,   144,   151,
       0,   134,   148,   157,   159,   166,   177,   225,   219,   227,
     223,   212,   209,   195,    72,    42,     0,     0,     0,    60,
      64,    68,    13,   107,   128,   145,   137,   135,   149,   160,
       0,   220,     0,   224,   196,     0,    52,    55,   126,   129,
     146,   226,   228,     0,    52,     0,    48,    56,   130,   197,
      43,     0,     0,     0,    49,   131,   198,     0,     0,     0,
     199,    50,   200,     0,    51
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,    20,   116,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -203,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
      87,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,    88,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
      89,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
     -46,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -102,  -189,  -204,
    -204,  -204,  -204,  -204,  -204,    14,  -204,  -204,  -204,   -44,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,   -49,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,   103,  -204,
    -204,  -204,  -204,  -204,  -103,  -204,  -204,  -204,  -101,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,   -27
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,    11,    14,     4,     5,    23,     8,
       9,    78,   292,    19,    20,    36,   114,   170,    80,    37,
      57,    38,   162,   211,   250,   285,   305,    39,   163,   212,
     251,   286,   316,   327,   333,    40,   164,   287,   317,    41,
     166,   215,   254,    42,   167,   216,   255,    43,   168,   217,
     256,    44,   161,   210,   249,    45,   173,   221,   260,    46,
      82,   174,   222,   119,    83,   171,   219,   258,   117,    47,
     177,   225,   263,    48,    85,   178,   226,   124,    86,   175,
     223,   261,   122,    49,   180,   228,   265,   293,    50,   126,
      87,   181,   229,   128,    88,   129,   231,   267,   130,   184,
      51,   165,   214,   253,   288,   183,   294,   309,   318,   322,
      52,   234,   271,   297,    53,   190,    91,   133,   135,   295,
     310,   272,   298,   269,   236,   136,   192,   237,   273,   137,
     274,   299,   194,   138,   195,   239,   275,    54,    58,   145,
     240,    65,   104,   209,    98,   241,    66,   154,   205,   155,
     206,   156,   207,   157,   208,    67,   153,   248,   304,   313,
     323,   328,   332,    68,    99,   200,   100,   203,   149,   202,
     282,   201,   281,   158,   150,   198,   278,   301,   151,   199,
     280,   303,   243,   300,   245,   302,   139
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,   159,   235,   160,    89,    24,   147,   148,   131,    97,
      25,    93,    94,    26,    27,    95,   102,    59,     3,    60,
      96,    28,    29,    30,     7,    59,    31,    60,    12,   185,
     186,    69,    32,    33,    34,    35,   132,    10,    69,    59,
      13,    60,    89,   268,   134,    15,    61,    62,    63,    64,
      16,    17,    21,    18,    22,    55,    56,    70,    71,    72,
      73,    74,    75,    76,    77,    81,    84,    32,    90,  -115,
      92,   101,   182,   191,   220,   213,   224,   105,   106,   146,
     103,   107,   169,   108,   109,   110,   111,   112,   113,   115,
     116,   120,   121,   125,   141,   142,   143,   144,   172,   247,
     246,   176,   179,   196,   187,   230,   189,   233,   242,   218,
     244,   320,   140,   257,   148,   259,   227,   193,   262,   197,
     147,   264,   252,   276,   266,   270,   204,   283,   232,   284,
     289,   290,   291,   296,   306,   307,   308,   311,   312,   314,
     319,   315,   321,   329,   325,   330,   334,     0,   188,   238,
     324,     0,   331,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,   123,     0,     0,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   152,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   277,     0,   279,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   326
};

static const yytype_int16 yycheck[] =
{
      27,   104,   191,   104,    50,     9,    19,    20,    14,    58,
      14,    31,    32,    17,    18,    35,    65,    14,     0,    16,
      40,    25,    26,    27,    11,    14,    30,    16,     9,   131,
     132,    58,    36,    37,    38,    39,    42,     3,    65,    14,
      12,    16,    88,   232,    41,     3,    21,    22,    23,    24,
       4,    12,     4,    13,     3,    14,     3,     3,     3,     3,
       3,     3,     3,     3,     3,    33,    33,    36,     3,    34,
       4,     3,    34,    44,    31,    28,    32,    14,    14,     3,
      18,    14,     3,    14,    14,    14,    14,    14,    10,    14,
      10,    14,    10,    10,     4,     4,     4,     4,     3,   202,
     201,     3,     3,    17,     4,     3,    10,     3,     3,    12,
       3,   314,    92,     4,    20,     4,    35,    43,     4,   146,
      19,     4,    14,     4,    14,    40,   153,     4,    44,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       3,    29,     3,    28,     4,     4,     4,    -1,   134,   193,
      14,    -1,    14,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    86,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,   244,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   323
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,    47,     0,    51,    52,    48,    11,    54,    55,
       3,    49,     9,    12,    50,     3,     4,    12,    13,    58,
      59,     4,     3,    53,     9,    14,    17,    18,    25,    26,
      27,    30,    36,    37,    38,    39,    60,    64,    66,    72,
      80,    84,    88,    92,    96,   100,   104,   114,   118,   128,
     133,   145,   155,   159,   182,    14,     3,    65,   183,    14,
      16,    21,    22,    23,    24,   186,   191,   200,   208,   231,
       3,     3,     3,     3,     3,     3,     3,     3,    56,    60,
      63,    33,   105,   109,    33,   119,   123,   135,   139,   145,
       3,   161,     4,    31,    32,    35,    40,   191,   189,   209,
     211,     3,   191,    18,   187,    14,    14,    14,    14,    14,
      14,    14,    14,    10,    61,    14,    10,   113,   105,   108,
      14,    10,   127,   119,   122,    10,   134,   135,   138,   140,
     143,    14,    42,   162,    41,   163,   170,   174,   178,   231,
      59,     4,     4,     4,     4,   184,     3,    19,    20,   213,
     219,   223,   213,   201,   192,   194,   196,   198,   218,   219,
     223,    97,    67,    73,    81,   146,    85,    89,    93,     3,
      62,   110,     3,   101,   106,   124,     3,   115,   120,     3,
     129,   136,    34,   150,   144,   162,   162,     4,   170,    10,
     160,    44,   171,    43,   177,   179,    17,   231,   220,   224,
     210,   216,   214,   212,   231,   193,   195,   197,   199,   188,
      98,    68,    74,    28,   147,    86,    90,    94,    12,   111,
      31,   102,   107,   125,    32,   116,   121,    35,   130,   137,
       3,   141,    44,     3,   156,   163,   169,   172,   174,   180,
     185,   190,     3,   227,     3,   229,   223,   219,   202,    99,
      69,    75,    14,   148,    87,    91,    95,     4,   112,     4,
     103,   126,     4,   117,     4,   131,    14,   142,   163,   168,
      40,   157,   166,   173,   175,   181,     4,   231,   221,   231,
     225,   217,   215,     4,     4,    70,    76,    82,   149,     4,
       4,     4,    57,   132,   151,   164,     4,   158,   167,   176,
     228,   222,   230,   226,   203,    71,     4,     4,     4,   152,
     165,     4,     4,   204,     4,    29,    77,    83,   153,     3,
      77,     3,   154,   205,    14,     4,   231,    78,   206,    28,
       4,    14,   207,    79,     4
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    47,    48,    49,    50,    46,    52,    53,    51,
      55,    56,    57,    54,    58,    58,    59,    59,    61,    62,
      60,    63,    60,    65,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    67,    68,
      69,    70,    71,    66,    73,    74,    75,    76,    72,    78,
      79,    77,    77,    81,    82,    83,    80,    85,    86,    87,
      84,    89,    90,    91,    88,    93,    94,    95,    92,    97,
      98,    99,    96,   101,   102,   103,   100,   104,   106,   107,
     105,   108,   105,   110,   111,   112,   109,   113,   115,   116,
     117,   114,   118,   120,   121,   119,   122,   119,   124,   125,
     126,   123,   127,   129,   130,   131,   132,   128,   133,   134,
     136,   137,   135,   138,   135,   140,   141,   142,   139,   143,
     144,   139,   146,   147,   148,   149,   145,   151,   152,   153,
     154,   150,   156,   157,   158,   155,   159,   160,   161,   161,
     162,   162,   162,   162,   164,   165,   163,   166,   167,   163,
     168,   163,   169,   163,   171,   172,   173,   170,   175,   176,
     174,   177,   174,   179,   180,   181,   178,   182,   183,   184,
     185,   182,   187,   188,   186,   189,   190,   186,   186,   186,
     192,   193,   191,   194,   195,   191,   196,   197,   191,   198,
     199,   191,   191,   201,   202,   203,   204,   205,   206,   207,
     200,   209,   210,   208,   211,   212,   208,   214,   215,   213,
     216,   217,   213,   213,   218,   218,   218,   220,   221,   222,
     219,   224,   225,   226,   223,   228,   227,   230,   229,   231,
     231
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,     0,     6,     0,     0,     7,
       0,     0,     0,    12,     1,     0,     5,     4,     0,     0,
       4,     0,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     9,     0,
       0,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       7,     0,     0,     0,     7,     0,     0,     0,     7,     0,
       0,     0,     7,     0,     0,     0,     6,     4,     0,     0,
       4,     0,     2,     0,     0,     0,     5,     4,     0,     0,
       0,     6,     4,     0,     0,     4,     0,     2,     0,     0,
       0,     5,     4,     0,     0,     0,     0,     7,     4,     4,
       0,     0,     4,     0,     2,     0,     0,     0,     5,     0,
       0,     3,     0,     0,     0,     0,     8,     0,     0,     0,
       0,     8,     0,     0,     0,     7,     4,     4,     3,     0,
       2,     2,     1,     1,     0,     0,     6,     0,     0,     5,
       0,     4,     0,     3,     0,     0,     0,     4,     0,     0,
       5,     0,     2,     0,     0,     0,     4,     3,     0,     0,
       0,     6,     0,     0,     4,     0,     0,     6,     1,     1,
       0,     0,     4,     0,     0,     4,     0,     0,     4,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,     0,     4,     0,     0,     4,     0,     0,     4,
       0,     0,     4,     0,     1,     1,     0,     0,     0,     0,
       5,     0,     0,     0,     5,     0,     4,     0,     4,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 90 "file.y" /* yacc.c:1646  */
    {ptr[0] = create_tree("<html>");}
#line 1575 "file.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 91 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[0],(yyvsp[0].PTR));}
#line 1581 "file.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 92 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[0],(yyvsp[0].PTR));}
#line 1587 "file.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 93 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[0],create_tree("</html>"));}
#line 1593 "file.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 94 "file.y" /* yacc.c:1646  */
    {ROOT = create_tree("@root"); connect_l_child(ROOT,ptr[0]);}
#line 1599 "file.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 97 "file.y" /* yacc.c:1646  */
    {ptr[1] = create_tree("<head>");}
#line 1605 "file.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 100 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[1],create_tree("</head>"));}
#line 1611 "file.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 101 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@part_a"); connect_l_child((yyval.PTR),ptr[1]);}
#line 1617 "file.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 104 "file.y" /* yacc.c:1646  */
    {ptr[2] = create_tree("<body>");}
#line 1623 "file.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 106 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[2],(yyvsp[0].PTR));}
#line 1629 "file.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 108 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[2],create_tree("</body>"));}
#line 1635 "file.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 109 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@part_b"); connect_l_child((yyval.PTR),ptr[2]);}
#line 1641 "file.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 112 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = empty_tree();}
#line 1647 "file.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 113 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = empty_tree();}
#line 1653 "file.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 120 "file.y" /* yacc.c:1646  */
    {ptr[3] = (yyvsp[-1].PTR);}
#line 1659 "file.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 121 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[3],(yyvsp[-1].PTR));}
#line 1665 "file.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 122 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@content"); connect_l_child((yyval.PTR),ptr[3]);}
#line 1671 "file.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 126 "file.y" /* yacc.c:1646  */
    {ptr[4] = (yyvsp[0].PTR);}
#line 1677 "file.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 127 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@content"); connect_l_child((yyval.PTR),ptr[4]);}
#line 1683 "file.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 130 "file.y" /* yacc.c:1646  */
    {ptr[5] = create_tree(yytext);}
#line 1689 "file.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 131 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@content1"); connect_l_child((yyval.PTR),ptr[5]);}
#line 1695 "file.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 134 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@content1"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 1701 "file.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 137 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@content1"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 1707 "file.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 140 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@content1"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 1713 "file.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 143 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@content1"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 1719 "file.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 146 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@content1"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 1725 "file.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 149 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@content1"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 1731 "file.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 152 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@content1"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 1737 "file.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 155 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@content1"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 1743 "file.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 158 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@content1"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 1749 "file.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 161 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@content1"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 1755 "file.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 164 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@content1"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 1761 "file.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 167 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@content1"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 1767 "file.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 170 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@content1"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 1773 "file.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 181 "file.y" /* yacc.c:1646  */
    {sprintf(buffer,"%d %s",++sec_count,yytext);}
#line 1779 "file.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 182 "file.y" /* yacc.c:1646  */
    {subsec_count = 0;}
#line 1785 "file.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 183 "file.y" /* yacc.c:1646  */
    {ptr[51] = create_tree("<h1>");}
#line 1791 "file.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 184 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[51],create_tree(buffer));}
#line 1797 "file.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 185 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[51],create_tree("</h1>"));}
#line 1803 "file.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 188 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@sec"); connect_l_child((yyval.PTR),ptr[51]);}
#line 1809 "file.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 192 "file.y" /* yacc.c:1646  */
    {sprintf(buffer,"%d.%d %s",sec_count,++subsec_count,yytext);}
#line 1815 "file.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 193 "file.y" /* yacc.c:1646  */
    {ptr[52] = create_tree("<h3>");}
#line 1821 "file.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 194 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[52],create_tree(buffer));}
#line 1827 "file.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 195 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[52],create_tree("</h3>"));}
#line 1833 "file.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 198 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@subsec"); connect_l_child((yyval.PTR),ptr[52]);}
#line 1839 "file.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 206 "file.y" /* yacc.c:1646  */
    {strcpy(label_data[label_count].id,yytext);}
#line 1845 "file.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 208 "file.y" /* yacc.c:1646  */
    {
					strcpy(label_data[label_count].val,yytext);
					label_data[label_count].sec_cnt = sec_count;
					label_data[label_count].subsec_cnt = subsec_count;
					label_count++;
				}
#line 1856 "file.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 219 "file.y" /* yacc.c:1646  */
    {strcpy(key1,yytext);}
#line 1862 "file.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 221 "file.y" /* yacc.c:1646  */
    {strcpy(key2,yytext);}
#line 1868 "file.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 223 "file.y" /* yacc.c:1646  */
    {
						for(int i=0;i<label_count;i++)
						{
							if(strcmp(label_data[i].id,key1)==0 && strcmp(label_data[i].val,key2)==0)
							{	
								if(label_data[i].subsec_cnt==0)	{
									sprintf(buffer,"%d",label_data[i].sec_cnt);
									ptr[53] = create_tree(buffer);
								}
								else 
									sprintf(buffer,"%d.%d",label_data[i].sec_cnt,label_data[i].subsec_cnt);
									ptr[53] = create_tree(buffer);
							}
						}
					}
#line 1888 "file.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 238 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@ref"), connect_l_child((yyval.PTR),ptr[53]);}
#line 1894 "file.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 246 "file.y" /* yacc.c:1646  */
    {ptr[54] = create_tree("<u>");}
#line 1900 "file.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 247 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[54],create_tree(yytext));}
#line 1906 "file.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 248 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[54],create_tree("</u>"));}
#line 1912 "file.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 250 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@underline"); connect_l_child((yyval.PTR),ptr[54]);}
#line 1918 "file.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 254 "file.y" /* yacc.c:1646  */
    {ptr[55] = create_tree("<i>");}
#line 1924 "file.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 255 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[55],create_tree(yytext));}
#line 1930 "file.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 256 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[55],create_tree("</i>"));}
#line 1936 "file.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 258 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@italic"); connect_l_child((yyval.PTR),ptr[55]);}
#line 1942 "file.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 262 "file.y" /* yacc.c:1646  */
    {ptr[56] = create_tree("<b>");}
#line 1948 "file.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 263 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[56],create_tree(yytext));}
#line 1954 "file.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 264 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[56],create_tree("</b>"));}
#line 1960 "file.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 266 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@bold"); connect_l_child((yyval.PTR),ptr[56]);}
#line 1966 "file.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 270 "file.y" /* yacc.c:1646  */
    {ptr[57] = create_tree("<p>");}
#line 1972 "file.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 271 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[57],create_tree(yytext));}
#line 1978 "file.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 272 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[57],create_tree("</p>"));}
#line 1984 "file.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 274 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@paragraph"); connect_l_child((yyval.PTR),ptr[57]);}
#line 1990 "file.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 282 "file.y" /* yacc.c:1646  */
    {ptr[58] = (yyvsp[-2].PTR);}
#line 1996 "file.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 283 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[58],(yyvsp[-2].PTR));}
#line 2002 "file.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 284 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[58],(yyvsp[-2].PTR));}
#line 2008 "file.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 285 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@ul"); connect_l_child((yyval.PTR),ptr[58]);}
#line 2014 "file.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 289 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@ul_open"); connect_l_child((yyval.PTR),create_tree("<ul>"));}
#line 2020 "file.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 294 "file.y" /* yacc.c:1646  */
    {ptr[59] = (yyvsp[-1].PTR);}
#line 2026 "file.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 295 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[59],(yyvsp[-1].PTR));}
#line 2032 "file.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 296 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@ul_items"); connect_l_child((yyval.PTR),ptr[59]);}
#line 2038 "file.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 299 "file.y" /* yacc.c:1646  */
    {ptr[59] = (yyvsp[0].PTR);}
#line 2044 "file.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 300 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@ul_items"); connect_l_child((yyval.PTR),ptr[59]);}
#line 2050 "file.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 304 "file.y" /* yacc.c:1646  */
    {ptr[60] = create_tree("<li>");}
#line 2056 "file.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 305 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[60],create_tree(yytext));}
#line 2062 "file.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 306 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[60],create_tree("</li>"));}
#line 2068 "file.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 307 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@ul_item");connect_l_child((yyval.PTR),ptr[60]);}
#line 2074 "file.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 312 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@ul_close"); connect_l_child((yyval.PTR),create_tree("</ul>"));}
#line 2080 "file.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 317 "file.y" /* yacc.c:1646  */
    {ptr[61] = (yyvsp[-2].PTR);}
#line 2086 "file.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 318 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[61],(yyvsp[-2].PTR));}
#line 2092 "file.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 319 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[61],(yyvsp[-2].PTR));}
#line 2098 "file.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 320 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@ol"); connect_l_child((yyval.PTR),ptr[61]);}
#line 2104 "file.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 324 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@ol_open"); connect_l_child((yyval.PTR),create_tree("<ol>"));}
#line 2110 "file.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 329 "file.y" /* yacc.c:1646  */
    {ptr[62] = (yyvsp[-1].PTR);}
#line 2116 "file.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 330 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[62],(yyvsp[-1].PTR));}
#line 2122 "file.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 331 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@ol_items"); connect_l_child((yyval.PTR),ptr[62]);}
#line 2128 "file.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 334 "file.y" /* yacc.c:1646  */
    {ptr[62] = (yyvsp[0].PTR);}
#line 2134 "file.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 335 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@ol_items"); connect_l_child((yyval.PTR),ptr[62]);}
#line 2140 "file.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 339 "file.y" /* yacc.c:1646  */
    {ptr[63] = create_tree("<li>");}
#line 2146 "file.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 340 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[63],create_tree(yytext));}
#line 2152 "file.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 341 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[63],create_tree("</li>"));}
#line 2158 "file.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 342 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@ol_item");connect_l_child((yyval.PTR),ptr[63]);}
#line 2164 "file.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 346 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@ol_close"); connect_l_child((yyval.PTR),create_tree("</ol>"));}
#line 2170 "file.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 354 "file.y" /* yacc.c:1646  */
    {fig_count=0;}
#line 2176 "file.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 355 "file.y" /* yacc.c:1646  */
    {ptr[64] = (yyvsp[-3].PTR);}
#line 2182 "file.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 356 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[64],(yyvsp[-3].PTR));}
#line 2188 "file.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 357 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[64],(yyvsp[-3].PTR));}
#line 2194 "file.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 358 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@figure"); connect_l_child((yyval.PTR),ptr[64]);}
#line 2200 "file.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 362 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@fig_open"); connect_l_child((yyval.PTR),create_tree("<figure>"));}
#line 2206 "file.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 366 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@fig_close"); connect_l_child((yyval.PTR),create_tree("</figure>"));}
#line 2212 "file.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 370 "file.y" /* yacc.c:1646  */
    {ptr[65] = (yyvsp[-1].PTR);}
#line 2218 "file.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 371 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[65],(yyvsp[-1].PTR));}
#line 2224 "file.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 372 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@fig_content"); connect_l_child((yyval.PTR),ptr[65]);}
#line 2230 "file.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 375 "file.y" /* yacc.c:1646  */
    {ptr[65] = (yyvsp[0].PTR);}
#line 2236 "file.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 376 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@fig_content"); connect_l_child((yyval.PTR),ptr[65]);}
#line 2242 "file.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 380 "file.y" /* yacc.c:1646  */
    {++fig_count;}
#line 2248 "file.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 382 "file.y" /* yacc.c:1646  */
    {ptr[66] = (yyvsp[-2].PTR);}
#line 2254 "file.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 383 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[66],(yyvsp[-1].PTR));}
#line 2260 "file.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 384 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@fig_part"); connect_l_child((yyval.PTR),ptr[66]);}
#line 2266 "file.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 387 "file.y" /* yacc.c:1646  */
    {++fig_count;}
#line 2272 "file.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 388 "file.y" /* yacc.c:1646  */
    {ptr[66] = (yyvsp[-1].PTR);}
#line 2278 "file.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 389 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@fig_part"); connect_l_child((yyval.PTR),ptr[66]);}
#line 2284 "file.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 393 "file.y" /* yacc.c:1646  */
    {sprintf(buffer,"src=%s",yytext);}
#line 2290 "file.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 394 "file.y" /* yacc.c:1646  */
    {ptr[67] = create_tree("<img ");}
#line 2296 "file.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 395 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[67],create_tree(buffer));}
#line 2302 "file.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 396 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[67],create_tree(">"));}
#line 2308 "file.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 398 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@img"); connect_l_child((yyval.PTR),ptr[67]);}
#line 2314 "file.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 402 "file.y" /* yacc.c:1646  */
    {sprintf(buffer,"Figure%d:%s",fig_count, yytext);}
#line 2320 "file.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 403 "file.y" /* yacc.c:1646  */
    {ptr[68] = create_tree("<figcaption>");}
#line 2326 "file.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 404 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[68],create_tree(buffer));}
#line 2332 "file.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 405 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[68],create_tree("</figcaption>"));}
#line 2338 "file.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 407 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@caption"); connect_l_child((yyval.PTR),ptr[68]);}
#line 2344 "file.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 420 "file.y" /* yacc.c:1646  */
    {ptr[70] = (yyvsp[-3].PTR);}
#line 2350 "file.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 421 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[70],(yyvsp[-2].PTR));}
#line 2356 "file.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 422 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[70],(yyvsp[-2].PTR));}
#line 2362 "file.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 423 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@table"); connect_l_child((yyval.PTR),ptr[70]);}
#line 2368 "file.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 427 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@tbl_open"); 
				connect_l_child((yyval.PTR),create_tree("<table style=\"border : 1px solid black\">"));}
#line 2375 "file.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 432 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@tbl_close"); connect_l_child((yyval.PTR),create_tree("</table>"));}
#line 2381 "file.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 436 "file.y" /* yacc.c:1646  */
    {}
#line 2387 "file.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 444 "file.y" /* yacc.c:1646  */
    {ptr[71] = (yyvsp[-2].PTR);}
#line 2393 "file.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 445 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[71],(yyvsp[-1].PTR));}
#line 2399 "file.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 446 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@tbl_content"); connect_l_child((yyval.PTR),ptr[71]);}
#line 2405 "file.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 449 "file.y" /* yacc.c:1646  */
    {ptr[71] = (yyvsp[-2].PTR);}
#line 2411 "file.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 450 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[71],(yyvsp[-1].PTR));}
#line 2417 "file.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 451 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@tbl_content"); connect_l_child((yyval.PTR),ptr[71]);}
#line 2423 "file.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 454 "file.y" /* yacc.c:1646  */
    {ptr[72] = (yyvsp[-1].PTR);}
#line 2429 "file.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 455 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@tbl_content"); connect_l_child((yyval.PTR),ptr[72]);}
#line 2435 "file.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 458 "file.y" /* yacc.c:1646  */
    {ptr[72] = (yyvsp[-1].PTR);}
#line 2441 "file.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 459 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@tbl_content"); connect_l_child((yyval.PTR),ptr[72]);}
#line 2447 "file.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 463 "file.y" /* yacc.c:1646  */
    {ptr[73] = create_tree("<tr style=\"border : 1px solid black\">");}
#line 2453 "file.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 464 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[73],(yyvsp[-1].PTR));}
#line 2459 "file.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 465 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[73],create_tree("</tr>"));}
#line 2465 "file.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 466 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@tblrow"); connect_l_child((yyval.PTR), ptr[73]);}
#line 2471 "file.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 470 "file.y" /* yacc.c:1646  */
    {ptr[74] = (yyvsp[-2].PTR);}
#line 2477 "file.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 471 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[74],(yyvsp[-1].PTR));}
#line 2483 "file.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 472 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@row_content"); connect_l_child((yyval.PTR),ptr[74]);}
#line 2489 "file.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 475 "file.y" /* yacc.c:1646  */
    {ptr[74] = (yyvsp[0].PTR);}
#line 2495 "file.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 476 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@row_content"); connect_l_child((yyval.PTR),ptr[74]);}
#line 2501 "file.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 480 "file.y" /* yacc.c:1646  */
    {ptr[75] = create_tree("<td style=\"border : 1px solid black\">");}
#line 2507 "file.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 481 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[75],create_tree(yytext));}
#line 2513 "file.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 482 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[75],create_tree("</td>"));}
#line 2519 "file.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 483 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@tbldt"); connect_l_child((yyval.PTR), ptr[75]);}
#line 2525 "file.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 491 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@math"); connect_l_child((yyval.PTR),(yyvsp[-1].PTR));}
#line 2531 "file.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 494 "file.y" /* yacc.c:1646  */
    {ptr[81] = create_tree("<center>");}
#line 2537 "file.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 496 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[81],(yyvsp[0].PTR));}
#line 2543 "file.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 498 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[81],create_tree("</center>"));}
#line 2549 "file.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 499 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@math"); connect_l_child((yyval.PTR),ptr[81]);}
#line 2555 "file.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 503 "file.y" /* yacc.c:1646  */
    {ptr[90] = create_tree(yytext);}
#line 2561 "file.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 505 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[90],(yyvsp[0].PTR));}
#line 2567 "file.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 506 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@math_content1"); connect_l_child((yyval.PTR),ptr[90]);}
#line 2573 "file.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 509 "file.y" /* yacc.c:1646  */
    {ptr[90] = create_tree("&#8730;");}
#line 2579 "file.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 512 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[90],create_tree(yytext));}
#line 2585 "file.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 514 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@math_content1"); connect_l_child((yyval.PTR),ptr[90]);}
#line 2591 "file.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 517 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@math_content1"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 2597 "file.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 520 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@math_content1"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 2603 "file.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 527 "file.y" /* yacc.c:1646  */
    {ptr[82] = (yyvsp[-1].PTR);}
#line 2609 "file.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 528 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[82],(yyvsp[-1].PTR));}
#line 2615 "file.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 529 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@math_content"); connect_l_child((yyval.PTR),ptr[82]);}
#line 2621 "file.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 534 "file.y" /* yacc.c:1646  */
    {ptr[82] = (yyvsp[-1].PTR);}
#line 2627 "file.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 535 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[82],(yyvsp[-1].PTR));}
#line 2633 "file.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 536 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@math_content"); connect_l_child((yyval.PTR),ptr[82]);}
#line 2639 "file.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 541 "file.y" /* yacc.c:1646  */
    {ptr[82] = (yyvsp[-1].PTR);}
#line 2645 "file.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 542 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[82],(yyvsp[-1].PTR));}
#line 2651 "file.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 543 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@math_content"); connect_l_child((yyval.PTR),ptr[82]);}
#line 2657 "file.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 547 "file.y" /* yacc.c:1646  */
    {ptr[82] = (yyvsp[-1].PTR);}
#line 2663 "file.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 548 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[82],(yyvsp[-1].PTR));}
#line 2669 "file.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 549 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@math_content"); connect_l_child((yyval.PTR),ptr[82]);}
#line 2675 "file.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 552 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@math_content");}
#line 2681 "file.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 558 "file.y" /* yacc.c:1646  */
    {ptr[83] = create_tree("<sup>");}
#line 2687 "file.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 560 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[83],create_tree(yytext));}
#line 2693 "file.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 562 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[83],create_tree("</sup>"));}
#line 2699 "file.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 563 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[83],create_tree("&frasl;"));}
#line 2705 "file.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 565 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[83],create_tree("<sub>"));}
#line 2711 "file.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 567 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[83],create_tree(yytext));}
#line 2717 "file.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 569 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[83],create_tree("</sub>"));}
#line 2723 "file.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 570 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@frac"); connect_l_child((yyval.PTR),ptr[83]);}
#line 2729 "file.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 574 "file.y" /* yacc.c:1646  */
    {ptr[84] = create_tree("&sum;");}
#line 2735 "file.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 576 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[84],(yyvsp[0].PTR));}
#line 2741 "file.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 577 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@sumint"); connect_l_child((yyval.PTR),ptr[85]);}
#line 2747 "file.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 580 "file.y" /* yacc.c:1646  */
    {ptr[84] = create_tree("&int;");}
#line 2753 "file.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 582 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[84],(yyvsp[0].PTR));}
#line 2759 "file.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 583 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@sumint"); connect_l_child((yyval.PTR),ptr[85]);}
#line 2765 "file.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 587 "file.y" /* yacc.c:1646  */
    {ptr[85] = (yyvsp[0].PTR);}
#line 2771 "file.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 589 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[85],(yyvsp[0].PTR));}
#line 2777 "file.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 590 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@sumint_supsub"); connect_l_child((yyval.PTR),ptr[85]);}
#line 2783 "file.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 593 "file.y" /* yacc.c:1646  */
    {ptr[85] = (yyvsp[0].PTR);}
#line 2789 "file.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 595 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[85],(yyvsp[0].PTR));}
#line 2795 "file.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 596 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@sumint_supsub"); connect_l_child((yyval.PTR),ptr[85]);}
#line 2801 "file.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 599 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@sumint_supsub");}
#line 2807 "file.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 603 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@math_subcontent"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 2813 "file.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 606 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@math_subcontent"); connect_l_child((yyval.PTR),(yyvsp[0].PTR));}
#line 2819 "file.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 609 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@math_subcontent");}
#line 2825 "file.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 613 "file.y" /* yacc.c:1646  */
    {ptr[86] = create_tree("<sup>");}
#line 2831 "file.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 615 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[86],(yyvsp[0].PTR));}
#line 2837 "file.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 616 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[86],create_tree("</sup>"));}
#line 2843 "file.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 617 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@supenv"); connect_l_child((yyval.PTR),ptr[86]);}
#line 2849 "file.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 621 "file.y" /* yacc.c:1646  */
    {ptr[87] = create_tree("<sub>");}
#line 2855 "file.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 623 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[87],(yyvsp[0].PTR));}
#line 2861 "file.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 624 "file.y" /* yacc.c:1646  */
    {connect_r_sibling(ptr[87],create_tree("</sub>"));}
#line 2867 "file.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 625 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@subenv"); connect_l_child((yyval.PTR),ptr[87]);}
#line 2873 "file.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 630 "file.y" /* yacc.c:1646  */
    {ptr[88] = create_tree(yytext);}
#line 2879 "file.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 632 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@supenv_content"); connect_l_child((yyval.PTR),ptr[88]);}
#line 2885 "file.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 636 "file.y" /* yacc.c:1646  */
    {ptr[89] = create_tree(yytext);}
#line 2891 "file.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 638 "file.y" /* yacc.c:1646  */
    {(yyval.PTR) = create_tree("@supenv_content"); connect_l_child((yyval.PTR),ptr[89]);}
#line 2897 "file.tab.c" /* yacc.c:1646  */
    break;


#line 2901 "file.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 648 "file.y" /* yacc.c:1906  */


#include "lex.yy.c"

int main(int argc, char* argv[]){
	
	yyin = fopen(argv[1],"r");
	if(!yyin){
		printf("error opening input file.\n");
		perror(argv[1]);
		return -1;
	}

	outfile = fopen(argv[2],"w");
	if(!outfile){
		printf("error opening output file.\n");
		perror(argv[2]);
		return -2;
	}

	yyparse();

	print_tree(outfile,ROOT);

	return 0;

}

void yyerror(const char *s){
	printf("\nToken Mismatch Somewhere.\n");
}
