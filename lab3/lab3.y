%{
#include	<stdio.h>
#include	<stdlib.h>
#define 	YYSTYPE float
%}

%token	DOLAR
%token	CTE
%token	MAIS
%token	VEZES
%token	ABPAR
%token	FPAR

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

