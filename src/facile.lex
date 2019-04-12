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

"break" return TOK_BREAK;

"foreach" return TOK_FOREACH;

".." return TOK_PTPT;

"in" return TOK_IN;

"endforeach" return TOK_ENDFOREACH;

"if"	return TOK_IF;

"then"	return TOK_THEN;

"elseif" return TOK_ELSEIF;

"else"	return TOK_ELSE;

"end"	return TOK_END;

"endif"	return TOK_ENDIF;

"false" return TOK_FALSE;

"true"	return TOK_TRUE;

">="	return TOK_SUPEQ;

">"	return TOK_SUP;

"<"	return TOK_INF;

"<="	return TOK_INFEQ;

"#" 	return TOK_DIFF;

"="	return TOK_EQ;

"not"	return TOK_NOT;

"and"	return TOK_AND;

"or" 	return TOK_OR;

"while" return TOK_WHILE;

"do"	return TOK_DO;

"endwhile" return TOK_ENDWHILE;

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

