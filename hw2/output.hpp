#ifndef _236360_2_
#define _236360_2_

#include <string>
using namespace std;

enum tokentype {
    VOID = 1,
    INT = 2,
    BYTE = 3,
    B = 4,
    BOOL = 5,
    AND = 6,
    OR = 7,
    NOT = 8,
    TRUE = 9,
    FALSE = 10,
    RETURN = 11,
    IF = 12,
    ELSE = 13,
    WHILE = 14,
    BREAK = 15,
    CONTINUE = 16,
    SWITCH = 17,
    CASE = 18,
    DEFAULT = 19,
    COLON = 20,
    SC = 21,
    COMMA = 22,
    LPAREN = 23,
    RPAREN = 24,
    LBRACE = 25,
    RBRACE = 26,
    ASSIGN = 27,
    RELOP = 28,
    ADD = 29,
    SUB = 30,
    MULT = 31,
    DIV = 32,
    COMMENT = 33,
    ID = 34,
    NUM = 35,
    STRING = 36
};
extern int yylineno;
extern char* yytext;
extern int yyleng;
extern int yylex();

namespace output {
	extern const string rules[];
    void printProductionRule(int ruleno);
    void errorLex(int lineno);
    void errorSyn(int lineno);
};

#endif
