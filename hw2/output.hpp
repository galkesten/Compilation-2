#ifndef _236360_2_
#define _236360_2_

#include <string>
using namespace std;

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
