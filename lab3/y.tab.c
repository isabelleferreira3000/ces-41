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
#line 1 "lab3.y" /* yacc.c:339  */

#include	<stdio.h>
#include	<stdlib.h>

#define MENORQUE	1
#define MENORIGUAL	2
#define MAIORQUE	3
#define MAIORIGUAL	4
#define IGUAL		5
#define DIFERENTE	6
#define MAIS		7
#define MENOS		8
#define VEZES		9
#define DIV			10
#define PERCENT 	11

int tab = 0;

#line 85 "y.tab.c" /* yacc.c:339  */

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
    CALL = 258,
    CHAR = 259,
    DO = 260,
    ELSE = 261,
    FALSE = 262,
    FLOAT = 263,
    FOR = 264,
    FUNCTIONS = 265,
    GLOBAL = 266,
    IF = 267,
    INT = 268,
    LOCAL = 269,
    LOGIC = 270,
    MAIN = 271,
    PROGRAM = 272,
    READ = 273,
    RETURN = 274,
    STATEMENTS = 275,
    TRUE = 276,
    VOID = 277,
    WHILE = 278,
    WRITE = 279,
    ID = 280,
    INTCT = 281,
    CHARCT = 282,
    FLOATCT = 283,
    STRING = 284,
    OR = 285,
    AND = 286,
    NOT = 287,
    RELOP = 288,
    ADOP = 289,
    MULTOP = 290,
    NEG = 291,
    ASSIGN = 292,
    OPPAR = 293,
    CLPAR = 294,
    OPBRAK = 295,
    CLBRAK = 296,
    OPBRACE = 297,
    CLBRACE = 298,
    SCOLON = 299,
    COMMA = 300,
    COLON = 301
  };
#endif
/* Tokens.  */
#define CALL 258
#define CHAR 259
#define DO 260
#define ELSE 261
#define FALSE 262
#define FLOAT 263
#define FOR 264
#define FUNCTIONS 265
#define GLOBAL 266
#define IF 267
#define INT 268
#define LOCAL 269
#define LOGIC 270
#define MAIN 271
#define PROGRAM 272
#define READ 273
#define RETURN 274
#define STATEMENTS 275
#define TRUE 276
#define VOID 277
#define WHILE 278
#define WRITE 279
#define ID 280
#define INTCT 281
#define CHARCT 282
#define FLOATCT 283
#define STRING 284
#define OR 285
#define AND 286
#define NOT 287
#define RELOP 288
#define ADOP 289
#define MULTOP 290
#define NEG 291
#define ASSIGN 292
#define OPPAR 293
#define CLPAR 294
#define OPBRAK 295
#define CLBRAK 296
#define OPBRACE 297
#define CLBRACE 298
#define SCOLON 299
#define COMMA 300
#define COLON 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "lab3.y" /* yacc.c:355  */

	char string[50];
	int atr, valor;
	float valreal;
	char carac;

#line 221 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 238 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   193

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  154
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  243

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    77,    77,    78,    79,    77,    85,    86,    87,    86,
      91,    92,    96,   101,   102,   103,   104,   105,   108,   110,
     109,   114,   117,   118,   118,   123,   125,   124,   129,   130,
     129,   134,   135,   139,   140,   139,   146,   149,   147,   154,
     155,   158,   160,   159,   164,   168,   169,   170,   169,   174,
     175,   174,   179,   180,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   196,   196,   201,   202,   204,
     201,   209,   210,   210,   214,   215,   217,   214,   221,   223,
     224,   226,   221,   230,   231,   235,   237,   241,   230,   245,
     246,   248,   245,   252,   254,   253,   258,   259,   261,   258,
     265,   267,   266,   271,   272,   275,   275,   281,   280,   286,
     287,   290,   290,   292,   292,   297,   303,   305,   304,   309,
     311,   310,   315,   317,   316,   321,   322,   322,   326,   328,
     327,   353,   355,   354,   368,   370,   369,   386,   387,   388,
     389,   390,   391,   392,   392,   394,   394,   397,   400,   403,
     404,   404,   409,   411,   410
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CALL", "CHAR", "DO", "ELSE", "FALSE",
  "FLOAT", "FOR", "FUNCTIONS", "GLOBAL", "IF", "INT", "LOCAL", "LOGIC",
  "MAIN", "PROGRAM", "READ", "RETURN", "STATEMENTS", "TRUE", "VOID",
  "WHILE", "WRITE", "ID", "INTCT", "CHARCT", "FLOATCT", "STRING", "OR",
  "AND", "NOT", "RELOP", "ADOP", "MULTOP", "NEG", "ASSIGN", "OPPAR",
  "CLPAR", "OPBRAK", "CLBRAK", "OPBRACE", "CLBRACE", "SCOLON", "COMMA",
  "COLON", "$accept", "Prog", "$@1", "$@2", "$@3", "GlobDecls", "$@4",
  "$@5", "DeclList", "Declaration", "Type", "ElemList", "$@6", "Elem",
  "Dims", "$@7", "DimList", "$@8", "Functions", "$@9", "$@10", "FuncList",
  "Function", "$@11", "$@12", "Header", "$@13", "Params", "ParamList",
  "$@14", "Parameter", "LocDecls", "$@15", "$@16", "Stats", "$@17", "$@18",
  "StatList", "Statement", "CompStat", "$@19", "IfStat", "$@20", "$@21",
  "$@22", "ElseStat", "$@23", "WhileStat", "$@24", "$@25", "$@26",
  "DoStat", "$@27", "$@28", "$@29", "$@30", "ForStat", "$@31", "$@32",
  "$@33", "$@34", "$@35", "ReadStat", "$@36", "$@37", "$@38", "ReadList",
  "$@39", "WriteStat", "$@40", "$@41", "$@42", "WriteList", "$@43",
  "WriteElem", "CallStat", "$@44", "FuncCall", "$@45", "Arguments",
  "ReturnStat", "$@46", "$@47", "AssignStat", "ExprList", "$@48",
  "Expression", "$@49", "AuxExpr1", "$@50", "AuxExpr2", "$@51", "AuxExpr3",
  "$@52", "AuxExpr4", "$@53", "Term", "$@54", "Factor", "$@55", "$@56",
  "Variable", "Subscripts", "$@57", "SubscrList", "$@58", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF -144

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-144)))

#define YYTABLE_NINF -112

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,  -144,    59,   -15,  -144,  -144,    19,  -144,    67,  -144,
      74,    52,  -144,    60,  -144,    62,  -144,   160,  -144,  -144,
    -144,  -144,  -144,  -144,   160,  -144,    80,     8,  -144,    66,
      42,  -144,  -144,    84,     8,  -144,  -144,  -144,  -144,  -144,
    -144,    76,  -144,    70,    93,    80,  -144,  -144,  -144,    32,
    -144,   160,   106,  -144,  -144,    96,    86,    78,  -144,  -144,
     107,   103,  -144,  -144,  -144,    91,  -144,    89,  -144,   160,
    -144,    92,  -144,  -144,   160,  -144,   160,  -144,    57,  -144,
    -144,  -144,  -144,  -144,    98,  -144,  -144,   100,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,    99,   118,    57,   108,   109,   110,   101,    90,   111,
     112,  -144,  -144,  -144,    90,   113,   121,   129,  -144,  -144,
    -144,  -144,  -144,  -144,     5,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,   -26,   122,  -144,  -144,    61,   131,  -144,  -144,
    -144,  -144,   134,    10,   -24,  -144,  -144,  -144,   119,    90,
     119,   134,   134,    90,  -144,  -144,  -144,  -144,  -144,  -144,
      90,    64,   123,    38,  -144,  -144,    90,   133,   130,   -22,
      -7,  -144,  -144,  -144,     9,    90,    90,   134,   134,   134,
      12,  -144,    29,  -144,   126,  -144,  -144,   135,   124,   126,
    -144,    90,  -144,  -144,  -144,  -144,   122,  -144,   123,   131,
    -144,  -144,  -144,  -144,   134,  -144,  -144,    90,    -4,    57,
     132,   119,    57,   136,    64,   123,    90,    17,  -144,   171,
    -144,  -144,  -144,  -144,  -144,   126,  -144,    90,  -144,  -144,
     137,    -3,    57,  -144,  -144,  -144,   119,   141,    90,    28,
    -144,    57,  -144
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     1,     3,     0,     4,     6,     7,
       0,     0,    28,     0,     8,     0,     5,     0,    29,    15,
      14,    13,    16,    17,     9,    10,     0,     0,    11,    22,
       0,    18,    36,     0,    30,    31,    33,    23,    21,    12,
      19,     0,    32,     0,     0,     0,    37,    34,    25,     0,
      20,    39,    45,    24,    26,     0,     0,    40,    41,    46,
       0,     0,    44,    38,    42,     0,    49,     0,    27,     0,
      47,     0,    35,    43,     0,    50,    48,    52,    51,   105,
      78,    83,    67,    89,   113,    74,    96,   149,    65,    64,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    63,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   150,   148,    52,     0,     0,     0,     0,    84,    68,
      90,   112,   142,   141,   149,   138,   140,   139,   126,   143,
     145,   147,     0,   119,   122,   125,   128,   131,   134,   137,
      75,    97,     0,     0,     0,   107,   106,    79,     0,     0,
       0,     0,     0,     0,   120,   114,   123,   129,   132,   135,
       0,     0,   152,     0,    66,   115,   109,     0,     0,     0,
       0,    93,   127,   144,     0,     0,     0,     0,     0,     0,
       0,   103,     0,   100,   104,   151,   153,     0,   110,   116,
      80,     0,    69,    91,    94,   146,   121,   124,   130,   133,
     136,    76,    98,   101,     0,   108,   117,     0,     0,     0,
       0,     0,     0,     0,     0,   154,     0,     0,    85,    71,
      92,    95,    77,    99,   102,   118,    81,     0,    72,    70,
       0,     0,     0,    82,    86,    73,     0,     0,     0,     0,
      87,     0,    88
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,   105,   -21,
     -20,  -144,  -144,   138,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,   150,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
     116,  -144,  -144,  -144,  -144,  -144,  -144,    73,  -102,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,   -27,  -144,  -144,    87,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -103,  -144,    13,  -144,
      14,  -144,    40,  -144,  -140,  -144,    15,  -144,  -143,  -144,
    -144,   -78,  -144,  -144,  -144,  -144
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     6,     8,    10,    11,    17,    24,    25,
      26,    30,    45,    31,    38,    44,    49,    61,    13,    15,
      27,    34,    35,    43,    52,    36,    51,    56,    57,    69,
      58,    60,    65,    74,    67,    71,    77,    78,    90,    91,
     113,    92,   105,   149,   209,   229,   232,    93,   109,   160,
     212,    94,   103,   167,   207,   230,    95,   104,   148,   227,
     236,   241,    96,   106,   150,   210,   170,   211,    97,   110,
     161,   213,   182,   214,   183,    98,   102,   131,   166,   187,
      99,   107,   108,   100,   188,   216,   184,   175,   133,   176,
     134,   151,   135,   177,   136,   178,   137,   179,   138,   152,
     153,   139,   112,   142,   163,   204
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     101,   117,   162,    28,   154,   132,   154,    33,   154,   173,
       5,   144,    19,    79,    33,    80,    20,   192,   155,    81,
     165,    21,    82,    22,    32,   101,   154,   154,    83,    84,
      23,    55,   193,    85,    86,    87,   200,   198,   194,   154,
     218,   234,   154,   145,     1,   111,   169,   154,   195,    55,
     174,   201,    88,   164,    89,    28,   226,   180,   154,     4,
      79,     7,    80,   189,   215,   101,    81,   240,   202,    82,
     168,   122,   171,    53,   203,    83,    84,    54,     9,   185,
      85,    86,    87,   186,    12,   123,    39,    40,   208,   124,
     125,   126,   127,   181,   157,   158,   128,   122,    14,    88,
     129,    89,   130,    16,   217,    29,    37,   219,    18,    41,
     222,   123,    47,   225,    46,   124,   125,   126,   127,    48,
      59,    62,   128,    64,   231,    63,   129,    66,   130,    68,
     235,   101,    72,   221,   101,   239,   114,    70,    75,   242,
     111,   122,  -111,   115,    87,   121,   118,   119,   120,   140,
     141,   145,   147,   156,   101,   123,   154,   158,   237,   124,
     125,   126,   127,   101,    19,   146,   159,   191,    20,   206,
     129,   190,   130,    21,   205,    22,   220,   228,   238,    76,
     223,   233,    23,    50,    42,    73,   143,   224,   196,   116,
     197,   172,     0,   199
};

static const yytype_int16 yycheck[] =
{
      78,   103,   142,    24,    30,   108,    30,    27,    30,   152,
      25,   114,     4,     3,    34,     5,     8,    39,    44,     9,
      44,    13,    12,    15,    16,   103,    30,    30,    18,    19,
      22,    51,    39,    23,    24,    25,   179,   177,    45,    30,
      44,    44,    30,    38,    17,    40,   149,    30,    39,    69,
     153,    39,    42,    43,    44,    76,    39,   160,    30,     0,
       3,    42,     5,   166,   204,   143,     9,    39,    39,    12,
     148,     7,   150,    41,    45,    18,    19,    45,    11,    41,
      23,    24,    25,    45,    10,    21,    44,    45,   191,    25,
      26,    27,    28,    29,    33,    34,    32,     7,    46,    42,
      36,    44,    38,    43,   207,    25,    40,   209,    46,    25,
     212,    21,    42,   216,    38,    25,    26,    27,    28,    26,
      14,    25,    32,    45,   227,    39,    36,    20,    38,    26,
     232,   209,    43,   211,   212,   238,    37,    46,    46,   241,
      40,     7,    44,    25,    25,    44,    38,    38,    38,    38,
      38,    38,    23,    31,   232,    21,    30,    34,   236,    25,
      26,    27,    28,   241,     4,    44,    35,    37,     8,    45,
      36,    38,    38,    13,    39,    15,    44,     6,    37,    74,
      44,    44,    22,    45,    34,    69,   113,   214,   175,   102,
     176,   151,    -1,   178
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    48,    49,     0,    25,    50,    42,    51,    11,
      52,    53,    10,    65,    46,    66,    43,    54,    46,     4,
       8,    13,    15,    22,    55,    56,    57,    67,    56,    25,
      58,    60,    16,    57,    68,    69,    72,    40,    61,    44,
      45,    25,    69,    70,    62,    59,    38,    42,    26,    63,
      60,    73,    71,    41,    45,    57,    74,    75,    77,    14,
      78,    64,    25,    39,    45,    79,    20,    81,    26,    76,
      46,    82,    43,    77,    80,    46,    55,    83,    84,     3,
       5,     9,    12,    18,    19,    23,    24,    25,    42,    44,
      85,    86,    88,    94,    98,   103,   109,   115,   122,   127,
     130,   148,   123,    99,   104,    89,   110,   128,   129,    95,
     116,    40,   149,    87,    37,    25,   124,    85,    38,    38,
      38,    44,     7,    21,    25,    26,    27,    28,    32,    36,
      38,   124,   133,   135,   137,   139,   141,   143,   145,   148,
      38,    38,   150,    84,   133,    38,    44,    23,   105,    90,
     111,   138,   146,   147,    30,    44,    31,    33,    34,    35,
      96,   117,   141,   151,    43,    44,   125,   100,   148,   133,
     113,   148,   139,   145,   133,   134,   136,   140,   142,   144,
     133,    29,   119,   121,   133,    41,    45,   126,   131,   133,
      38,    37,    39,    39,    45,    39,   135,   137,   141,   143,
     145,    39,    39,    45,   152,    39,    45,   101,   133,    91,
     112,   114,    97,   118,   120,   141,   132,   133,    44,    85,
      44,   148,    85,    44,   121,   133,    39,   106,     6,    92,
     102,   133,    93,    44,    44,    85,   107,   148,    37,   133,
      39,   108,    85
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    49,    50,    51,    48,    52,    53,    54,    52,
      55,    55,    56,    57,    57,    57,    57,    57,    58,    59,
      58,    60,    61,    62,    61,    63,    64,    63,    66,    67,
      65,    68,    68,    70,    71,    69,    72,    73,    72,    74,
      74,    75,    76,    75,    77,    78,    79,    80,    78,    82,
      83,    81,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    87,    86,    89,    90,    91,
      88,    92,    93,    92,    95,    96,    97,    94,    99,   100,
     101,   102,    98,   104,   105,   106,   107,   108,   103,   110,
     111,   112,   109,   113,   114,   113,   116,   117,   118,   115,
     119,   120,   119,   121,   121,   123,   122,   125,   124,   126,
     126,   128,   127,   129,   127,   130,   131,   132,   131,   133,
     134,   133,   135,   136,   135,   137,   138,   137,   139,   140,
     139,   141,   142,   141,   143,   144,   143,   145,   145,   145,
     145,   145,   145,   146,   145,   147,   145,   145,   148,   149,
     150,   149,   151,   152,   151
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,     9,     0,     0,     0,     5,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     0,
       4,     2,     0,     0,     4,     1,     0,     4,     0,     0,
       5,     1,     2,     0,     0,     7,     1,     0,     6,     0,
       1,     1,     0,     4,     2,     0,     0,     0,     5,     0,
       0,     5,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     0,     0,     0,
       9,     0,     0,     3,     0,     0,     0,     8,     0,     0,
       0,     0,    11,     0,     0,     0,     0,     0,    18,     0,
       0,     0,     8,     1,     0,     4,     0,     0,     0,     8,
       1,     0,     4,     1,     1,     0,     4,     0,     5,     0,
       1,     0,     3,     0,     4,     4,     1,     0,     4,     1,
       0,     4,     1,     0,     4,     1,     0,     3,     1,     0,
       4,     1,     0,     4,     1,     0,     4,     1,     1,     1,
       1,     1,     1,     0,     3,     0,     4,     1,     2,     0,
       0,     4,     1,     0,     4
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
#line 77 "lab3.y" /* yacc.c:1646  */
    {printf("\nprogram ");}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 78 "lab3.y" /* yacc.c:1646  */
    {/*printf ("%s ", $1);*/}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 79 "lab3.y" /* yacc.c:1646  */
    {printf("\{");}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 82 "lab3.y" /* yacc.c:1646  */
    {printf("\n}\n");}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 86 "lab3.y" /* yacc.c:1646  */
    {printf("\nglobal");}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 87 "lab3.y" /* yacc.c:1646  */
    {printf(":");}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 91 "lab3.y" /* yacc.c:1646  */
    {printf ("\n"); tabular ();}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 98 "lab3.y" /* yacc.c:1646  */
    {printf(";");}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 101 "lab3.y" /* yacc.c:1646  */
    {printf ("int ");}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 102 "lab3.y" /* yacc.c:1646  */
    {printf ("float ");}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 103 "lab3.y" /* yacc.c:1646  */
    {printf ("char ");}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 104 "lab3.y" /* yacc.c:1646  */
    {printf ("logic ");}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 105 "lab3.y" /* yacc.c:1646  */
    {printf ("void ");}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 110 "lab3.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 118 "lab3.y" /* yacc.c:1646  */
    {printf("[");}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 120 "lab3.y" /* yacc.c:1646  */
    {printf("]");}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 125 "lab3.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 129 "lab3.y" /* yacc.c:1646  */
    {printf("\nfunctions");}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 130 "lab3.y" /* yacc.c:1646  */
    {printf(":");}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 134 "lab3.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 136 "lab3.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 139 "lab3.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 140 "lab3.y" /* yacc.c:1646  */
    {printf("\(");}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 143 "lab3.y" /* yacc.c:1646  */
    {printf("\) ");}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 146 "lab3.y" /* yacc.c:1646  */
    {printf("\nmain");}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 149 "lab3.y" /* yacc.c:1646  */
    {printf("\(");}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 151 "lab3.y" /* yacc.c:1646  */
    {printf("\) ");}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 160 "lab3.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 169 "lab3.y" /* yacc.c:1646  */
    {printf("\nlocal");}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 170 "lab3.y" /* yacc.c:1646  */
    {printf(":");}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 174 "lab3.y" /* yacc.c:1646  */
    {printf("\nstatements");}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 175 "lab3.y" /* yacc.c:1646  */
    {printf(":");}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 193 "lab3.y" /* yacc.c:1646  */
    {printf(";");}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 196 "lab3.y" /* yacc.c:1646  */
    {tabular (); printf ("\{\n"); tab++;}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 198 "lab3.y" /* yacc.c:1646  */
    {tab--; tabular (); printf ("}\n");}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 201 "lab3.y" /* yacc.c:1646  */
    {printf("\nif");}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 202 "lab3.y" /* yacc.c:1646  */
    {printf("\(");}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 204 "lab3.y" /* yacc.c:1646  */
    {printf("\) ";)}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 210 "lab3.y" /* yacc.c:1646  */
    {printf("\nelse ");}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 214 "lab3.y" /* yacc.c:1646  */
    {printf("\nwhile");}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 215 "lab3.y" /* yacc.c:1646  */
    {printf("\(");}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 217 "lab3.y" /* yacc.c:1646  */
    {printf("\)");}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 221 "lab3.y" /* yacc.c:1646  */
    {printf("\ndo ");}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 223 "lab3.y" /* yacc.c:1646  */
    {printf(" while");}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 224 "lab3.y" /* yacc.c:1646  */
    {printf("\(");}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 226 "lab3.y" /* yacc.c:1646  */
    {printf("\)");}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 227 "lab3.y" /* yacc.c:1646  */
    {printf(";");}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 230 "lab3.y" /* yacc.c:1646  */
    {printf("\nfor");}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 231 "lab3.y" /* yacc.c:1646  */
    {printf("\(");}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 235 "lab3.y" /* yacc.c:1646  */
    {printf("; ");}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 237 "lab3.y" /* yacc.c:1646  */
    {printf("; ");}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 241 "lab3.y" /* yacc.c:1646  */
    {printf("\) ");}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 245 "lab3.y" /* yacc.c:1646  */
    {printf("\nread ")}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 246 "lab3.y" /* yacc.c:1646  */
    {printf("\(");}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 248 "lab3.y" /* yacc.c:1646  */
    {printf("\)");}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 249 "lab3.y" /* yacc.c:1646  */
    {printf(";");}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 254 "lab3.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 258 "lab3.y" /* yacc.c:1646  */
    {printf("\nwrite ");}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 259 "lab3.y" /* yacc.c:1646  */
    {printf("\(");}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 261 "lab3.y" /* yacc.c:1646  */
    {printf("\)");}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 262 "lab3.y" /* yacc.c:1646  */
    {printf(";");}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 267 "lab3.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 275 "lab3.y" /* yacc.c:1646  */
    {printf("\ncall ");}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 277 "lab3.y" /* yacc.c:1646  */
    {printf(";");}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 281 "lab3.y" /* yacc.c:1646  */
    {printf("\(");}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 283 "lab3.y" /* yacc.c:1646  */
    {printf("\)");}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 290 "lab3.y" /* yacc.c:1646  */
    {printf("return ");}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 291 "lab3.y" /* yacc.c:1646  */
    {printf(";");}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 292 "lab3.y" /* yacc.c:1646  */
    {printf("return ");}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 294 "lab3.y" /* yacc.c:1646  */
    {printf(";");}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 300 "lab3.y" /* yacc.c:1646  */
    {printf(";");}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 305 "lab3.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 311 "lab3.y" /* yacc.c:1646  */
    {printf("|| ");}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 317 "lab3.y" /* yacc.c:1646  */
    {printf("&& ");}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 322 "lab3.y" /* yacc.c:1646  */
    {printf("!");}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 328 "lab3.y" /* yacc.c:1646  */
    {
                    switch ((yyvsp[0].atr)) {
                        case MENORQUE:
                            printf("< ");
                            break;
                        case MENORIGUAL:
                            printf("<= ");
                            break;
                        case MAIORQUE:
                            printf("> ");
                            break;
                        case MAIORIGUAL:
                            printf(">= ");
                            break;
                        case IGUAL:
                            printf("= ");
                            break;
                        case DIFERENTE:
                            printf("!= ");
                            break; 
                    }
                            }
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 355 "lab3.y" /* yacc.c:1646  */
    {
                    switch ((yyvsp[0].atr)) {
                        case MAIS:
                            printf("+ ");
                            break;
                        case MENOS:
                            printf("- ");
                            break;
                    }
                            }
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 370 "lab3.y" /* yacc.c:1646  */
    {
                    switch ((yyvsp[0].atr)){
                        case VEZES:
                            printf("+ ");
                            break;
                        case DIV:
                            printf("- ");
                            break;
                        case PERCENT:
                            printf("\% ");
                            break;
                    }
                            }
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 392 "lab3.y" /* yacc.c:1646  */
    {printf("~ ");}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 394 "lab3.y" /* yacc.c:1646  */
    {printf("\(");}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 396 "lab3.y" /* yacc.c:1646  */
    {printf("\)");}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 404 "lab3.y" /* yacc.c:1646  */
    {printf("[");}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 406 "lab3.y" /* yacc.c:1646  */
    {printf("]");}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 411 "lab3.y" /* yacc.c:1646  */
    {printf(", ");}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2050 "y.tab.c" /* yacc.c:1646  */
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
#line 415 "lab3.y" /* yacc.c:1906  */


#include "lex.yy.c"

tabular () {
	int i;
	for (i = 1; i <= tab; i++)
   	printf ("\t");
}
