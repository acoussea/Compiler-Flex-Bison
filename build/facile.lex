%option noyywrap

%{

#include <glib.h>
#include "facile.y.h"

%}

%%

0|[1-9][0-9]* {
	sscanf(yytext, "%lu", &yylval.number);
	return TOK_NUMBER;
}

print	return TOK_PRINT;

read	return TOK_READ;

[a-zA-Z_][a-zA-Z0-9_]* {
	yylval.string = yytext;
	return TOK_IDENT;
}

":="	return TOK_AFFECT;

";"	return TOK_SEMICOLON;

"-"	return TOK_SUB;

"+"	return TOK_ADD;

"*"	return TOK_MUL;

"/"	return TOK_DIV;

"("	return TOK_OPEN_PARENTHESIS;

")"	return TOK_CLOSE_PARENTHESIS;

[ \t\n]	;

. return yytext[0];

%%

