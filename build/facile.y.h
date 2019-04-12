/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 87 "facile.y" /* yacc.c:1909  */

	gulong number;
	char *string;
	GNode * node;

#line 100 "/media/Qi/acoussea/Cours/L3/compilation/Nouveau dossier/Compiler-Flex-Bison/build/facile.y.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MEDIA_QI_ACOUSSEA_COURS_L3_COMPILATION_NOUVEAU_DOSSIER_COMPILER_FLEX_BISON_BUILD_FACILE_Y_H_INCLUDED  */
