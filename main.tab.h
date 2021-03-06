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

#ifndef YY_YY_MAIN_TAB_H_INCLUDED
# define YY_YY_MAIN_TAB_H_INCLUDED
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
    NUM = 258,
    VAR = 259,
    IF = 260,
    ELSE = 261,
    ARRAY = 262,
    MAIN = 263,
    INT = 264,
    FLOAT = 265,
    CHAR = 266,
    BRACKETSTART = 267,
    BRACKETEND = 268,
    FOR = 269,
    WHILE = 270,
    ODDEVEN = 271,
    PRINTFUNCTION = 272,
    SIN = 273,
    COS = 274,
    TAN = 275,
    LOG = 276,
    FACTORIAL = 277,
    CASE = 278,
    DEFAULT = 279,
    SWITCH = 280,
    CLASS = 281,
    TRY = 282,
    CATCH = 283,
    FUNCTION = 284,
    MOD = 285,
    DEFINE = 286,
    STRUCT = 287,
    OR = 288,
    AND = 289,
    XOR = 290,
    POW = 291,
    ISGREATER = 292,
    PRIVATE = 293,
    ISLESS = 294,
    ISEQUAL = 295,
    PUBLIC = 296,
    STRING = 297,
    STRCMP = 298,
    HEADER = 299,
    BOOL = 300,
    ISDIVISIBLE = 301,
    IFX = 302
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

#endif /* !YY_YY_MAIN_TAB_H_INCLUDED  */
