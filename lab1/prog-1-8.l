%{
#include 	<string.h>
#define 	ELSE 		1
#define 	IF 		2
#define	WHILE   	3
#define	ID		4
#define	CTINT		5
#define	OPREL		6
#define 	LT 		1
#define 	LE 		2
#define	GT		3
#define	GE		4
#define	EQ		5
#define	NE		6
#define INVAL 7
union {
	char string[50];
	int atr, valor;
	char carac;
} yylval;
%}
delim		[ \t\n\r]
ws			{delim}+
digito	[0-9]
letra		[A-Za-z]
ctint		{digito}+
id			{letra}({letra}|{digito})*
%%
{ws}		{ ;}
else		{return ELSE;}
if			{return IF;}
while		{return WHILE;}
{id}		{strcpy (yylval.string, yytext); return ID;}
{ctint}	{yylval.valor = atoi(yytext); return CTINT;}
"<"		{yylval.atr = LT; return OPREL;}
"<="		{yylval.atr = LE; return OPREL;}
">"		{yylval.atr = GT; return OPREL;}
">="		{yylval.atr = GE; return OPREL;}
"=="		{yylval.atr = EQ; return OPREL;}
"!="		{yylval.atr = NE; return OPREL;}
.		{yylval.carac = yytext[0]; return INVAL;}
%%
main () {
	int i;
	printf ("\n   texto  |   tipo   | atributo \n");
	printf ("--------------------------------\n");
	while (i = yylex ()) {
		printf ("%10s|%10d|", yytext, i);
		switch (i) {
			case ID:
				printf ("%10s", yylval.string); break;
			case CTINT:
				printf ("%10d", yylval.valor); break;
			case OPREL:
				printf ("%10d", yylval.atr); break;
			case INVAL: printf ("%10c", yylval.carac); break; 
		}
		printf ("\n");
	}
}
