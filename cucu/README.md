LEXER DETAILS:
Supported tokens: 
Arithmetic operators (+, -, , /), comparison operators (==, !=, <, >, <=, >=), assignment (=), semicolon (;), logical AND (&), data types (int, char), keywords (main, if, else, while), comma (,), return, parentheses (), curly braces {}, square brackets [], comments (ignored), identifiers (letters, digits, underscores), and numeric literals.

Actions: 
The code prints informative messages to a designated output file (parserOut) for each token recognized. It also stores the token's text or numeric value in the yylval variable for future use during parsing.
Whitespace and comments: Whitespace and comments are ignored.
Unrecognized characters: Any character not matching a defined token is ignored.
yywrap function: This function always returns 1, indicating the lexer has reached the end of the input.

YACC FILE DETAILS: 

Header Inclusions:
<stdio.h>: Provides standard input/output functions like fprintf.
<stdlib.h>: Provides general utility functions like EXIT_FAILURE.
<math.h>: Might be included for future mathematical operations (not implemented).

External Functions:
yyerror(const char *): Handles error reporting during parsing. Prints the error message to standard error and a designated parser output file.
extern FILE *yyin: Likely defined in the lexer, represents the input file stream.
extern FILE *yyout: Likely defined in the lexer, represents the lexer output file stream (not used in this code).
extern int yyparse(): The Yacc parsing function, initiates the parsing process.
Type Union:

union { char *str; int num; }: This union allows a single variable to hold either a string (str) or an integer (num) depending on the context.

Token Definitions:
These lines define the various tokens recognized by the parser using the %token directive.
Keywords like INT_TYPE, CHAR_TYPE, IF, ELSE, etc. are defined as strings (<str>).
Identifiers and literals are also defined as strings (<str>).
Numbers are defined as integers (<num>).
Operators and delimiters are defined as strings (<str>).
The %left and %right directives specify the associativity and precedence of operators for expression evaluation.


Start Symbol:
%start intiate_program: Declares intiate_program as the starting symbol for the grammar.


Grammar Rules:
The code defines several grammar rules using Yacc constructs:
rule_name : alternatives { semantic actions } ;
rule_name is the name of the grammar rule.
alternatives represent different ways the rule can be matched.
semantic actions are C code snippets executed when a rule is matched. These actions often involve printing informative messages to the parser output file (parserOut).


Grammar Details:
intiate_program: This rule simply marks the end of the program.
program: This rule defines various structures a program can have, including variable declarations, function definitions, and the main function. Semantic actions print informative messages about the parsed program structure.
variable_declarations: Defines rules for variable declarations, including single variables, comma-separated lists, and arrays (with or without size).
main_func: Defines rules for the main function, allowing for various argument lists and variable declarations within the function body.
function_declaration, function_definition: Define function declarations and definitions, respectively.
function_arguments, parameter_list, parameter: Define function arguments and parameter lists, including handling arrays as parameters.
TYPE: Defines the two data types supported (int and char).
statements: Defines a statement as either a compound statement (if, while), an assignment, a function call, or a single expression.
return_statement: Defines the structure of a return statement.
compound_statement: Defines if-else and while loop statements.
expression: Defines various arithmetic and relational expressions.
term, factor: Further break down expressions into terms and factors.
primary_expression: Defines identifiers and numeric literals as primary expressions.
assignment: Defines the assignment operator.
function_call: Defines function call structures, including handling array arguments.
argument_list: Defines a list of arguments passed to a function.

Main Function:

This function handles program startup and file I/O.
It checks for a single command-line argument specifying the input file.
It opens the input file, lexer output file (lexer.txt), and parser output file (parser.txt).
It sets up streams for the parser (input, lexer output, parser output).
It calls yyparse() to initiate parsing.
Finally, it closes all open files.

Overall Functionality:

This C code appears to be a parser for a mini-C language. It interacts with a lexer (not provided) to obtain tokens and uses Yacc to define grammar rules for the language. The parser analyzes the token stream and verifies if it adheres to the defined.
this program accepts only two data types int and char *.


