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
#line 1 "src/main.y" /* yacc.c:339  */

#include <cstring>
#include <cstdio>
#include <iostream>
using namespace std;

#include "syntax.h"

extern "C" int yylex();
extern "C" FILE *yyin;
// defined in the tokenizer
extern "C" int ln, col;
extern "C" char* yytext;

void yyerror(const char *s);

#define YYSTYPE Node*

#line 85 "build/main.cc" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "main.tab.h".  */
#ifndef YY_YY_BUILD_MAIN_TAB_H_INCLUDED
# define YY_YY_BUILD_MAIN_TAB_H_INCLUDED
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
    TYPES = 258,
    INTEGER = 259,
    REAL = 260,
    OPERATOR = 261,
    STRING = 262,
    IDENTIFIER = 263
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BUILD_MAIN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 145 "build/main.cc" /* yacc.c:358  */

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
#define YYLAST   248

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  194

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    37,    42,    47,    49,    54,    56,    60,
      64,    69,    74,    82,    87,    95,   100,   108,   113,   118,
     126,   130,   132,   138,   143,   147,   151,   155,   161,   166,
     174,   180,   181,   187,   192,   200,   206,   211,   216,   221,
     226,   232,   237,   242,   247,   252,   258,   260,   262,   270,
     274,   278,   281,   287,   295,   299,   304,   310,   318,   322,
     328,   329,   330,   331,   332,   333,   334,   335,   337,   343,
     350,   350,   352,   353,   354,   356,   357,   359,   360,   366,
     374,   376,   382,   390,   392,   394,   395,   397,   397,   399,
     400,   401,   402,   403
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPES", "INTEGER", "REAL", "OPERATOR",
  "STRING", "IDENTIFIER", "\"PROGRAM\"", "\"IS\"", "\";\"", "\"BEGIN\"",
  "\"END\"", "\"VAR\"", "\"TYPE\"", "\"PROCEDURE\"", "\":=\"", "\",\"",
  "\":\"", "\"ARRAY\"", "\"OF\"", "\"RECORD\"", "\"(\"", "\")\"",
  "\"READ\"", "\"WRITE\"", "\"IF\"", "\"THEN\"", "\"WHILE\"", "\"DO\"",
  "\"LOOP\"", "\"FOR\"", "\"TO\"", "\"EXIT\"", "\"RETURN\"", "\"BY\"",
  "\"ELSIF\"", "\"ELSE\"", "\"[\"", "\"]\"", "\".\"", "\"{\"", "\"}\"",
  "\"[<\"", "\">]\"", "\"NOT\"", "\"DIV\"", "\"MOD\"", "\"OR\"", "\"AND\"",
  "$accept", "program", "body", "declaration_block", "statement_block",
  "declaration", "var_decl_block", "type_decl_block", "proc_decl_block",
  "var_decl", "id_block", "type_opt", "type_decl", "proc_decl", "type",
  "component_block", "component", "formal_params", "fp_section_block",
  "fp_section", "statement", "by_opt", "elseif_block", "else_opt",
  "lvalue_block", "write_params", "write_expr_block", "write_expr", "expr",
  "expr_block", "expr_opt", "lvalue", "actual_params", "comp_values",
  "comp_value_block", "array_values", "array_value_block", "array_value",
  "number", "unary_op", "binary_op", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF -38

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-38)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,     0,    20,    86,   -38,    15,    24,    28,    29,    34,
      86,    41,   -38,    15,    23,    55,   -38,    24,    43,   -38,
      28,   -38,   200,   -38,    15,   -38,    71,    53,    71,   -38,
       6,    23,   -38,    58,    60,    65,   201,   201,   200,    68,
      74,   201,    81,   200,    30,   -38,   -38,   -38,    77,    87,
     -38,   201,    78,   -38,    88,    73,    94,   119,    21,   124,
     129,   175,   130,   -38,   -38,   -38,    -1,   201,   -38,     3,
     -24,   -38,   201,     7,   141,   134,   -38,   143,   144,   -38,
     -38,   201,   201,   148,    71,   145,   150,    87,    13,   -38,
      71,   -38,    15,    86,   -38,    62,   133,   -38,   -38,   142,
      -6,   -38,   -38,   149,   147,   143,   -38,   164,   201,   -38,
     -38,   -38,    72,   -38,   200,   -38,   -38,   -38,   -38,   201,
     143,   200,   173,   201,   -38,    76,    66,   -38,   -38,    71,
     -38,   -38,   -38,   -38,   -38,   178,   201,   -38,   183,   129,
     -38,   196,   179,   152,   121,   165,   193,   -38,   160,   143,
     199,   -38,    98,   -38,   -38,   202,   -38,   -38,   -38,   -38,
     -38,   201,   -38,   201,   -38,   201,   201,   176,   204,   201,
     -38,   128,   143,   -38,   112,   200,   203,   -38,   138,   164,
     200,   -38,   206,   201,   188,   -38,   160,   -38,   143,   200,
     -38,   207,   211,   -38
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     5,     1,     0,     0,     0,     0,     0,
       5,    19,     8,    12,    21,     0,     9,    14,     0,    10,
      16,     2,     7,     4,     0,    11,     0,     0,     0,    13,
       0,    21,    15,    72,     0,     0,     0,     0,     7,     0,
       0,    71,     0,     7,     0,    18,    25,    24,     0,     0,
      20,     0,     0,    32,     0,     0,    34,     0,     0,     0,
       0,     0,     0,    86,    85,    87,    72,     0,    88,     0,
      61,    60,     0,     0,     0,     0,    44,    70,     0,     3,
       6,     0,     0,     0,     0,     0,     0,    29,     0,    22,
       0,    31,     0,     5,    76,    69,     0,    37,    72,     0,
      53,    58,    55,     0,    57,    59,    39,     0,     0,    65,
      66,    67,     0,    89,     7,    90,    91,    92,    93,     0,
      63,     7,     0,     0,    45,     0,     0,    74,    26,     0,
      27,    28,    17,    35,    33,     0,     0,    75,     0,     0,
      54,     0,     0,     0,    84,     0,    82,    62,    49,    64,
       0,    42,     0,    36,    73,     0,    23,    68,    38,    52,
      56,     0,    77,     0,    80,     0,     0,    51,     0,     0,
      30,    79,    83,    81,     0,     7,     0,    41,    47,     0,
       7,    50,     0,     0,     0,    78,    49,    40,    46,     7,
      48,     0,     0,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -38,   -38,   135,   213,   -37,   -38,   217,   216,   218,   -38,
     -19,   205,   -38,   -38,   -26,   153,   -38,   -38,   151,   -38,
     -38,   -38,    51,   -38,   100,   -38,   103,   -38,   -33,   105,
     -38,   -22,   180,   -38,    69,   -38,    80,   -38,   -38,   -38,
     -38
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,     9,    42,    10,    12,    16,    19,    13,
      14,    27,    17,    20,    50,    86,    87,    31,    55,    56,
      43,   184,   167,   176,    99,    62,   103,   104,    95,    96,
      78,    70,    59,   110,   143,   111,   145,   146,    71,    72,
     119
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      44,    74,    52,    69,    73,    45,    80,     1,    77,   113,
       3,    54,   139,   113,    11,    82,    44,    83,    88,   113,
       4,    44,    58,    11,   132,    63,    64,    65,   105,    66,
      53,   114,    15,    82,   112,    83,    18,   121,   100,   120,
      21,   107,    26,   108,    67,    94,    22,    81,   125,   126,
     115,   116,   117,   118,   115,   116,   117,   118,   128,    24,
     115,   116,   117,   118,   133,    28,    30,    68,   113,    82,
      51,    83,   113,    54,    46,   144,    75,   148,   113,    47,
     136,    58,   113,    60,   150,    76,   149,   153,    61,    89,
     152,    48,    44,    49,    79,    85,   147,    91,    84,    44,
       5,     6,     7,   155,   113,    92,   154,    90,   105,   115,
     116,   117,   118,   115,   116,   117,   118,   100,   113,   115,
     116,   117,   118,   115,   116,   117,   118,   113,   171,    93,
     172,   169,   144,   174,   113,    97,   178,    98,   181,   179,
     180,   106,   163,   186,   113,   115,   116,   117,   118,   113,
     188,   123,   191,    44,   122,   124,   127,   137,    44,   115,
     116,   117,   118,   130,   129,   141,   138,    44,   115,   116,
     117,   118,   142,   140,   183,   115,   116,   117,   118,    63,
      64,    65,   101,    66,   151,   115,   116,   117,   118,   156,
     115,   116,   117,   118,   158,   162,   161,   166,    67,   102,
      63,    64,    65,   101,    66,    63,    64,    65,    33,    66,
     164,   165,   168,   170,   175,   177,   182,   187,   189,    67,
     192,    68,   193,    23,    67,    34,    35,    36,   135,    37,
      25,    38,    39,    29,    40,    41,    57,   190,    32,   159,
     131,   157,    68,   134,   160,   173,   109,    68,   185
};

static const yytype_uint8 yycheck[] =
{
      22,    38,    28,    36,    37,    24,    43,     9,    41,     6,
      10,    30,    18,     6,     8,    39,    38,    41,    51,     6,
       0,    43,    23,     8,    11,     4,     5,     6,    61,     8,
      24,    28,     8,    39,    67,    41,     8,    30,    60,    72,
      11,    42,    19,    44,    23,    24,    12,    17,    81,    82,
      47,    48,    49,    50,    47,    48,    49,    50,    84,    18,
      47,    48,    49,    50,    90,    10,    23,    46,     6,    39,
      17,    41,     6,    92,     3,   108,     8,   114,     6,     8,
      18,    23,     6,    23,   121,    11,   119,    11,    23,    11,
     123,    20,   114,    22,    13,     8,    24,    24,    21,   121,
      14,    15,    16,   129,     6,    11,    40,    19,   141,    47,
      48,    49,    50,    47,    48,    49,    50,   139,     6,    47,
      48,    49,    50,    47,    48,    49,    50,     6,   161,    10,
     163,    33,   165,   166,     6,    11,   169,     8,   175,    11,
      28,    11,    21,   180,     6,    47,    48,    49,    50,     6,
     183,    17,   189,   175,    13,    11,     8,    24,   180,    47,
      48,    49,    50,    13,    19,    18,    24,   189,    47,    48,
      49,    50,     8,    24,    36,    47,    48,    49,    50,     4,
       5,     6,     7,     8,    11,    47,    48,    49,    50,    11,
      47,    48,    49,    50,    11,    43,    17,    37,    23,    24,
       4,     5,     6,     7,     8,     4,     5,     6,     8,     8,
      45,    18,    13,    11,    38,    11,    13,    11,    30,    23,
      13,    46,    11,    10,    23,    25,    26,    27,    93,    29,
      13,    31,    32,    17,    34,    35,    31,   186,    20,   139,
      87,   136,    46,    92,   141,   165,    66,    46,   179
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    52,    10,     0,    14,    15,    16,    53,    54,
      56,     8,    57,    60,    61,     8,    58,    63,     8,    59,
      64,    11,    12,    54,    18,    57,    19,    62,    10,    58,
      23,    68,    59,     8,    25,    26,    27,    29,    31,    32,
      34,    35,    55,    71,    82,    61,     3,     8,    20,    22,
      65,    17,    65,    24,    61,    69,    70,    62,    23,    83,
      23,    23,    76,     4,     5,     6,     8,    23,    46,    79,
      82,    89,    90,    79,    55,     8,    11,    79,    81,    13,
      55,    17,    39,    41,    21,     8,    66,    67,    79,    11,
      19,    24,    11,    10,    24,    79,    80,    11,     8,    75,
      82,     7,    24,    77,    78,    79,    11,    42,    44,    83,
      84,    86,    79,     6,    28,    47,    48,    49,    50,    91,
      79,    30,    13,    17,    11,    79,    79,     8,    65,    19,
      13,    66,    11,    65,    69,    53,    18,    24,    24,    18,
      24,    18,     8,    85,    79,    87,    88,    24,    55,    79,
      55,    11,    79,    11,    40,    65,    11,    80,    11,    75,
      77,    17,    43,    21,    45,    18,    37,    73,    13,    33,
      11,    79,    79,    87,    79,    38,    74,    11,    79,    11,
      28,    55,    13,    36,    72,    85,    55,    11,    79,    30,
      73,    55,    13,    11
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    54,    54,    55,    55,    56,    56,
      56,    57,    57,    58,    58,    59,    59,    60,    61,    61,
      62,    62,    63,    64,    65,    65,    65,    65,    66,    66,
      67,    68,    68,    69,    69,    70,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    73,    73,
      74,    74,    75,    75,    76,    76,    77,    77,    78,    78,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      81,    81,    82,    82,    82,    83,    83,    84,    85,    85,
      86,    87,    87,    88,    88,    89,    89,    90,    90,    91,
      91,    91,    91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     4,     2,     0,     2,     0,     2,     2,
       2,     2,     1,     2,     1,     2,     1,     5,     3,     1,
       2,     0,     4,     6,     1,     1,     3,     3,     2,     1,
       4,     3,     2,     3,     1,     3,     4,     3,     5,     3,
       8,     6,     4,    11,     2,     3,     2,     0,     5,     0,
       2,     0,     3,     1,     3,     2,     3,     1,     1,     1,
       1,     1,     3,     2,     3,     2,     2,     2,     3,     1,
       1,     0,     1,     4,     3,     3,     2,     3,     5,     3,
       3,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
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
#line 32 "src/main.y" /* yacc.c:1646  */
    { Program* prog = new Program((Body*)(yyvsp[-1]));
   prog->print(0);
   (yyval) = prog;
 }
#line 1378 "build/main.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 38 "src/main.y" /* yacc.c:1646  */
    { 
  (yyval) = new Body((Multi<Decl>*)(yyvsp[-3]), (Multi<Stat>*)(yyvsp[-1])); 
}
#line 1386 "build/main.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 43 "src/main.y" /* yacc.c:1646  */
    { 
  ((Multi<Decl>*)(yyvsp[0]))->add((Decl*)(yyvsp[-1])); 
 (yyval)=(yyvsp[0]); 
}
#line 1395 "build/main.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 47 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new Multi<Decl>(); }
#line 1401 "build/main.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 50 "src/main.y" /* yacc.c:1646  */
    {
  ((Multi<Stat>*)(yyvsp[0]))->add((Stat*)(yyvsp[-1]));
  (yyval) = (yyvsp[0]);
}
#line 1410 "build/main.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 54 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new Multi<Stat>(); }
#line 1416 "build/main.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 57 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new Decl("var", (Multi<Node>*)(yyvsp[0]));
}
#line 1424 "build/main.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 61 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new Decl("type", (Multi<Node>*)(yyvsp[0]));
}
#line 1432 "build/main.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 65 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new Decl("procedure", (Multi<Node>*)(yyvsp[0]));
}
#line 1440 "build/main.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 70 "src/main.y" /* yacc.c:1646  */
    {
  ((Multi<VarDecl>*)(yyvsp[0]))->add((VarDecl*)(yyvsp[-1]));
  (yyval) = (yyvsp[0]);
}
#line 1449 "build/main.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 75 "src/main.y" /* yacc.c:1646  */
    {
  Multi<VarDecl>* v = new Multi<VarDecl>();
  v->add((VarDecl*)(yyvsp[0]));
  (yyval) = v;
}
#line 1459 "build/main.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 83 "src/main.y" /* yacc.c:1646  */
    {
  ((Multi<TypeDecl>*)(yyvsp[0]))->add((TypeDecl*)(yyvsp[-1]));
  (yyval) = (yyvsp[0]);
}
#line 1468 "build/main.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 88 "src/main.y" /* yacc.c:1646  */
    {
  Multi<TypeDecl>* v = new Multi<TypeDecl>();
  v->add((TypeDecl*)(yyvsp[0]));
  (yyval) = v;
}
#line 1478 "build/main.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 96 "src/main.y" /* yacc.c:1646  */
    {
  ((Multi<ProcDecl>*)(yyvsp[0]))->add((ProcDecl*)(yyvsp[-1]));
  (yyval) = (yyvsp[0]);
}
#line 1487 "build/main.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 101 "src/main.y" /* yacc.c:1646  */
    {
  Multi<ProcDecl>* v = new Multi<ProcDecl>();
  v->add((ProcDecl*)(yyvsp[0]));
  (yyval) = v;
}
#line 1497 "build/main.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 109 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new VarDecl((Multi<Id>*)(yyvsp[-4]), (Type*)(yyvsp[-3]), (Expr*)(yyvsp[-1]));
}
#line 1505 "build/main.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 114 "src/main.y" /* yacc.c:1646  */
    {
  ((Multi<Id>*)(yyvsp[0]))->add((Id*)(yyvsp[-2]));
  (yyval) = (yyvsp[0]);
}
#line 1514 "build/main.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 119 "src/main.y" /* yacc.c:1646  */
    {
  Multi<Id>* v = new Multi<Id>();
  v->add((Id*)(yyvsp[0]));
  (yyval) = v;
}
#line 1524 "build/main.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 127 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = (yyvsp[0]);
}
#line 1532 "build/main.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 130 "src/main.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 1538 "build/main.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 133 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new TypeDecl((Id*)(yyvsp[-3]), (Type*)(yyvsp[-1]));
}
#line 1546 "build/main.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 139 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new ProcDecl((Id*)(yyvsp[-5]), (Multi<FPSec>*)(yyvsp[-4]), (Type*)(yyvsp[-3]), (Body*)(yyvsp[-1]));
}
#line 1554 "build/main.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 144 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new UserType((Id*)(yyvsp[0]));
}
#line 1562 "build/main.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 148 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = (yyvsp[0]);
}
#line 1570 "build/main.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 152 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new ArrayType((Type *)(yyvsp[0]));
}
#line 1578 "build/main.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 156 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new RecordType((Multi<Component>*)(yyvsp[-1]));
}
#line 1586 "build/main.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 162 "src/main.y" /* yacc.c:1646  */
    {
  ((Multi<Component>*)(yyvsp[0]))->add((Component*)(yyvsp[-1]));
  (yyval) = (yyvsp[0]);
}
#line 1595 "build/main.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 167 "src/main.y" /* yacc.c:1646  */
    {
  Multi<Component>* v = new Multi<Component>();
  v->add((Component*)(yyvsp[0]));
  (yyval) = v;
}
#line 1605 "build/main.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 175 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new Component((Id*)(yyvsp[-3]), (Type*)(yyvsp[-1]));
}
#line 1613 "build/main.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 180 "src/main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1619 "build/main.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 182 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = NULL;
}
#line 1627 "build/main.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 188 "src/main.y" /* yacc.c:1646  */
    {
  ((Multi<FPSec>*)(yyvsp[0]))->add((FPSec*)(yyvsp[-2]));
  (yyval) = (yyvsp[0]);
}
#line 1636 "build/main.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 193 "src/main.y" /* yacc.c:1646  */
    {
  Multi<FPSec>* v = new Multi<FPSec>;
  v->add((FPSec*)(yyvsp[0]));
  (yyval) = v;
}
#line 1646 "build/main.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 201 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new FPSec((Multi<Id>*)(yyvsp[-2]), (Type*)(yyvsp[0]));
}
#line 1654 "build/main.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 207 "src/main.y" /* yacc.c:1646  */
    {
   (yyval) = new AssignStat((Lvalue*)(yyvsp[-3]), (Expr*)(yyvsp[-1]));
 }
#line 1662 "build/main.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 212 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new CallStat((Id*)(yyvsp[-2]), (Multi<Expr>*)(yyvsp[-1]));
}
#line 1670 "build/main.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 217 "src/main.y" /* yacc.c:1646  */
    { 
  (yyval) = new ReadStat((Multi<Lvalue>*)(yyvsp[-2]));
}
#line 1678 "build/main.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 222 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new WriteStat((Multi<WriteExpr>*)(yyvsp[-1]));
}
#line 1686 "build/main.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 227 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new IfStat((Expr*)(yyvsp[-6]), (Multi<Stat>*)(yyvsp[-4]), (Multi<ElseIf>*)(yyvsp[-3]), 
                  (Multi<Stat>*)(yyvsp[-3]));
}
#line 1695 "build/main.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 233 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new WhileStat((Expr*)(yyvsp[-4]), (Multi<Stat>*)(yyvsp[-2]));
}
#line 1703 "build/main.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 238 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new LoopStat((Multi<Stat>*)(yyvsp[-2]));
}
#line 1711 "build/main.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 243 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new ForStat((Id*)(yyvsp[-9]), (Expr*)(yyvsp[-7]), (Expr*)(yyvsp[-5]), (Expr*)(yyvsp[-4]), (Multi<Stat>*)(yyvsp[-2]));
}
#line 1719 "build/main.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 248 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new ExitStat();
}
#line 1727 "build/main.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 253 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new ReturnStat((Expr*)(yyvsp[-1]));
}
#line 1735 "build/main.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 259 "src/main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1741 "build/main.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 260 "src/main.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 1747 "build/main.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 263 "src/main.y" /* yacc.c:1646  */
    {
  Multi<ElseIf>* v = (Multi<ElseIf>*)(yyvsp[0]);
  ElseIf* s = new ElseIf((Expr*)(yyvsp[-3]), (Multi<Stat>*)(yyvsp[-1]));
  v->add(s);
  (yyval) = v;
}
#line 1758 "build/main.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 270 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new Multi<ElseIf>();
}
#line 1766 "build/main.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 275 "src/main.y" /* yacc.c:1646  */
    {
  { (yyval) = (yyvsp[0]); }
}
#line 1774 "build/main.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 278 "src/main.y" /* yacc.c:1646  */
    { (yyval) = NULL;  }
#line 1780 "build/main.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 282 "src/main.y" /* yacc.c:1646  */
    {
  Multi<Lvalue>* v = (Multi<Lvalue>*)(yyvsp[0]);
  v->add((Lvalue*)(yyvsp[-2]));
  (yyval) = v;
}
#line 1790 "build/main.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 288 "src/main.y" /* yacc.c:1646  */
    {
  Multi<Lvalue>* v = new Multi<Lvalue>();
  v->add((Lvalue*)(yyvsp[0]));
  (yyval) = (yyvsp[0]);
}
#line 1800 "build/main.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 296 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = (yyvsp[-1]);
}
#line 1808 "build/main.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 300 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = NULL;
}
#line 1816 "build/main.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 305 "src/main.y" /* yacc.c:1646  */
    {
  Multi<WriteExpr>* v = (Multi<WriteExpr>*)(yyvsp[0]);
  v->add((WriteExpr*)(yyvsp[-2]));
  (yyval) = v;
}
#line 1826 "build/main.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 311 "src/main.y" /* yacc.c:1646  */
    {
  Multi<WriteExpr>* v = new Multi<WriteExpr>();
  v->add((WriteExpr*)(yyvsp[0]));
  (yyval) = v;
}
#line 1836 "build/main.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 319 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new StrWriteExpr((String*)(yyvsp[0]));
}
#line 1844 "build/main.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 323 "src/main.y" /* yacc.c:1646  */
    {
  (yyval) = new ExprWriteExpr((Expr*)(yyvsp[0]));
}
#line 1852 "build/main.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 328 "src/main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1858 "build/main.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 329 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new LvalueExpr((Lvalue*)(yyvsp[0])); }
#line 1864 "build/main.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 330 "src/main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1870 "build/main.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 331 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new UnaryOpExpr((Op*)(yyvsp[-1]), (Expr*)(yyvsp[0])); }
#line 1876 "build/main.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 332 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new BinOpExpr((Op*)(yyvsp[-1]), (Expr*)(yyvsp[-2]), (Expr*)(yyvsp[0])); }
#line 1882 "build/main.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 333 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new CallExpr((Id*)(yyvsp[-1]), (Multi<Expr>*)(yyvsp[0])); }
#line 1888 "build/main.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 334 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new RecordExpr((Id*)(yyvsp[-1]), (Multi<CompValue>*)(yyvsp[0])); }
#line 1894 "build/main.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 335 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new ArrayExpr((Id*)(yyvsp[-1]), (Multi<ArrayValue>*)(yyvsp[0])); }
#line 1900 "build/main.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 338 "src/main.y" /* yacc.c:1646  */
    {
  Multi<Expr>* v = (Multi<Expr>*)(yyvsp[0]);
  v->add((Expr*)(yyvsp[-2]));
  (yyval) = v;
}
#line 1910 "build/main.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 344 "src/main.y" /* yacc.c:1646  */
    {
  Multi<Expr>* v = new Multi<Expr>();
  v->add((Expr*)(yyvsp[0]));
  (yyval) = v;
}
#line 1920 "build/main.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 350 "src/main.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); }
#line 1926 "build/main.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 350 "src/main.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 1932 "build/main.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 352 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new IdLvalue((Id*)(yyvsp[0])); }
#line 1938 "build/main.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 353 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new ArrayLvalue((Lvalue*)(yyvsp[-3]), (Expr*)(yyvsp[-1])); }
#line 1944 "build/main.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 354 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new RecordLvalue((Lvalue*)(yyvsp[-2]), (Id*)(yyvsp[0])); }
#line 1950 "build/main.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 356 "src/main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1956 "build/main.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 357 "src/main.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 1962 "build/main.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 359 "src/main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1968 "build/main.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 361 "src/main.y" /* yacc.c:1646  */
    {
  Multi<CompValue>* v = (Multi<CompValue>*)(yyvsp[0]);
  v->add(new CompValue((Id*)(yyvsp[-4]), (Expr*)(yyvsp[-2])));
  (yyval) = v;
}
#line 1978 "build/main.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 367 "src/main.y" /* yacc.c:1646  */
    {
   Multi<CompValue>* v = new Multi<CompValue>();
   v->add(new CompValue((Id*)(yyvsp[-2]), (Expr*)(yyvsp[0])));
   (yyval) = v;
}
#line 1988 "build/main.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 374 "src/main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1994 "build/main.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 377 "src/main.y" /* yacc.c:1646  */
    {
  Multi<ArrayValue>* v = (Multi<ArrayValue>*)(yyvsp[0]);
  v->add((ArrayValue*)(yyvsp[-2]));
  (yyval) = v;
}
#line 2004 "build/main.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 383 "src/main.y" /* yacc.c:1646  */
    {
  Multi<ArrayValue>* v = new Multi<ArrayValue>();
  v->add((ArrayValue*)(yyvsp[0]));
  (yyval) = v;
}
#line 2014 "build/main.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 391 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new OfArrayValue((Expr*)(yyvsp[-2]), (Expr*)(yyvsp[0])); }
#line 2020 "build/main.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 392 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new SimpleArrayValue((Expr*)(yyvsp[0])); }
#line 2026 "build/main.cc" /* yacc.c:1646  */
    break;

  case 85:
#line 394 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new NumberExpr((Number*)(yyvsp[0])); }
#line 2032 "build/main.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 395 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new NumberExpr((Number*)(yyvsp[0])); }
#line 2038 "build/main.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 397 "src/main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2044 "build/main.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 397 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new Op("NOT"); }
#line 2050 "build/main.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 399 "src/main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2056 "build/main.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 400 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new Op("DIV"); }
#line 2062 "build/main.cc" /* yacc.c:1646  */
    break;

  case 91:
#line 401 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new Op("MOD"); }
#line 2068 "build/main.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 402 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new Op("OR"); }
#line 2074 "build/main.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 403 "src/main.y" /* yacc.c:1646  */
    { (yyval) = new Op("AND"); }
#line 2080 "build/main.cc" /* yacc.c:1646  */
    break;


#line 2084 "build/main.cc" /* yacc.c:1646  */
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
#line 407 "src/main.y" /* yacc.c:1906  */


int main(int argc, char** argv) {
  if (argc != 2) {
    cout << "Need a file" << endl;
    return -1;
  }

	FILE *myfile = fopen(argv[1], "r");
	// make sure it is valid:
	if (!myfile) {
		cout << "I can't open file!" << endl;
		return -1;
	}
	// set flex to read from it instead of defaulting to STDIN:
	yyin = myfile;
	
	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));
	
}

void yyerror(const char *s) {
	cout << "EEK, parse error! Position: " << ln << ":" << col 
         << " token: " << yytext 
         << "  Message: " << s << endl;
	// might as well halt now:
	exit(-1);
}

// http://www.gnu.org/software/bison/manual/html_node/Calling-Convention.html#Calling-Convention
int find_token_code (char* token_buffer) {
    int i;
    for (i = 0; i < YYNTOKENS; i++) {
        if (yytname[i] != 0
            && yytname[i][0] == '"'
            && ! strncmp (yytname[i] + 1, token_buffer,
                          strlen (token_buffer))
            && yytname[i][strlen (token_buffer) + 1] == '"'
            && yytname[i][strlen (token_buffer) + 2] == 0)
          break;
    }

    return  255+i;
}
