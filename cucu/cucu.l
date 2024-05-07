%{
#include <stdlib.h>
#include<stdio.h>
void yyerror(const char* );
#include "y.tab.h"
FILE *parserOut;
%}

%%
[+]             {fprintf(yyout,"PLUS : %s\n", yytext);yylval.str = strdup(yytext);return PLUS;}
[-]             {fprintf(yyout,"MINUS : %s\n", yytext); yylval.str = strdup(yytext);return MINUS; }
"*"             {fprintf(yyout,"TIMES : %s\n", yytext);yylval.str = strdup(yytext); return TIMES; }
"/"             {fprintf(yyout,"DIVIDE : %s\n", yytext);yylval.str = strdup(yytext); return DIVIDE; }
"=="            {fprintf(yyout,"EQUAL : %s\n", yytext);yylval.str = strdup(yytext); return EQUAL; }
"!="            {fprintf(yyout,"NOTEQUAL : %s\n", yytext);yylval.str = strdup(yytext); return NOTEQUAL; }
"="             {fprintf(yyout,"ASSIGN : %s\n", yytext);yylval.str = strdup(yytext); return ASSIGN; }
"<"             {fprintf(yyout,"LESS_THAN : %s\n", yytext); yylval.str = strdup(yytext);return LESS_THAN; }
">"             {fprintf(yyout,"GREATER_THAN : %s\n", yytext);yylval.str = strdup(yytext); return GREATER_THAN; }
"<="            {fprintf(yyout,"LESS_THAN_EQUAL : %s\n", yytext);yylval.str = strdup(yytext); return LESS_THAN_EQUAL_TO; }
">="            {fprintf(yyout,"GREATER_THAN_EQUAL : %s\n", yytext);yylval.str = strdup(yytext); return GREATER_THAN_EQUAL_TO; }
";"             {fprintf(yyout,"SEMICOLON : %s\n", yytext); return SEMICOLON; }
"&"             {fprintf(yyout,"AMP : %s\n", yytext);yylval.str = strdup(yytext); return AND; }
"int"           {fprintf(yyout,"INT_TYPE : %s\n", yytext); return INT_TYPE; }
"char *"        {fprintf(yyout,"CHAR_TYPE : %s\n", yytext); return CHAR_TYPE; }
"main"          {fprintf(yyout,"MAIN : %s\n", yytext);yylval.str = strdup(yytext); return MAIN; }
"if"            {fprintf(yyout,"IF : %s\n", yytext);yylval.str = strdup(yytext); return IF; }
"else"           {fprintf(yyout,"ELSE : %s\n", yytext);yylval.str = strdup(yytext); return ELSE; }
"while"         {fprintf(yyout,"WHILE : %s\n", yytext);yylval.str = strdup(yytext); return WHILE; }
","             {fprintf(yyout,"COMMA : %s\n", yytext); return COMMA; }
"return"        {fprintf(yyout,"return : %s\n", yytext);yylval.str = strdup(yytext); return RETURN; }
"("             {fprintf(yyout,"LPAREN : %s\n", yytext);yylval.str = strdup(yytext); return LPAREN; }
")"             {fprintf(yyout,"RPAREN : %s\n", yytext);yylval.str = strdup(yytext); return RPAREN; }
"{"             {fprintf(yyout,"LBRACE : %s\n", yytext);yylval.str = strdup(yytext); return LBRACE; }
"}"             {fprintf(yyout,"RBRACE : %s\n", yytext); yylval.str = strdup(yytext);return RBRACE; }

"["             {fprintf(yyout,"LSQUARE : %s\n", yytext); yylval.str = strdup(yytext);return LSQUARE; }
"]"             {fprintf(yyout,"RSQUARE : %s\n", yytext);yylval.str = strdup(yytext); return RSQUARE;}
"/*".*"*/"     /* Ignore comments */
[a-zA-Z_][a-zA-Z0-9_]* { fprintf(yyout,"ID : %s\n", yytext);yylval.str = strdup(yytext); return ID; } //identifiers
[0-9]+          {fprintf(yyout,"NUM : %s\n", yytext);yylval.num= atoi(yytext); return NUM; }
[\t\n ]         ; // Ignore whitespace and newline characters
.               ; //ignore anything else
%%

int yywrap() {
    return 1;
}