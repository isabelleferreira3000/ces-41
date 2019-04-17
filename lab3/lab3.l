delim	[ \t\n\r]
ws		{delim}+
digito	[0-9]
letra	[A-Za-z]
caract1	\\.|[^\\']
caract2	\\.|[^\\\"]

id		{letra}({letra}|{digito})*
intct	{digito}+
charct	'{caract1}'
floatct	{digito}+\.{digito}*([Ee][+-]?{digito}+)?
string	\"{caract2}*\"

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
{floatct}	{yylval.valreal = atof(yytext); return FLOATCT;}
{charct}	{yylval.carac = yytext[1]; return CHARCT;}
{string}	{strcpy(yylval.string, yytext); return STRING;}

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

"/*"		{comentario ();}

%%

void comentario () {
	char c;
	int estado;
	
	estado = 1;
	while(estado != 3) {
		switch(estado) {
			case 1:
				c = input();
				if(c == EOF) {
					estado = 3;
				} else if(c == '*') {
					estado = 2;
				} else {
					estado = 1;
				}
				break;

			case 2:
				c = input();
				if(c == EOF || c == '/') {
					estado = 3;
				} else if(c == '*') {
					estado = 2;
				} else {
					estado = 1;
				}
				break;
		}
	}
}
