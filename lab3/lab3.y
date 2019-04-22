%{
#include	<stdio.h>
#include	<stdlib.h>

#define MENORQUE	1
#define MENORIGUAL	2
#define MAIORQUE	3
#define MAIORIGUAL	4
#define IGUAL		5
#define DIFERENTE	6
#define MAIS		7
#define MENOS		8
#define VEZES		9
#define DIV			10
#define PERCENT 	11

int tab = 0;
%}

%union {
	char string[50];
	int atr, valor;
	float valreal;
	char carac;
}

%token CALL
%token CHAR
%token DO
%token ELSE
%token FALSE
%token FLOAT
%token FOR
%token FUNCTIONS
%token GLOBAL
%token IF
%token INT
%token LOCAL
%token LOGIC
%token MAIN
%token PROGRAM
%token READ
%token RETURN
%token STATEMENTS
%token TRUE
%token VOID
%token WHILE
%token WRITE

%token <string>     ID
%token <valor>      INTCT
%token <carac>      CHARCT
%token <valreal>    FLOATCT
%token <string>     STRING

%token OR
%token AND
%token NOT
%token <atr>        RELOP
%token <atr>        ADOP
%token <atr>        MULTOP
%token NEG

%token ASSIGN
%token OPPAR
%token CLPAR
%token OPBRAK
%token CLBRAK
%token OPBRACE
%token CLBRACE
%token SCOLON
%token COMMA
%token COLON

%%

Prog        :	PROGRAM     {printf("\nprogram ");}
                ID          {/*printf ("%s ", $1);*/}
                OPBRACE     {printf("\{");}
                GlobDecls
                Functions
                CLBRACE     {printf("\n}\n");}
            ;

GlobDecls 	:
            |   GLOBAL      {printf("\nglobal");}
                COLON       {printf(":");}
                DeclList  
            ;

DeclList	:	Declaration {printf ("\n"); tabular ();}
            |   DeclList
                Declaration
            ;

Declaration :	Type
                ElemList 
                SCOLON      {printf(";");}
            ;

Type		: 	INT         {printf ("int ");}
            |   FLOAT       {printf ("float ");}
            |   CHAR        {printf ("char ");}
            |   LOGIC       {printf ("logic ");}
            |   VOID        {printf ("void ");}
            ;

ElemList    :	Elem
            |   ElemList 
                COMMA       {printf(", ");}
                Elem
            ;

Elem        :	ID Dims
            ;

Dims		:	
            |   OPBRAK      {printf("[");}
                DimList 
                CLBRAK      {printf("]");}
            ;

DimList	    :   INTCT
            |   DimList
                COMMA       {printf(", ");}
                INTCT
            ;

Functions	:   FUNCTIONS   {printf("\nfunctions");}
                COLON       {printf(":");}
                FuncList
            ;

FuncList	:   Function    {printf("\n");}
            |   FuncList
                Function    {printf("\n");}
            ;

Function	:	Header      {printf("\n");}
                OPBRACE     {printf("\(");}
                LocDecls
                Stats 
                CLBRACE     {printf("\) ");}
            ;

Header		:   MAIN        {printf("\nmain");}
            |   Type 
                ID
                OPPAR       {printf("\(");}
                Params
                CLPAR       {printf("\) ");}
            ;

Params		:
            |   ParamList
            ;

ParamList   :   Parameter
            |   ParamList
                COMMA       {printf(", ");}
                Parameter
            ;

Parameter   :   Type
                ID  
            ;

LocDecls	:   
            |   LOCAL       {printf("\nlocal");}
                COLON       {printf(":");}
                DeclList
            ;

Stats       :   STATEMENTS  {printf("\nstatements");}
                COLON       {printf(":");}
                StatList    
            ;

StatList	:
            |   StatList Statement
            ;

Statement   :   CompStat
            |   IfStat
            |   WhileStat
            |   DoStat
            |   ForStat
            |   ReadStat
            |   WriteStat
            |   AssignStat
            |   CallStat
            |   ReturnStat
            |   SCOLON      {printf(";");}
            ;

CompStat	:   OPBRACE     {tabular (); printf ("\{\n"); tab++;}
                StatList
                CLBRACE     {tab--; tabular (); printf ("}\n");}
            ;

IfStat		:   IF          {printf("\nif");}
                OPPAR       {printf("\(");}
                Expression
                CLPAR       {printf("\) ";)}
                Statement
                ElseStat
            ;

ElseStat	:
            |   ELSE        {printf("\nelse ");}
                Statement
            ;

WhileStat   :   WHILE       {printf("\nwhile");}
                OPPAR       {printf("\(");}
                Expression
                CLPAR       {printf("\)");}
                Statement
            ;

DoStat  	:   DO          {printf("\ndo ");}
                Statement
                WHILE       {printf(" while");}
                OPPAR       {printf("\(");}
                Expression
                CLPAR       {printf("\)");}
                SCOLON      {printf(";");}
            ;

ForStat	    :  	FOR         {printf("\nfor");}
                OPPAR       {printf("\(");}
                Variable
                ASSIGN
                Expression 
                SCOLON      {printf("; ");}
                Expression
                SCOLON      {printf("; ");}
                Variable
                ASSIGN
                Expression
                CLPAR       {printf("\) ");}
                Statement
            ;

ReadStat   	:   READ        {printf("\nread ")}
                OPPAR       {printf("\(");}
                ReadList
                CLPAR       {printf("\)");}
                SCOLON      {printf(";");}
            ;

ReadList	:   Variable
            |   ReadList
                COMMA       {printf(", ");}
                Variable
            ;

WriteStat  	:	WRITE       {printf("\nwrite ");}
                OPPAR       {printf("\(");}
                WriteList
                CLPAR       {printf("\)");}
                SCOLON      {printf(";");}
            ;

WriteList	:	WriteElem
            |   WriteList
                COMMA       {printf(", ");}
                WriteElem
            ;

WriteElem	:  	STRING
            |   Expression  
            ;

CallStat	:   CALL        {printf("\ncall ");}
                FuncCall
                SCOLON      {printf(";");}
            ;

FuncCall	:   ID
                OPPAR       {printf("\(");}
                Arguments
                CLPAR       {printf("\)");}
            ;
            
Arguments	:	
            |   ExprList
            ;

ReturnStat  :	RETURN      {printf("return ");}
                SCOLON      {printf(";");}
            |   RETURN      {printf("return ");}
                Expression
                SCOLON      {printf(";");}
            ;

AssignStat  :   Variable
                ASSIGN
                Expression
                SCOLON      {printf(";");}
            ;

ExprList	:  	Expression
            |   ExprList
                COMMA       {printf(", ");}
                Expression
            ;

Expression  :   AuxExpr1
            |   Expression
                OR          {printf("|| ");}
                AuxExpr1
            ;

AuxExpr1    :   AuxExpr2
            |   AuxExpr1
                AND         {printf("&& ");}
                AuxExpr2
            ;

AuxExpr2    :   AuxExpr3
            |   NOT         {printf("!");}
                AuxExpr3
            ;

AuxExpr3    :   AuxExpr4
            |   AuxExpr4
                RELOP       {
                    switch ($2) {
                        case MENORQUE:
                            printf("< ");
                            break;
                        case MENORIGUAL:
                            printf("<= ");
                            break;
                        case MAIORQUE:
                            printf("> ");
                            break;
                        case MAIORIGUAL:
                            printf(">= ");
                            break;
                        case IGUAL:
                            printf("= ");
                            break;
                        case DIFERENTE:
                            printf("!= ");
                            break; 
                    }
                            }
                AuxExpr4
            ;

AuxExpr4    :	Term
            |   AuxExpr4
                ADOP        {
                    switch ($2) {
                        case MAIS:
                            printf("+ ");
                            break;
                        case MENOS:
                            printf("- ");
                            break;
                    }
                            }
                Term
            ;

Term  	    :   Factor
            |   Term
                MULTOP      {
                    switch ($2){
                        case VEZES:
                            printf("+ ");
                            break;
                        case DIV:
                            printf("- ");
                            break;
                        case PERCENT:
                            printf("\% ");
                            break;
                    }
                            }
                Factor
            ;

Factor		:   Variable
            |   INTCT
            |   FLOATCT
            |   CHARCT  
            |   TRUE
            |   FALSE
            |   NEG         {printf("~ ");}
                Factor
            |   OPPAR       {printf("\(");}
                Expression
                CLPAR       {printf("\)");}
            |   FuncCall
            ;

Variable	:   ID
                Subscripts
            ;

Subscripts  :	
            |   OPBRAK      {printf("[");}
                SubscrList
                CLBRAK      {printf("]");}
            ;

SubscrList	:   AuxExpr4
            |   SubscrList
                COMMA       {printf(", ");}
                AuxExpr4
            ;

%%

#include "lex.yy.c"

tabular () {
	int i;
	for (i = 1; i <= tab; i++)
   	printf ("\t");
}
