%{
	// Palavras reservadas
#define CALL		1
#define CHAR		2
#define DO			3
#define ELSE		4
#define FALSE		5
#define FLOAT		6
#define FOR			7
#define FUNCTIONS	8
#define GLOBAL		9
#define IF			10
#define INT			11
#define LOCAL		12
#define LOGIC		13
#define MAIN		14
#define PROGRAM		15
#define READ		16
#define RETURN		17
#define STATEMENTS	18
#define TRUE		19
#define VOID		20
#define WHILE		21
#define WRITE		22

	// Sintaxes
#define ID			23	
#define INTCT		24
#define CHARCT		25
#define FLOATCT		26
#define STRING		27

	// Operadores
#define OR			28
#define AND			29
#define NOT			30
#define RELOP		31
#define ADOP		32
#define MULTOP		33
#define NEG			34

	// Separadores e outros
#define ASSIGN		35
#define OPPAR		36
#define CLPAR		37
#define OPBRAK		38
#define CLBRAK		39
#define OPBRACE		40
#define CLBRACE		41
#define SCOLON		42
#define COMMA		43
#define COLON		44

	// Atributos
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

union {
	char string[50];
	int atr, valor;
	float valreal;
	char carac;
} yylval;

%}
delim	[ \t\n\r]
ws		{delim}+
digito	[0-9]
letra	[A-Za-z]
caract1	\\.|[^\\']
caract2	\\.|[^\\\"]

id		{letra}({letra}|{digito})*
intct	{digito}+
charct	'(\)?caract1'
floatct	{digito}+.{digito}*([Ee][+-]?{digito}+)?
string	"{{\}?caract2}*"

%%
{ws}	 	{ ;}

call		{return CALL;} // Palavras reservadas
char		{return CHAR;}
do			{return DO;}
else		{return ELSE;}
false		{return FALSE;}
float		{return FLOAT;}
for			{return FOR;}
functions	{return FUNCTIONS;}
global		{return GLOBAL;}
if			{return IF;}
int			{return INT;}
local		{return LOCAL;}
logic		{return LOGIC;}
main		{return MAIN;}
program		{return PROGRAM;}
read		{return READ;}
return		{return RETURN;}
statements	{return STATEMENTS;} 
true		{return TRUE;}
void		{return VOID;}
while		{return WHILE;}
write		{return WRITE;}

{id}		{strcpy(yylval.string, yytext); return ID;} // Sintaxes
{intct}		{yylval.valor = atoi(yytext); return INTCT;}
{charct}	{strcpy (yylval.string, yytext); return CTCHAR;; return CHARCT;}
{floatct}	{yylval.valreal = atof(yytext); return FLOATCT;}
{string}	{strcpy (yylval.string, yytext); return STRING;}

"||"		{return OR;} // Operadores
"&&" 		{return AND;}
"!" 		{return NOT;}
"<"			{yylval.atr = MENORQUE; return RELOP;}
"<="		{yylval.atr = MENORIGUAL; return ADOP;}
">"			{yylval.atr = MAIORQUE; return RELOP;}
">="		{yylval.atr = MAIORIGUAL; return RELOP;}
"="			{yylval.atr = IGUAL; return RELOP;}
"!="		{yylval.atr = DIFERENTE; return RELOP;}
"+"			{yylval.atr = MAIS; return ADOP;}
"-"  		{yylval.atr = MENOS; return ADOP;}
"*"			{yylval.atr = VEZES; return MULTOP;}
"/"			{yylval.atr = DIV; return MULTOP;}
"%"  		{yylval.atr = PERCENT; return MULTOP;}
"~"			{return NEG;}

"<-"		{return ASSIGN;} // Separadores e outros
"("			{return OPPAR;}
")"			{return CLPAR;}
"["			{return OPBRAK;}
"]"			{return CLBRAK;}
"{"			{return OPBRACE;}
"}"			{return CLBRACE;}
";"			{return SCOLON;}
","			{return COMMA;}
":"			{return COLON;}

%%
main () {
	int i;
	printf ("\n   texto  |   tipo   | atributo \n");
	printf ("--------------------------------\n");
	while (i = yylex ()) {
		printf ("%10s|%10d|", yytext, i);
		switch (i) {
			// case PROGRAM:
			// case VAR:
			// case INT:
			// case ID:
			case REAL:
				printf ("%10s", yylval.string); 
				break;
			case CTINT:
				printf ("%10d", yylval.valor); 
				break;
			case CTREAL:
				printf ("%10.2f", yylval.valreal); 
				break;
			// case ABPAR:
			// case FPAR:
			// case ABCHAV:
			// case FCHAV:
			// case ATRIB:
			// case VIRG:
			// case PVIRG:
			case OPAD:
			case OPMULT:
				printf ("%10d", yylval.atr);
				break;
			default:
				break;
		}
		printf ("\n");
	}
}