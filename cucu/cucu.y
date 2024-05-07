%{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void yyerror(const char *);
extern FILE *yyin;
extern FILE *yyout;
extern int yyparse();
extern FILE *parserOut;
%}

%union {
    char *str;
    int num;
}

// Token definitions
%token  <str> INT_TYPE CHAR_TYPE  ASSIGN PLUS MINUS TIMES DIVIDE EQUAL NOTEQUAL SEMICOLON IF ELSE WHILE LPAREN RPAREN LBRACE RBRACE COMMA RETURN
%token <str> ID MAIN 
%token <num> NUM
%token <str> LESS_THAN LESS_THAN_EQUAL_TO GREATER_THAN GREATER_THAN_EQUAL_TO LSQUARE RSQUARE AND

%left LPAREN RPAREN
%left TIMES DIVIDE
%left PLUS MINUS
%left LESS_THAN LESS_THAN_EQUAL_TO GREATER_THAN GREATER_THAN_EQUAL_TO
%left EQUAL NOTEQUAL
%left ASSIGN


%start intiate_program 


%%
// Rule for initiating the program
intiate_program: program  {fprintf(parserOut,"\nprogram  end.\n");}
               ;

// Rule for program
program : variable_declarations   main_func  {fprintf(parserOut,"\nvariable declaration and main fucntion is parsed \n\n");}
        | function_declaration function_definition main_func {fprintf(parserOut,"\nfunction declaration,definition and main fucntion is parsed \n\n");}
        | main_func {fprintf(parserOut,"\nmain fucntion is parsed..\n\n");}
        | variable_declarations  function_declaration function_definition main_func  {fprintf(parserOut,"\nvariable declarations,fucntion declaration \nfucntion definition and main funtion are parsed \n\n");}
        | variable_declarations  /*global variables*/ {fprintf(parserOut,"\nvariables declarations only present.\n\n");}
        | function_declaration function_definition {fprintf(parserOut,"\nfunction declaration and definition only present.\n\n");}
        | variable_declarations function_declaration function_definition {fprintf(parserOut,"\nvariable declarations dunction declaration and function definitions are parsed \n\n");}
        ;  
        
//rule for variable declarations        
variable_declarations: variable_declarations variable_declaration SEMICOLON
                     | variable_declaration SEMICOLON
                     ;

variable_declaration: TYPE assignment { fprintf(parserOut, "Variable Declaration via assignment\n\n");}
                    | TYPE id_list    
                    | TYPE ID LSQUARE NUM RSQUARE /*for arrays*/ {fprintf(parserOut, "Array Declaration: Type: %s , Size: %s\n",$4);}
                    | TYPE ID LSQUARE  RSQUARE {fprintf(parserOut, "Array Declaration: Type  (Unsized):");}
                    ;
id_list: ID    {fprintf(parserOut, "Variable Declaration: %s\n",$1);}
       | ID COMMA id_list
       ;


//main fucntion rules    
main_func: TYPE MAIN LPAREN  RPAREN LBRACE statements RBRACE {fprintf(parserOut,"identifier :%s\n",$2);}
         | TYPE MAIN LPAREN function_arguments RPAREN LBRACE statements RBRACE {fprintf(parserOut,"this is main identifier :%s\n",$2);}
         | TYPE MAIN LPAREN  RPAREN LBRACE variable_declaration statements RBRACE {fprintf(parserOut,"identifier :%s\n",$2);}
         | TYPE MAIN LPAREN function_arguments RPAREN LBRACE variable_declaration statements RBRACE {fprintf(parserOut,"identifier :%s\n",$2);}
         ;



//fucntion declarations
function_declaration: TYPE ID LPAREN function_arguments RPAREN SEMICOLON  {fprintf(parserOut,"Function Declaration of %s ends\n\n",$2);}

                    ;


//function is  defined by these rules
function_definition: TYPE ID LPAREN function_arguments RPAREN LBRACE statements RBRACE  {fprintf(parserOut,"Function Definition is of id: \n",$2);}
                    ;


function_arguments:  parameter_list  {fprintf(parserOut,"fucntion arguments ends here.\n");}
                  ;

parameter_list: parameter 
              | parameter COMMA parameter_list 
              ;

parameter: TYPE ID {fprintf(parserOut,"identifier: %s \n",$2);}
          | TYPE ID LSQUARE RSQUARE  /* for array parameters without size */ {fprintf(parserOut,"identifier: %s ",$2);}
          | TYPE ID LSQUARE NUM RSQUARE  /* for array parameters with size */ {fprintf(parserOut,"identifier: %s [] num : %d",$2,$4);}
          ;


//data type rules .in this code there are only two data types int and char

TYPE:INT_TYPE {fprintf(parserOut,"TYPE: int \n");} | CHAR_TYPE{fprintf(parserOut,"TYPE: char * \n");} ;

statements: statement statements {fprintf(parserOut,"statement parsed.\n");}
          | /* Empty */
          ;

statement: TYPE ID SEMICOLON {fprintf(parserOut,"identifier: %s \n",$2);}
         | TYPE assignment SEMICOLON 
         |TYPE ID LSQUARE NUM RSQUARE SEMICOLON 
         |return_statement SEMICOLON
         | function_call SEMICOLON  {fprintf(parserOut,"fucntion call \n");}
         | compound_statement {fprintf(parserOut,"loop ends here  \n");}
         ;

return_statement: RETURN expression  {fprintf(parserOut,"\nidentifier: %s ",$1);}
                ;

compound_statement: IF LPAREN expression RPAREN LBRACE statements RBRACE {fprintf(parserOut,"conditional-statement: %s ",$1);}
                   | IF LPAREN expression RPAREN LBRACE statements RBRACE ELSE LBRACE statements RBRACE {fprintf(parserOut,"conditional-statement: %s -%s ",$1,$8);}
                   | WHILE LPAREN expression RPAREN LBRACE statements RBRACE {fprintf(parserOut,"conditional-statement: %s ",$1);}
                   ;


expression: expression PLUS term  {fprintf(parserOut,"operator: %s ",$2);}
          | expression MINUS term  {fprintf(parserOut,"operator: %s ",$2);}
          | expression EQUAL term {fprintf(parserOut,"operator: %s ",$2);}
          | expression NOTEQUAL term {fprintf(parserOut,"operator: %s ",$2);}
          | expression LESS_THAN term {fprintf(parserOut,"operator: %s ",$2);}
          | expression GREATER_THAN term {fprintf(parserOut,"operator: %s ",$2);}
          | expression LESS_THAN_EQUAL_TO term {fprintf(parserOut,"operator: %s ",$2);}
          | expression GREATER_THAN_EQUAL_TO term {fprintf(parserOut,"operator: %s ",$2);}
          | expression ASSIGN term  {fprintf(parserOut,"operator: %s ",$2);}
          | term 
       
          ;

term: term TIMES factor {fprintf(parserOut,"operator: %s ",$2);}
    | term DIVIDE factor {fprintf(parserOut,"operator: %s ",$2);}
    | term AND factor {fprintf(parserOut,"operator: %s ",$2);}
    | factor
    ;

factor: primary_expression
      | LPAREN expression RPAREN  {fprintf(parserOut," %s %s \n",$1,$3);}
      ;
 
primary_expression: ID  {fprintf(parserOut, "identifier : %s\n",$1);}
                  | NUM  {fprintf(parserOut, "number : %d\n", $1);}
                  ;


assignment: ID ASSIGN expression  {fprintf(parserOut,"operator: %s \n",$2);}
          ;

function_call: ID LPAREN argument_list RPAREN   {fprintf(parserOut,"fucntion call : %s",$1);}
             | ID LPAREN ID LSQUARE expression RSQUARE RPAREN  {fprintf(parserOut,"fucntion call : %s",$1);}
             | ID LPAREN argument_list COMMA ID LSQUARE expression RSQUARE RPAREN {fprintf(parserOut,"fucntion call : %s",$1);}
              ;


argument_list: expression
              | argument_list COMMA expression
              
              ;
              
%%

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