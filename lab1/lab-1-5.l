%{
#define PROGRAM 1 
#define VAR		2
#define	INT		3
#define REAL	4
#define	ID 		5  // identificadores
#define	CTINT 	6  // constantes inteiras
#define CTREAL	7  // constantes reais
#define OPAD	8  // operadores aditivos
#define OPMULT	9  // operadores multiplicativos
#define ABPAR	10 // abre-parentesis
#define FPAR	11 // fecha-parentesis
#define ABCHAV	12 // abre-chaves
#define FCHAV	13 // fecha-chaves
#define ATRIB	14 // sinal de atribuição
#define VIRG	15 // vírgula
#define PVIRG	16 // ponto-e-vírgula
#define PONTO	17
#define MAIS	1
#define MENOS	2
#define VEZES	3
#define DIV		4
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
id		{letra}({letra}|{digito})*
ctint	{digito}+
ctreal	{digito}+.{digito}*

%%
program	 {return PROGRAM;}
var		 {return VAR;}
int		 {return INT;}
real	 {return REAL;}
{ws}	 { ;}
"("		 {return ABPAR;}
")"		 {return FPAR;}
"{"		 {return ABCHAV;}
"}"		 {return FCHAV;}
"="		 {return ATRIB;}
","		 {return VIRG;}
";"		 {return PVIRG;}
{id}	 {strcpy (yylval.string, yytext); return ID;}
{ctint}	 {yylval.valor = atoi(yytext); return CTINT;}
{ctreal} {yylval.valreal = atof(yytext); return CTREAL;}
"+"		 {yylval.atr = MAIS; return OPAD;}
"-"		 {yylval.atr = MENOS; return OPAD;}
"*"		 {yylval.atr = VEZES; return OPMULT;}
"/"		 {yylval.atr = DIV; return OPMULT;}
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