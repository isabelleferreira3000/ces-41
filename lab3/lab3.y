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
%}

union {
	char string[50];
	int atr, valor;
	float valreal;
	char carac;
}

%type Prog
%type GlobDecls
%type DeclList
%type Declaration
%type Type
%type ElemList
%type Elem
%type Dims
%type DimList
%type Functions
%type FuncList
%type Function
%type Header
%type Params
%type ParamList
%type Parameter
%type LocDecls
%type Stats
%type StatList
%type Statement
%type CompStat
%type IfStat
%type ElseStat
%type WhileStat
%type DoStat
%type ForStat
%type ReadStat
%type ReadList
%type WriteStat
%type WriteList
%type WriteElem
%type CallStat
%type FuncCall
%type Arguments
%type ReturnStat
%type AssignStat
%type ExprList
%type Expression
%type AuxExpr1
%type AuxExpr2
%type AuxExpr3
%type AuxExpr4
%type Term
%type Factor
%type Variable
%type Subscripts
%type SubscrList

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

Prog        :	PROGRAM ID OPBRACE GlobDecls Functions CLBRACE
            ;

GlobDecls 	:
            |   GLOBAL COLON DeclList  
            ;

DeclList	:	Declaration  
            |   DeclList Declaration
            ;

Declaration :	Type ElemList SCOLON  
            ;

Type		: 	INT 
            |   FLOAT
            |   CHAR
            |   LOGIC
            |   VOID 
            ;

ElemList    :	Elem
            |   ElemList COMMA Elem
            ;

Elem        :	ID Dims
            ;

Dims		:	
            |   OPBRAK DimList CLBRAK
            ;

DimList	    :   INTCT
            |   DimList COMMA INTCT
            ;

Functions	:   FUNCTIONS COLON FuncList
            ;

FuncList	:   Function
            |   FuncList Function
            ;

Function	:	Header OPBRACE LocDecls Stats CLBRACE
            ;

Header		:   MAIN
            |   Type ID OPPAR Params CLPAR
            ;

Params		:
            |   ParamList
            ;

ParamList   :   Parameter
            |   ParamList COMMA Parameter
            ;

Parameter   :   Type ID  
            ;

LocDecls	:   
            |   LOCAL COLON DeclList
            ;

Stats       :   STATEMENTS COLON StatList
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
            |   SCOLON
            ;

CompStat	:   OPBRACE StatList CLBRACE
            ;

IfStat		:   IF OPPAR Expression CLPAR Statement ElseStat
            ;

ElseStat	:
            |   ELSE Statement
            ;

WhileStat   :   WHILE OPPAR Expression CLPAR Statement
            ;

DoStat  	:   DO Statement WHILE OPPAR Expression CLPAR SCOLON  
            ;

ForStat	    :  	FOR OPPAR Variable ASSIGN Expression 
                SCOLON Expression SCOLON Variable ASSIGN
                Expression CLPAR Statement
            ;

ReadStat   	:   READ OPPAR ReadList CLPAR SCOLON  
            ;

ReadList	:   Variable
            |   ReadList COMMA Variable
            ;

WriteStat  	:	WRITE OPPAR WriteList CLPAR SCOLON  
            ;

WriteList	:	WriteElem
            |   WriteList COMMA WriteElem
            ;

WriteElem	:  	STRING
            |   Expression  
            ;

CallStat	:   CALL FuncCall SCOLON
            ;

FuncCall	:   ID OPPAR Arguments CLPAR  
            ;
            
Arguments	:	
            |   ExprList
            ;

ReturnStat  :	RETURN SCOLON
            |   RETURN Expression SCOLON
            ;

AssignStat  :   Variable ASSIGN Expression SCOLON
            ;

ExprList	:  	Expression
            |   ExprList COMMA Expression
            ;

Expression  :   AuxExpr1
            |   Expression OR AuxExpr1
            ;

AuxExpr1    :   AuxExpr2
            |   AuxExpr1 AND AuxExpr2
            ;

AuxExpr2    :   AuxExpr3
            |   NOT AuxExpr3
            ;

AuxExpr3    :   AuxExpr4
            |   AuxExpr4 RELOP AuxExpr4
            ;

AuxExpr4    :	Term
            |   AuxExpr4 ADOP Term
            ;

Term  	    :   Factor
            |   Term MULTOP Factor
            ;

Factor		:   Variable
            |   INTCT
            |   FLOATCT
            |   CHARCT  
            |   TRUE
            |   FALSE
            |   NEG Factor
            |   OPPAR Expression CLPAR
            |   FuncCall
            ;

Variable	:   ID Subscripts
            ;

Subscripts  :	
            |   OPBRAK SubscrList CLBRAK  
            ;

SubscrList	:   AuxExpr4
            |   SubscrList COMMA AuxExpr4
            ;

%%

#include "lex.yy.c"
