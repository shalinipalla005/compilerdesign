/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cucu.y"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void yyerror(const char *);
extern FILE *yyin;
extern FILE *yyout;
extern int yyparse();
extern FILE *parserOut;

#line 82 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT_TYPE = 258,                /* INT_TYPE  */
    CHAR_TYPE = 259,               /* CHAR_TYPE  */
    ASSIGN = 260,                  /* ASSIGN  */
    PLUS = 261,                    /* PLUS  */
    MINUS = 262,                   /* MINUS  */
    TIMES = 263,                   /* TIMES  */
    DIVIDE = 264,                  /* DIVIDE  */
    EQUAL = 265,                   /* EQUAL  */
    NOTEQUAL = 266,                /* NOTEQUAL  */
    SEMICOLON = 267,               /* SEMICOLON  */
    IF = 268,                      /* IF  */
    ELSE = 269,                    /* ELSE  */
    WHILE = 270,                   /* WHILE  */
    LPAREN = 271,                  /* LPAREN  */
    RPAREN = 272,                  /* RPAREN  */
    LBRACE = 273,                  /* LBRACE  */
    RBRACE = 274,                  /* RBRACE  */
    COMMA = 275,                   /* COMMA  */
    RETURN = 276,                  /* RETURN  */
    ID = 277,                      /* ID  */
    MAIN = 278,                    /* MAIN  */
    NUM = 279,                     /* NUM  */
    LESS_THAN = 280,               /* LESS_THAN  */
    LESS_THAN_EQUAL_TO = 281,      /* LESS_THAN_EQUAL_TO  */
    GREATER_THAN = 282,            /* GREATER_THAN  */
    GREATER_THAN_EQUAL_TO = 283,   /* GREATER_THAN_EQUAL_TO  */
    LSQUARE = 284,                 /* LSQUARE  */
    RSQUARE = 285,                 /* RSQUARE  */
    AND = 286                      /* AND  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT_TYPE 258
#define CHAR_TYPE 259
#define ASSIGN 260
#define PLUS 261
#define MINUS 262
#define TIMES 263
#define DIVIDE 264
#define EQUAL 265
#define NOTEQUAL 266
#define SEMICOLON 267
#define IF 268
#define ELSE 269
#define WHILE 270
#define LPAREN 271
#define RPAREN 272
#define LBRACE 273
#define RBRACE 274
#define COMMA 275
#define RETURN 276
#define ID 277
#define MAIN 278
#define NUM 279
#define LESS_THAN 280
#define LESS_THAN_EQUAL_TO 281
#define GREATER_THAN 282
#define GREATER_THAN_EQUAL_TO 283
#define LSQUARE 284
#define RSQUARE 285
#define AND 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "cucu.y"

    char *str;
    int num;

#line 202 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_TYPE = 3,                   /* INT_TYPE  */
  YYSYMBOL_CHAR_TYPE = 4,                  /* CHAR_TYPE  */
  YYSYMBOL_ASSIGN = 5,                     /* ASSIGN  */
  YYSYMBOL_PLUS = 6,                       /* PLUS  */
  YYSYMBOL_MINUS = 7,                      /* MINUS  */
  YYSYMBOL_TIMES = 8,                      /* TIMES  */
  YYSYMBOL_DIVIDE = 9,                     /* DIVIDE  */
  YYSYMBOL_EQUAL = 10,                     /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 11,                  /* NOTEQUAL  */
  YYSYMBOL_SEMICOLON = 12,                 /* SEMICOLON  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_LPAREN = 16,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 17,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 18,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 19,                    /* RBRACE  */
  YYSYMBOL_COMMA = 20,                     /* COMMA  */
  YYSYMBOL_RETURN = 21,                    /* RETURN  */
  YYSYMBOL_ID = 22,                        /* ID  */
  YYSYMBOL_MAIN = 23,                      /* MAIN  */
  YYSYMBOL_NUM = 24,                       /* NUM  */
  YYSYMBOL_LESS_THAN = 25,                 /* LESS_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL_TO = 26,        /* LESS_THAN_EQUAL_TO  */
  YYSYMBOL_GREATER_THAN = 27,              /* GREATER_THAN  */
  YYSYMBOL_GREATER_THAN_EQUAL_TO = 28,     /* GREATER_THAN_EQUAL_TO  */
  YYSYMBOL_LSQUARE = 29,                   /* LSQUARE  */
  YYSYMBOL_RSQUARE = 30,                   /* RSQUARE  */
  YYSYMBOL_AND = 31,                       /* AND  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_intiate_program = 33,           /* intiate_program  */
  YYSYMBOL_program = 34,                   /* program  */
  YYSYMBOL_variable_declarations = 35,     /* variable_declarations  */
  YYSYMBOL_variable_declaration = 36,      /* variable_declaration  */
  YYSYMBOL_id_list = 37,                   /* id_list  */
  YYSYMBOL_main_func = 38,                 /* main_func  */
  YYSYMBOL_function_declaration = 39,      /* function_declaration  */
  YYSYMBOL_function_definition = 40,       /* function_definition  */
  YYSYMBOL_function_arguments = 41,        /* function_arguments  */
  YYSYMBOL_parameter_list = 42,            /* parameter_list  */
  YYSYMBOL_parameter = 43,                 /* parameter  */
  YYSYMBOL_TYPE = 44,                      /* TYPE  */
  YYSYMBOL_statements = 45,                /* statements  */
  YYSYMBOL_statement = 46,                 /* statement  */
  YYSYMBOL_return_statement = 47,          /* return_statement  */
  YYSYMBOL_compound_statement = 48,        /* compound_statement  */
  YYSYMBOL_expression = 49,                /* expression  */
  YYSYMBOL_term = 50,                      /* term  */
  YYSYMBOL_factor = 51,                    /* factor  */
  YYSYMBOL_primary_expression = 52,        /* primary_expression  */
  YYSYMBOL_assignment = 53,                /* assignment  */
  YYSYMBOL_function_call = 54,             /* function_call  */
  YYSYMBOL_argument_list = 55              /* argument_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   205

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  163

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    36,    36,    40,    41,    42,    43,    44,    45,    46,
      50,    51,    54,    55,    56,    57,    59,    60,    65,    66,
      67,    68,    74,    80,    84,    87,    88,    91,    92,    93,
      99,    99,   101,   102,   105,   106,   107,   108,   109,   110,
     113,   116,   117,   118,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   135,   136,   137,   138,   141,   142,
     145,   146,   150,   153,   154,   155,   159,   160
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT_TYPE",
  "CHAR_TYPE", "ASSIGN", "PLUS", "MINUS", "TIMES", "DIVIDE", "EQUAL",
  "NOTEQUAL", "SEMICOLON", "IF", "ELSE", "WHILE", "LPAREN", "RPAREN",
  "LBRACE", "RBRACE", "COMMA", "RETURN", "ID", "MAIN", "NUM", "LESS_THAN",
  "LESS_THAN_EQUAL_TO", "GREATER_THAN", "GREATER_THAN_EQUAL_TO", "LSQUARE",
  "RSQUARE", "AND", "$accept", "intiate_program", "program",
  "variable_declarations", "variable_declaration", "id_list", "main_func",
  "function_declaration", "function_definition", "function_arguments",
  "parameter_list", "parameter", "TYPE", "statements", "statement",
  "return_statement", "compound_statement", "expression", "term", "factor",
  "primary_expression", "assignment", "function_call", "argument_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-83)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      92,   -83,   -83,     5,   -83,    92,    14,   -83,    92,   103,
     -83,    34,   -83,    92,   -83,    92,   -12,    37,    62,   -83,
     -83,   -83,    92,   -83,    42,    72,    76,    92,    46,    52,
      44,   -83,    92,    76,   -83,   -83,   130,    31,   -83,   -83,
      85,   -83,    93,    94,    99,   -83,   108,   -83,   115,   122,
     129,    80,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,   135,    92,   119,   -83,   146,   133,
     134,   -83,    31,    31,    31,    31,    31,    31,    31,    31,
      31,   -83,   -83,   -83,   -83,   -83,    59,   137,   147,    76,
     148,   146,   143,   150,   146,   154,   -83,   167,   146,   146,
     151,   -83,    76,    76,   130,    96,   158,   163,    55,   171,
     -83,   -83,   -83,   -83,   146,   165,   166,   -83,   104,   117,
     157,   130,    -2,     8,   171,   -83,   -83,    69,   -83,   168,
     -83,   -83,   170,   172,    76,   -83,   138,   169,   159,   -83,
     146,   146,    -3,   162,   130,   164,   180,   176,   177,   181,
      76,   180,   -83,   183,   -83,   -83,    24,   182,   184,   146,
     -83,   185,   -83
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    30,    31,     0,     2,     7,     0,     5,     0,     0,
       1,     0,     3,     0,    11,     8,     0,    16,     0,    13,
      12,    10,     9,     4,     0,     0,     0,     0,     0,     0,
       0,     6,     0,     0,    60,    61,    62,    53,    57,    58,
       0,    24,    25,     0,    16,    17,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    14,    33,     0,
       0,    59,    52,    44,    45,    46,    47,    48,    50,    49,
      51,    54,    55,    56,    22,    26,     0,     0,     0,     0,
       0,    33,     0,     0,    33,     0,    39,     0,    33,    33,
       0,    28,     0,     0,    40,     0,     0,     0,    16,    12,
      18,    32,    37,    38,    33,     0,     0,    29,     0,     0,
      60,    66,     0,     0,     0,    20,    34,     0,    35,     0,
      19,    23,     0,     0,     0,    63,     0,     0,     0,    21,
      33,    33,     0,    60,    67,     0,    14,     0,     0,     0,
       0,     0,    36,    41,    43,    64,     0,     0,     0,    33,
      65,     0,    42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,   -83,   -83,   -83,    -4,   174,    58,   194,   190,    49,
     140,   -83,     6,   -82,   -83,   -83,   -83,   -33,   118,   -18,
     -83,   -51,   -83,   -83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    19,     7,     8,    15,    40,
      41,    42,   106,    93,    94,    95,    96,    36,    37,    38,
      39,    20,    97,   122
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      51,    11,    52,    53,    54,    10,     9,    55,    56,   107,
      25,     9,   111,    26,    16,   135,   115,   116,   136,    16,
     126,    24,    57,    58,    59,    60,    14,   149,    24,    52,
      53,    54,   129,    43,    55,    56,    43,   137,    43,    61,
      62,   109,    26,    81,    82,    83,    21,     1,     2,    57,
      58,    59,    60,    27,   158,   124,   104,    28,   147,   148,
      26,    48,    63,    12,    91,    18,    29,   126,    44,   118,
     119,    43,   121,    23,    92,    28,    46,   161,    30,    49,
      31,    50,    47,   100,   127,    52,    53,    54,    32,   101,
      55,    56,    33,   138,   114,     1,     2,    71,    34,    47,
      35,   142,    64,   144,    92,    57,    58,    59,    60,    52,
      53,    54,    33,    65,    55,    56,    66,   156,   120,    28,
      35,   132,    52,    53,    54,    17,    18,    55,    56,    57,
      58,    59,    60,    68,   133,    52,    53,    54,    67,    69,
      55,    56,    57,    58,    59,    60,    70,    84,    86,     1,
       2,    98,    99,   102,    33,    57,    58,    59,    60,    87,
     143,    88,    35,   103,   105,   108,   112,    89,    90,   110,
      72,    73,    74,    75,    76,    77,    78,    79,    80,   113,
     123,   117,   125,   128,   130,   131,   134,   139,   140,   146,
     141,   150,   152,   145,   151,   153,   154,   157,   155,    13,
     159,   160,    45,    22,   162,    85
};

static const yytype_uint8 yycheck[] =
{
      33,     5,     5,     6,     7,     0,     0,    10,    11,    91,
      22,     5,    94,     5,     8,    17,    98,    99,    20,    13,
      12,    15,    25,    26,    27,    28,    12,    30,    22,     5,
       6,     7,   114,    27,    10,    11,    30,    29,    32,     8,
       9,    92,     5,    61,    62,    63,    12,     3,     4,    25,
      26,    27,    28,    16,    30,   106,    89,    20,   140,   141,
       5,    17,    31,     5,    68,    23,    29,    12,    22,   102,
     103,    65,   105,    15,    68,    20,    24,   159,    16,    30,
      22,    32,    30,    24,    29,     5,     6,     7,    16,    30,
      10,    11,    16,    24,    98,     3,     4,    17,    22,    30,
      24,   134,    17,   136,    98,    25,    26,    27,    28,     5,
       6,     7,    16,    20,    10,    11,    22,   150,    22,    20,
      24,    17,     5,     6,     7,    22,    23,    10,    11,    25,
      26,    27,    28,    18,    17,     5,     6,     7,    30,    17,
      10,    11,    25,    26,    27,    28,    17,    12,    29,     3,
       4,    18,    18,    16,    16,    25,    26,    27,    28,    13,
      22,    15,    24,    16,    16,    22,    12,    21,    22,    19,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    12,
      22,    30,    19,    12,    19,    19,    29,    19,    18,    30,
      18,    29,    12,    24,    30,    19,    19,    14,    17,     5,
      18,    17,    28,    13,    19,    65
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,    33,    34,    35,    36,    38,    39,    44,
       0,    36,    38,    39,    12,    40,    44,    22,    23,    37,
      53,    12,    40,    38,    44,    22,     5,    16,    20,    29,
      16,    38,    16,    16,    22,    24,    49,    50,    51,    52,
      41,    42,    43,    44,    22,    37,    24,    30,    17,    41,
      41,    49,     5,     6,     7,    10,    11,    25,    26,    27,
      28,     8,     9,    31,    17,    20,    22,    30,    18,    17,
      17,    17,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    51,    51,    51,    12,    42,    29,    13,    15,    21,
      22,    36,    44,    45,    46,    47,    48,    54,    18,    18,
      24,    30,    16,    16,    49,    16,    44,    45,    22,    53,
      19,    45,    12,    12,    36,    45,    45,    30,    49,    49,
      22,    49,    55,    22,    53,    19,    12,    29,    12,    45,
      19,    19,    17,    17,    29,    17,    20,    29,    24,    19,
      18,    18,    49,    22,    49,    24,    30,    45,    45,    30,
      29,    30,    12,    19,    19,    17,    49,    14,    30,    18,
      17,    45,    19
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    34,    34,    34,    34,    34,
      35,    35,    36,    36,    36,    36,    37,    37,    38,    38,
      38,    38,    39,    40,    41,    42,    42,    43,    43,    43,
      44,    44,    45,    45,    46,    46,    46,    46,    46,    46,
      47,    48,    48,    48,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    50,    50,    50,    50,    51,    51,
      52,    52,    53,    54,    54,    54,    55,    55
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     3,     1,     4,     1,     2,     3,
       3,     2,     2,     2,     5,     4,     1,     3,     7,     8,
       8,     9,     6,     8,     1,     1,     3,     2,     4,     5,
       1,     1,     2,     0,     3,     3,     6,     2,     2,     1,
       2,     7,    11,     7,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     1,     1,     3,
       1,     1,     3,     4,     7,     9,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* intiate_program: program  */
#line 36 "cucu.y"
                          {fprintf(parserOut,"\nprogram  end.\n");}
#line 1344 "y.tab.c"
    break;

  case 3: /* program: variable_declarations main_func  */
#line 40 "cucu.y"
                                             {fprintf(parserOut,"\nvariable declaration and main fucntion is parsed \n\n");}
#line 1350 "y.tab.c"
    break;

  case 4: /* program: function_declaration function_definition main_func  */
#line 41 "cucu.y"
                                                             {fprintf(parserOut,"\nfunction declaration,definition and main fucntion is parsed \n\n");}
#line 1356 "y.tab.c"
    break;

  case 5: /* program: main_func  */
#line 42 "cucu.y"
                    {fprintf(parserOut,"\nmain fucntion is parsed..\n\n");}
#line 1362 "y.tab.c"
    break;

  case 6: /* program: variable_declarations function_declaration function_definition main_func  */
#line 43 "cucu.y"
                                                                                     {fprintf(parserOut,"\nvariable declarations,fucntion declaration \nfucntion definition and main funtion are parsed \n\n");}
#line 1368 "y.tab.c"
    break;

  case 7: /* program: variable_declarations  */
#line 44 "cucu.y"
                                                      {fprintf(parserOut,"\nvariables declarations only present.\n\n");}
#line 1374 "y.tab.c"
    break;

  case 8: /* program: function_declaration function_definition  */
#line 45 "cucu.y"
                                                   {fprintf(parserOut,"\nfunction declaration and definition only present.\n\n");}
#line 1380 "y.tab.c"
    break;

  case 9: /* program: variable_declarations function_declaration function_definition  */
#line 46 "cucu.y"
                                                                         {fprintf(parserOut,"\nvariable declarations dunction declaration and function definitions are parsed \n\n");}
#line 1386 "y.tab.c"
    break;

  case 12: /* variable_declaration: TYPE assignment  */
#line 54 "cucu.y"
                                      { fprintf(parserOut, "Variable Declaration via assignment\n\n");}
#line 1392 "y.tab.c"
    break;

  case 14: /* variable_declaration: TYPE ID LSQUARE NUM RSQUARE  */
#line 56 "cucu.y"
                                                                 {fprintf(parserOut, "Array Declaration: Type: %s , Size: %s\n",(yyvsp[-1].num));}
#line 1398 "y.tab.c"
    break;

  case 15: /* variable_declaration: TYPE ID LSQUARE RSQUARE  */
#line 57 "cucu.y"
                                               {fprintf(parserOut, "Array Declaration: Type  (Unsized):");}
#line 1404 "y.tab.c"
    break;

  case 16: /* id_list: ID  */
#line 59 "cucu.y"
               {fprintf(parserOut, "Variable Declaration: %s\n",(yyvsp[0].str));}
#line 1410 "y.tab.c"
    break;

  case 18: /* main_func: TYPE MAIN LPAREN RPAREN LBRACE statements RBRACE  */
#line 65 "cucu.y"
                                                             {fprintf(parserOut,"identifier :%s\n",(yyvsp[-5].str));}
#line 1416 "y.tab.c"
    break;

  case 19: /* main_func: TYPE MAIN LPAREN function_arguments RPAREN LBRACE statements RBRACE  */
#line 66 "cucu.y"
                                                                               {fprintf(parserOut,"this is main identifier :%s\n",(yyvsp[-6].str));}
#line 1422 "y.tab.c"
    break;

  case 20: /* main_func: TYPE MAIN LPAREN RPAREN LBRACE variable_declaration statements RBRACE  */
#line 67 "cucu.y"
                                                                                  {fprintf(parserOut,"identifier :%s\n",(yyvsp[-6].str));}
#line 1428 "y.tab.c"
    break;

  case 21: /* main_func: TYPE MAIN LPAREN function_arguments RPAREN LBRACE variable_declaration statements RBRACE  */
#line 68 "cucu.y"
                                                                                                    {fprintf(parserOut,"identifier :%s\n",(yyvsp[-7].str));}
#line 1434 "y.tab.c"
    break;

  case 22: /* function_declaration: TYPE ID LPAREN function_arguments RPAREN SEMICOLON  */
#line 74 "cucu.y"
                                                                          {fprintf(parserOut,"Function Declaration of %s ends\n\n",(yyvsp[-4].str));}
#line 1440 "y.tab.c"
    break;

  case 23: /* function_definition: TYPE ID LPAREN function_arguments RPAREN LBRACE statements RBRACE  */
#line 80 "cucu.y"
                                                                                        {fprintf(parserOut,"Function Definition is of id: \n",(yyvsp[-6].str));}
#line 1446 "y.tab.c"
    break;

  case 24: /* function_arguments: parameter_list  */
#line 84 "cucu.y"
                                     {fprintf(parserOut,"fucntion arguments ends here.\n");}
#line 1452 "y.tab.c"
    break;

  case 27: /* parameter: TYPE ID  */
#line 91 "cucu.y"
                   {fprintf(parserOut,"identifier: %s \n",(yyvsp[0].str));}
#line 1458 "y.tab.c"
    break;

  case 28: /* parameter: TYPE ID LSQUARE RSQUARE  */
#line 92 "cucu.y"
                                                                             {fprintf(parserOut,"identifier: %s ",(yyvsp[-2].str));}
#line 1464 "y.tab.c"
    break;

  case 29: /* parameter: TYPE ID LSQUARE NUM RSQUARE  */
#line 93 "cucu.y"
                                                                              {fprintf(parserOut,"identifier: %s [] num : %d",(yyvsp[-3].str),(yyvsp[-1].num));}
#line 1470 "y.tab.c"
    break;

  case 30: /* TYPE: INT_TYPE  */
#line 99 "cucu.y"
              {fprintf(parserOut,"TYPE: int \n");}
#line 1476 "y.tab.c"
    break;

  case 31: /* TYPE: CHAR_TYPE  */
#line 99 "cucu.y"
                                                              {fprintf(parserOut,"TYPE: char * \n");}
#line 1482 "y.tab.c"
    break;

  case 32: /* statements: statement statements  */
#line 101 "cucu.y"
                                 {fprintf(parserOut,"statement parsed.\n");}
#line 1488 "y.tab.c"
    break;

  case 34: /* statement: TYPE ID SEMICOLON  */
#line 105 "cucu.y"
                             {fprintf(parserOut,"identifier: %s \n",(yyvsp[-1].str));}
#line 1494 "y.tab.c"
    break;

  case 38: /* statement: function_call SEMICOLON  */
#line 109 "cucu.y"
                                    {fprintf(parserOut,"fucntion call \n");}
#line 1500 "y.tab.c"
    break;

  case 39: /* statement: compound_statement  */
#line 110 "cucu.y"
                              {fprintf(parserOut,"loop ends here  \n");}
#line 1506 "y.tab.c"
    break;

  case 40: /* return_statement: RETURN expression  */
#line 113 "cucu.y"
                                     {fprintf(parserOut,"\nidentifier: %s ",(yyvsp[-1].str));}
#line 1512 "y.tab.c"
    break;

  case 41: /* compound_statement: IF LPAREN expression RPAREN LBRACE statements RBRACE  */
#line 116 "cucu.y"
                                                                         {fprintf(parserOut,"conditional-statement: %s ",(yyvsp[-6].str));}
#line 1518 "y.tab.c"
    break;

  case 42: /* compound_statement: IF LPAREN expression RPAREN LBRACE statements RBRACE ELSE LBRACE statements RBRACE  */
#line 117 "cucu.y"
                                                                                                        {fprintf(parserOut,"conditional-statement: %s -%s ",(yyvsp[-10].str),(yyvsp[-3].str));}
#line 1524 "y.tab.c"
    break;

  case 43: /* compound_statement: WHILE LPAREN expression RPAREN LBRACE statements RBRACE  */
#line 118 "cucu.y"
                                                                             {fprintf(parserOut,"conditional-statement: %s ",(yyvsp[-6].str));}
#line 1530 "y.tab.c"
    break;

  case 44: /* expression: expression PLUS term  */
#line 122 "cucu.y"
                                  {fprintf(parserOut,"operator: %s ",(yyvsp[-1].str));}
#line 1536 "y.tab.c"
    break;

  case 45: /* expression: expression MINUS term  */
#line 123 "cucu.y"
                                   {fprintf(parserOut,"operator: %s ",(yyvsp[-1].str));}
#line 1542 "y.tab.c"
    break;

  case 46: /* expression: expression EQUAL term  */
#line 124 "cucu.y"
                                  {fprintf(parserOut,"operator: %s ",(yyvsp[-1].str));}
#line 1548 "y.tab.c"
    break;

  case 47: /* expression: expression NOTEQUAL term  */
#line 125 "cucu.y"
                                     {fprintf(parserOut,"operator: %s ",(yyvsp[-1].str));}
#line 1554 "y.tab.c"
    break;

  case 48: /* expression: expression LESS_THAN term  */
#line 126 "cucu.y"
                                      {fprintf(parserOut,"operator: %s ",(yyvsp[-1].str));}
#line 1560 "y.tab.c"
    break;

  case 49: /* expression: expression GREATER_THAN term  */
#line 127 "cucu.y"
                                         {fprintf(parserOut,"operator: %s ",(yyvsp[-1].str));}
#line 1566 "y.tab.c"
    break;

  case 50: /* expression: expression LESS_THAN_EQUAL_TO term  */
#line 128 "cucu.y"
                                               {fprintf(parserOut,"operator: %s ",(yyvsp[-1].str));}
#line 1572 "y.tab.c"
    break;

  case 51: /* expression: expression GREATER_THAN_EQUAL_TO term  */
#line 129 "cucu.y"
                                                  {fprintf(parserOut,"operator: %s ",(yyvsp[-1].str));}
#line 1578 "y.tab.c"
    break;

  case 52: /* expression: expression ASSIGN term  */
#line 130 "cucu.y"
                                    {fprintf(parserOut,"operator: %s ",(yyvsp[-1].str));}
#line 1584 "y.tab.c"
    break;

  case 54: /* term: term TIMES factor  */
#line 135 "cucu.y"
                        {fprintf(parserOut,"operator: %s ",(yyvsp[-1].str));}
#line 1590 "y.tab.c"
    break;

  case 55: /* term: term DIVIDE factor  */
#line 136 "cucu.y"
                         {fprintf(parserOut,"operator: %s ",(yyvsp[-1].str));}
#line 1596 "y.tab.c"
    break;

  case 56: /* term: term AND factor  */
#line 137 "cucu.y"
                      {fprintf(parserOut,"operator: %s ",(yyvsp[-1].str));}
#line 1602 "y.tab.c"
    break;

  case 59: /* factor: LPAREN expression RPAREN  */
#line 142 "cucu.y"
                                  {fprintf(parserOut," %s %s \n",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1608 "y.tab.c"
    break;

  case 60: /* primary_expression: ID  */
#line 145 "cucu.y"
                        {fprintf(parserOut, "identifier : %s\n",(yyvsp[0].str));}
#line 1614 "y.tab.c"
    break;

  case 61: /* primary_expression: NUM  */
#line 146 "cucu.y"
                         {fprintf(parserOut, "number : %d\n", (yyvsp[0].num));}
#line 1620 "y.tab.c"
    break;

  case 62: /* assignment: ID ASSIGN expression  */
#line 150 "cucu.y"
                                  {fprintf(parserOut,"operator: %s \n",(yyvsp[-1].str));}
#line 1626 "y.tab.c"
    break;

  case 63: /* function_call: ID LPAREN argument_list RPAREN  */
#line 153 "cucu.y"
                                                {fprintf(parserOut,"fucntion call : %s",(yyvsp[-3].str));}
#line 1632 "y.tab.c"
    break;

  case 64: /* function_call: ID LPAREN ID LSQUARE expression RSQUARE RPAREN  */
#line 154 "cucu.y"
                                                               {fprintf(parserOut,"fucntion call : %s",(yyvsp[-6].str));}
#line 1638 "y.tab.c"
    break;

  case 65: /* function_call: ID LPAREN argument_list COMMA ID LSQUARE expression RSQUARE RPAREN  */
#line 155 "cucu.y"
                                                                                  {fprintf(parserOut,"fucntion call : %s",(yyvsp[-8].str));}
#line 1644 "y.tab.c"
    break;


#line 1648 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 164 "cucu.y"


void yyerror(const char *s) {
    fprintf(stderr, "%s\n", s);
    fprintf(parserOut, "%s\n", s);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return EXIT_FAILURE;
    }
    //opening input file for reading
    FILE *inputFile = fopen(argv[1], "r");
    if (!inputFile) {
        perror("Error opening input file");
        return EXIT_FAILURE;
    }
    //opening lexer.txt file
    FILE *lexerOutputFile = fopen("lexer.txt", "w");
    if (!lexerOutputFile) {
        perror("Error opening lexer output file");
        fclose(inputFile);
        return EXIT_FAILURE;
    }
    
    FILE *parserOutputFile = fopen("parser.txt", "w");
    if (!parserOutputFile) {
        perror("Error opening parser output file");
        fclose(inputFile);
        fclose(lexerOutputFile);
        return EXIT_FAILURE;
    }

    yyout = lexerOutputFile;
    parserOut = parserOutputFile;
    yyin = inputFile;
    yyparse();
    fclose(inputFile);
    fclose(lexerOutputFile);
    fclose(parserOutputFile);
    
    return 0;
}
