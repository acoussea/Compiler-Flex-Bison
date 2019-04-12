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
#line 1 "facile.y" /* yacc.c:339  */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <glib.h>

int yylex();
int yyerror(char *msg);

GHashTable *table;

FILE *stream;
char *module_name;
unsigned int max_stack = 10;

extern void begin_code();
extern void end_code();
extern void produce_code(GNode * node);
int cpt = 0;
int cptEndIf = 0;
char* branchement = "IL_";	


#line 93 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:339  */

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
   by #include "facile.y.h".  */
#ifndef YY_YY_MEDIA_QI_ACOUSSEA_COURS_L3_COMPILATION_NOUVEAU_DOSSIER_COMPILER_FLEX_BISON_BUILD_FACILE_Y_H_INCLUDED
# define YY_YY_MEDIA_QI_ACOUSSEA_COURS_L3_COMPILATION_NOUVEAU_DOSSIER_COMPILER_FLEX_BISON_BUILD_FACILE_Y_H_INCLUDED
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
    TOK_NUMBER = 258,
    TOK_IDENT = 259,
    TOK_AFFECT = 260,
    TOK_SEMICOLON = 261,
    TOK_ADD = 262,
    TOK_SUB = 263,
    TOK_MUL = 264,
    TOK_DIV = 265,
    TOK_OPEN_PARENTHESIS = 266,
    TOK_CLOSE_PARENTHESIS = 267,
    TOK_PRINT = 268,
    TOK_READ = 269,
    TOK_IF = 270,
    TOK_THEN = 271,
    TOK_ELSE = 272,
    TOK_ELSEIF = 273,
    TOK_END = 274,
    TOK_ENDIF = 275,
    TOK_FALSE = 276,
    TOK_TRUE = 277,
    TOK_NOT = 278,
    TOK_AND = 279,
    TOK_OR = 280,
    TOK_SUPEQ = 281,
    TOK_SUP = 282,
    TOK_INF = 283,
    TOK_INFEQ = 284,
    TOK_DIFF = 285,
    TOK_EQ = 286,
    TOK_WHILE = 287,
    TOK_DO = 288,
    TOK_ENDWHILE = 289,
    TOK_ENDFOREACH = 290,
    TOK_FOREACH = 291,
    TOK_PTPT = 292,
    TOK_BREAK = 293,
    TOK_IN = 294
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 86 "facile.y" /* yacc.c:355  */

	gulong number;
	char *string;
	GNode * node;

#line 179 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MEDIA_QI_ACOUSSEA_COURS_L3_COMPILATION_NOUVEAU_DOSSIER_COMPILER_FLEX_BISON_BUILD_FACILE_Y_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 196 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:358  */

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
#define YYLAST   205

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  101

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

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
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    94,    94,   103,   110,   116,   118,   120,   122,   124,
     126,   128,   130,   134,   147,   156,   164,   174,   176,   182,
     189,   196,   203,   210,   217,   222,   227,   234,   241,   248,
     255,   262,   269,   275,   282,   289,   297,   306,   315,   323,
     331,   338,   346,   354,   366,   373,   383,   391,   398,   405,
     414
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_NUMBER", "TOK_IDENT", "TOK_AFFECT",
  "TOK_SEMICOLON", "TOK_ADD", "TOK_SUB", "TOK_MUL", "TOK_DIV",
  "TOK_OPEN_PARENTHESIS", "TOK_CLOSE_PARENTHESIS", "TOK_PRINT", "TOK_READ",
  "TOK_IF", "TOK_THEN", "TOK_ELSE", "TOK_ELSEIF", "TOK_END", "TOK_ENDIF",
  "TOK_FALSE", "TOK_TRUE", "TOK_NOT", "TOK_AND", "TOK_OR", "TOK_SUPEQ",
  "TOK_SUP", "TOK_INF", "TOK_INFEQ", "TOK_DIFF", "TOK_EQ", "TOK_WHILE",
  "TOK_DO", "TOK_ENDWHILE", "TOK_ENDFOREACH", "TOK_FOREACH", "TOK_PTPT",
  "TOK_BREAK", "TOK_IN", "$accept", "program", "code", "instruction",
  "ident", "affectation", "print", "read", "expr", "booleanexpr", "if",
  "elseif", "else", "while", "foreach", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

#define YYPACT_NINF -51

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-51)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -51,     8,   109,   -51,   -51,    35,    21,   182,   -51,   182,
     182,    21,   -51,    23,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,    35,   -51,   158,    26,   182,   -51,   -51,
     182,   153,    56,   109,   122,   115,     6,    35,   107,   -51,
      35,    35,    35,    35,   -51,   147,     5,   -22,    35,    35,
      35,    35,    35,    35,   -51,   182,   182,   -51,   -51,    35,
     181,   -51,    33,    39,    75,   -51,   -51,    85,    85,    85,
      85,    85,    85,     1,    64,   -51,   117,    69,    54,   -51,
     -51,   -51,   152,    36,    61,   -51,   -51,    35,   -51,   -51,
      58,   -51,   -51,   -51,     3,   -51,   -51,   -51,    93,   -51,
     -51
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    13,     0,     0,     0,     4,     0,
       0,     0,     3,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    18,     0,    17,     0,     0,     0,    24,    25,
       0,     0,     0,    46,     0,     0,     0,     0,     0,    15,
       0,     0,     0,     0,    16,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     4,     4,     0,
       0,    23,    19,    20,    21,    22,    35,    26,    27,    28,
      29,    30,    31,     0,    33,    34,     0,     0,     0,    14,
      38,    40,     9,    10,    44,    47,    48,     0,    39,    42,
       0,    37,    41,    45,     0,    36,    43,     4,     0,    49,
      50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -51,   -51,    -7,   -51,    -2,   -51,   -51,   -51,    17,    -3,
     -51,   -50,   -47,   -51,   -51
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    12,    24,    14,    15,    16,    31,    32,
      17,    18,    19,    20,    21
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      13,    33,    55,    56,    26,     4,    34,    35,     3,    36,
      40,    41,    42,    43,     5,     6,     7,    66,     8,     9,
      80,    81,    25,    82,    46,     4,    83,    47,    37,    55,
      56,    13,    44,    10,    93,    90,    97,    11,    22,     4,
      38,    41,    42,    43,    45,    59,    23,    73,    42,    43,
      76,    77,    74,    75,    60,    91,    92,    62,    63,    64,
      65,    40,    41,    42,    43,    67,    68,    69,    70,    71,
      72,    13,    54,     4,    13,    13,    78,    95,    96,     9,
      55,    56,     5,     6,     7,    43,     8,     9,    85,    56,
      98,    87,    40,    41,    42,    43,    13,     4,     0,     0,
       0,    10,     0,    86,    94,    11,     5,     6,     7,     0,
       8,     9,    99,     4,    40,    41,    42,    43,     0,    61,
       0,     4,     5,     6,     7,    10,     8,     9,   100,    11,
       5,     6,     7,     0,     8,     9,     0,    84,    57,    55,
      56,    10,     0,     0,     0,    11,    55,    56,    58,    10,
       0,     0,     0,    11,    40,    41,    42,    43,     0,    61,
      40,    41,    42,    43,    39,    40,    41,    42,    43,     8,
       0,    88,    89,    48,    49,    50,    51,    52,    53,    48,
      49,    50,    51,    52,    53,    22,     4,    79,    40,    41,
      42,    43,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    30
};

static const yytype_int8 yycheck[] =
{
       2,     8,    24,    25,     6,     4,     9,    10,     0,    11,
       7,     8,     9,    10,    13,    14,    15,    12,    17,    18,
      19,    20,     5,    73,    27,     4,    73,    30,     5,    24,
      25,    33,     6,    32,    84,    82,    33,    36,     3,     4,
      23,     8,     9,    10,    27,    39,    11,    54,     9,    10,
      57,    58,    55,    56,    37,    19,    20,    40,    41,    42,
      43,     7,     8,     9,    10,    48,    49,    50,    51,    52,
      53,    73,    16,     4,    76,    77,    59,    19,    20,    18,
      24,    25,    13,    14,    15,    10,    17,    18,    19,    25,
      97,    37,     7,     8,     9,    10,    98,     4,    -1,    -1,
      -1,    32,    -1,    34,    87,    36,    13,    14,    15,    -1,
      17,    18,    19,     4,     7,     8,     9,    10,    -1,    12,
      -1,     4,    13,    14,    15,    32,    17,    18,    35,    36,
      13,    14,    15,    -1,    17,    18,    -1,    20,    16,    24,
      25,    32,    -1,    -1,    -1,    36,    24,    25,    33,    32,
      -1,    -1,    -1,    36,     7,     8,     9,    10,    -1,    12,
       7,     8,     9,    10,     6,     7,     8,     9,    10,    17,
      -1,    19,    20,    26,    27,    28,    29,    30,    31,    26,
      27,    28,    29,    30,    31,     3,     4,     6,     7,     8,
       9,    10,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,     0,     4,    13,    14,    15,    17,    18,
      32,    36,    43,    44,    45,    46,    47,    50,    51,    52,
      53,    54,     3,    11,    44,    48,    44,    11,    21,    22,
      23,    48,    49,    42,    49,    49,    44,     5,    48,     6,
       7,     8,     9,    10,     6,    48,    49,    49,    26,    27,
      28,    29,    30,    31,    16,    24,    25,    16,    33,    39,
      48,    12,    48,    48,    48,    48,    12,    48,    48,    48,
      48,    48,    48,    42,    49,    49,    42,    42,    48,     6,
      19,    20,    51,    52,    20,    19,    34,    37,    19,    20,
      52,    19,    20,    51,    48,    19,    20,    33,    42,    19,
      35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    43,    43,    43,
      43,    43,    43,    44,    45,    46,    47,    48,    48,    48,
      48,    48,    48,    48,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    50,    50,    50,    50,
      50,    50,    50,    50,    51,    51,    52,    53,    53,    54,
      54
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     3,     1,     1,     3,
       3,     3,     3,     3,     1,     1,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     7,     6,     5,     6,
       5,     6,     6,     7,     5,     6,     2,     5,     5,     9,
       9
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
#line 94 "facile.y" /* yacc.c:1646  */
    {
	begin_code();
	produce_code((yyvsp[0].node));
	end_code();
	g_node_destroy((yyvsp[0].node));
}
#line 1368 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 3:
#line 104 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("code");
		g_node_append((yyval.node), (yyvsp[-1].node));	
		g_node_append((yyval.node), (yyvsp[0].node));		
	}
#line 1378 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 4:
#line 110 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("");
	}
#line 1386 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 13:
#line 135 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("ident");
		gulong value = (gulong) g_hash_table_lookup(table, (yyvsp[0].string));
		if (!value) {
			value = g_hash_table_size(table) + 1;
			g_hash_table_insert(table, strdup((yyvsp[0].string)), (gpointer) value);
		}
		g_node_append_data((yyval.node), (gpointer)value);
	}
#line 1400 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 14:
#line 148 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("affect");
		g_node_append((yyval.node), (yyvsp[-3].node));	
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1410 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 15:
#line 157 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("print");
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1419 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 16:
#line 165 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("read");
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1428 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 18:
#line 177 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("number");
		g_node_append_data((yyval.node), (gpointer)(yyvsp[0].number));
	}
#line 1437 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 19:
#line 183 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("add");
		g_node_append((yyval.node), (yyvsp[-2].node));	
		g_node_append((yyval.node), (yyvsp[0].node));	
	}
#line 1447 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 20:
#line 190 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("sub");
		g_node_append((yyval.node), (yyvsp[-2].node));	
		g_node_append((yyval.node), (yyvsp[0].node));	
	}
#line 1457 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 21:
#line 197 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("mul");
		g_node_append((yyval.node), (yyvsp[-2].node));	
		g_node_append((yyval.node), (yyvsp[0].node));	
	}
#line 1467 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 22:
#line 204 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("div");
		g_node_append((yyval.node), (yyvsp[-2].node));	
		g_node_append((yyval.node), (yyvsp[0].node));	
	}
#line 1477 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 23:
#line 211 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 1485 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 24:
#line 218 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("false");
	}
#line 1493 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 25:
#line 223 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("true");
	}
#line 1501 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 26:
#line 228 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new(">=");
		g_node_append((yyval.node), (yyvsp[-2].node));	
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1511 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 27:
#line 235 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new(">");
		g_node_append((yyval.node), (yyvsp[-2].node));	
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1521 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 28:
#line 242 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("<");
		g_node_append((yyval.node), (yyvsp[-2].node));	
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1531 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 29:
#line 249 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("<=");
		g_node_append((yyval.node), (yyvsp[-2].node));	
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1541 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 30:
#line 256 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("#");
		g_node_append((yyval.node), (yyvsp[-2].node));	
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1551 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 31:
#line 263 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("=");
		g_node_append((yyval.node), (yyvsp[-2].node));	
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1561 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 32:
#line 270 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("not");
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1570 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 33:
#line 276 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("and");
		g_node_append((yyval.node), (yyvsp[-2].node));	
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1580 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 34:
#line 283 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("or");
		g_node_append((yyval.node), (yyvsp[-2].node));	
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1590 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 35:
#line 290 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("booleanexpr");
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1599 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 36:
#line 298 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("if");
		g_node_append((yyval.node), (yyvsp[-5].node));	
		g_node_append((yyval.node), (yyvsp[-3].node));
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1611 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 37:
#line 307 "facile.y" /* yacc.c:1646  */
    {
		
		(yyval.node) = g_node_new("if");
		g_node_append((yyval.node), (yyvsp[-4].node));	
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1623 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 38:
#line 316 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("if");
		g_node_append((yyval.node), (yyvsp[-3].node));	
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1633 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 39:
#line 324 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("if");
		g_node_append((yyval.node), (yyvsp[-4].node));	
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1644 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 40:
#line 332 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("if");
		g_node_append((yyval.node), (yyvsp[-3].node));	
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1654 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 41:
#line 339 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("if");
		g_node_append((yyval.node), (yyvsp[-4].node));	
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1665 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 42:
#line 347 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("if");
		g_node_append((yyval.node), (yyvsp[-4].node));	
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1676 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 43:
#line 355 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("if");
		g_node_append((yyval.node), (yyvsp[-5].node));	
		g_node_append((yyval.node), (yyvsp[-3].node));
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1688 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 44:
#line 367 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("elseif");
		g_node_append((yyval.node), (yyvsp[-3].node));	
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1698 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 45:
#line 374 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("elseif");
		g_node_append((yyval.node), (yyvsp[-4].node));	
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1709 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 46:
#line 384 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("else");
		g_node_append((yyval.node), (yyvsp[0].node));	
	}
#line 1718 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 47:
#line 392 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("while");
		g_node_append((yyval.node), (yyvsp[-3].node));
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1728 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 48:
#line 399 "facile.y" /* yacc.c:1646  */
    {
		
	}
#line 1736 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 49:
#line 406 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("foreach");
		g_node_append((yyval.node), (yyvsp[-7].node));
		g_node_append((yyval.node), (yyvsp[-5].node));
		g_node_append((yyval.node), (yyvsp[-3].node));
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1748 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;

  case 50:
#line 415 "facile.y" /* yacc.c:1646  */
    {
		(yyval.node) = g_node_new("foreach");
		g_node_append((yyval.node), (yyvsp[-7].node));
		g_node_append((yyval.node), (yyvsp[-5].node));
		g_node_append((yyval.node), (yyvsp[-3].node));
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1760 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
    break;


#line 1764 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.c" /* yacc.c:1646  */
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
#line 424 "facile.y" /* yacc.c:1906  */


#include <stdlib.h>

int yyerror(char *msg)
{
	fprintf(stderr, "%s\n", msg);
}

void begin_code()
{
	fprintf(stream,
		".assembly %s {}\n"
		".method public static void Main() cil managed\n"
		"{\n"      
		"	.entrypoint\n"
		"	.maxstack %u\n"
		"	.locals init (",
		module_name,
		max_stack
	);
	guint size = g_hash_table_size(table);
	guint i;
	for (i = 0; i < size; i++) {
		if (i) {
			fprintf(stream, ", ");
		}
		fprintf(stream, "int32");
	}
	fprintf(stream, ")\n");
}


void produce_code(GNode * node)
{
	if (node->data == "code") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
	} else if (node->data == "affect") {
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	stloc\t%ld\n", (long) g_node_nth_child(g_node_nth_child(node, 0), 0)->data - 1);
	} else if (node->data == "add") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	add\n");
	} else if (node->data == "sub") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	sub\n");
	} else if (node->data == "mul") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	mul\n");
	} else if (node->data == "div") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	div\n");
	} else if (node->data == "number") {
		fprintf(stream, "	ldc.i4\t%ld\n", (long)g_node_nth_child(node, 0)->data);
	} else if (node->data == "ident") {
		fprintf(stream, "	ldloc\t%ld\n", (long)g_node_nth_child(node, 0)->data - 1);
	} else if (node->data == "print") {
		produce_code(g_node_nth_child(node, 0));
		fprintf(stream, "	call void class [mscorlib]System.Console::WriteLine(int32)\n");
	} else if (node->data == "read") {
		fprintf(stream, "	call string class [mscorlib]System.Console::ReadLine()\n");
		fprintf(stream, "	call int32 int32::Parse(string)\n");
		fprintf(stream, "	stloc\t%ld\n", (long) g_node_nth_child(g_node_nth_child(node, 0), 0)->data - 1);
	} else if (node->data == "if") {//TOK_IF booleanexpr TOK_THEN code elseif else TOK_END
		produce_code(g_node_nth_child(node, 0));
		fprintf(stream, "%s%d:\n",branchement,cpt);
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	br %sendif%d\n",branchement,cptEndIf);
		cpt++;
		fprintf(stream, "%s%d:\n",branchement,cpt);
		if(g_node_n_children(node)>=3) {			
			cpt++;	
			produce_code(g_node_nth_child(node, 2));
			if(g_node_n_children(node)>=4) {		 
			fprintf(stream, "%s%d:\n",branchement,cpt);
			produce_code(g_node_nth_child(node, 3));
			}
		}	
		
		fprintf(stream, "%sendif%d:\n",branchement,cptEndIf);
		cptEndIf++;

	} else if (node->data == "elseif") { // TOK_ELSEIF booleanexpr TOK_THEN code endif elseif 
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	br %sendif%d\n",branchement,cptEndIf);
		cpt++;
		fprintf(stream, "%s%d:\n",branchement,cpt);
		if(g_node_n_children(node)==3) {
			produce_code(g_node_nth_child(node, 2));
			cpt++;	
		}	

		
	} else if (node->data == "else") {
		produce_code(g_node_nth_child(node, 0)); 
	} else if (node->data == "false") {
		fprintf(stream, "	ldc.i4\t0\n");
		fprintf(stream, "	brfalse %s%d\n",branchement,cpt+1);
	} else if (node->data == "true") {
		fprintf(stream, "	ldc.i4\t1\n");
		fprintf(stream, "	brfalse %s%d\n",branchement,cpt+1);
	} else if (node->data == "<") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	bge %s%d\n",branchement,cpt+1);
	} else if (node->data == "<=") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	bgt %s%d\n",branchement,cpt+1);
	} else if (node->data == ">") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	ble %s%d\n",branchement,cpt+1);
	} else if (node->data == ">=") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	blt %s%d\n",branchement,cpt+1);
	} else if (node->data == "#") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	beq %s%d\n",branchement,cpt+1);
	} else if (node->data == "=") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	bne.un %s%d\n",branchement,cpt+1);
	} else if (node->data == "not") {
		if(g_node_nth_child(node,0)->data=="=")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	beq %s%d\n",branchement,cpt+1);
		}else if(g_node_nth_child(node,0)->data=="#")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	bne.un %s%d\n",branchement,cpt+1);
		}else if(g_node_nth_child(node,0)->data=="<")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	blt %s%d\n",branchement,cpt+1);
		}else if(g_node_nth_child(node,0)->data=="<=")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	ble %s%d\n",branchement,cpt+1);
		}else if(g_node_nth_child(node,0)->data==">")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	bgt %s%d\n",branchement,cpt+1);
		}else if(g_node_nth_child(node,0)->data==">=")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	bge %s%d\n",branchement,cpt+1);
		}
	} else if (node->data == "and") {
		produce_code(g_node_nth_child(node,0));
		produce_code(g_node_nth_child(node,1));
	} else if (node->data == "or") {
		if(g_node_nth_child(node,0)->data=="=")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	beq %s%d\n",branchement,cpt);
			produce_code(g_node_nth_child(node,1));
		}else if(g_node_nth_child(node,0)->data=="#")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	bne.un %s%d\n",branchement,cpt);
			produce_code(g_node_nth_child(node,1));
		}else if(g_node_nth_child(node,0)->data=="<")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	blt %s%d\n",branchement,cpt);
			produce_code(g_node_nth_child(node,1));
		}else if(g_node_nth_child(node,0)->data=="<=")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	ble %s%d\n",branchement,cpt);
			produce_code(g_node_nth_child(node,1));
		}else if(g_node_nth_child(node,0)->data==">")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	bgt %s%d\n",branchement,cpt);
			produce_code(g_node_nth_child(node,1));
		}else if(g_node_nth_child(node,0)->data==">=")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	bge %s%d\n",branchement,cpt);
			produce_code(g_node_nth_child(node,1));
		}
	}else if(node->data =="while"){
		/*fprintf(stream, "%s%d:\n",branchement,cpt);
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	br %s%d\n",branchement,cpt);
		cpt+=1;
		fprintf(stream, "%s%d:\n",branchement,cpt);*/
		int cptWhile = cpt+1;
		int cpt2 = cpt+2;
		cpt+=3;
		fprintf(stream, "	br %s%d\n",branchement,cpt2);
		fprintf(stream, "%s%d:\n",branchement,cptWhile);
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "%s%d:\n",branchement,cpt2);
		produce_code(g_node_nth_child(node, 0));
		fprintf(stream, "	br %s%d\n",branchement,cptWhile);
		fprintf(stream, "%s%d:\n",branchement,cpt+1);
	}else if(node->data =="foreach"){ //foreach ident in expr .. expr do code end
		int cptFE = cpt;
		cpt+=1;
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	stloc\t%ld\n", (long) g_node_nth_child(g_node_nth_child(node, 0), 0)->data - 1);

		fprintf(stream, "%s%d:\n",branchement,cptFE);
		produce_code(g_node_nth_child(node,3));
		produce_code(g_node_nth_child(node,0));
		fprintf(stream, "	ldc.i4\t1\n");
		fprintf(stream, "	add\n");
		fprintf(stream, "	stloc\t%ld\n", (long) g_node_nth_child(g_node_nth_child(node, 0), 0)->data - 1);

		produce_code(g_node_nth_child(node,0));
		produce_code(g_node_nth_child(node,2));
		fprintf(stream, "	ble %s%d\n",branchement,cptFE);
	}else if(node->data =="break"){
		
	}
}


void end_code()
{
	fprintf(stream, "	ret\n}\n");
}

int main(int argc, char *argv[])
{
	if (argc == 2) {
		char *file_name_input = argv[1];
		char *extension;
		char *directory_delimiter;
		char *basename;
		extension = rindex(file_name_input, '.');
		if (!extension || strcmp(extension, ".facile") != 0) {
			fprintf(stderr, "Input filename extension must be '.facile'\n");
			return EXIT_FAILURE;
		}
		directory_delimiter = rindex(file_name_input, '/');
		if (!directory_delimiter) {
			directory_delimiter = rindex(file_name_input, '\\');
		}
		if (directory_delimiter) {
			basename = strdup(directory_delimiter + 1);
		} else {
			basename = strdup(file_name_input);
		}
		module_name = strdup(basename);
		*rindex(module_name, '.') = '\0';
		strcpy(rindex(basename, '.'), ".il");
		char *onechar = module_name;
		if (!isalpha(*onechar) && *onechar != '_') {
			free(basename);
			fprintf(stderr, "Base input filename must start with a letter or an underscore\n");
			return EXIT_FAILURE;
		}
		onechar++;
		while (*onechar) {
			if (!isalnum(*onechar) && *onechar != '_') {
				free(basename);
				fprintf(stderr, "Base input filename cannot contains special characters\n");
				return EXIT_FAILURE;
			}
			onechar++;
		}
		if (stdin = fopen(file_name_input, "r")) {
			if (stream = fopen(basename, "w")) {
				table = g_hash_table_new_full(g_str_hash, g_str_equal, free, NULL);
				yyparse();
				g_hash_table_destroy(table);
				fclose(stream);
				fclose(stdin);
			} else {
				free(basename);
				fclose(stdin);
				fprintf(stderr, "Output filename cannot be opened\n");
				return EXIT_FAILURE;
			}
		} else {
			free(basename);
			fprintf(stderr, "Input filename cannot be opened\n");
			return EXIT_FAILURE;
		}
		free(basename);
	}

	else {
		fprintf(stderr, "No input filename given\n");
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}

