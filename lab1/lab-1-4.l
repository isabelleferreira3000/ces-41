%{
#define	ACEITA	1
#define OUTRA 	2

void verificaRegra (int entrada);
%}
delim	[ \t\n\r]
ws	{delim}+
%%
{ws}		{ ;}
"0"		{verificaRegra(0);}
"1"		{verificaRegra(1);}
%%
void verificaRegra (int entrada){
	int window[5];
	window[0] = entrada;
	int first = entrada;

	int lengthWindow = 0;
	int countOnes = 0;
	
	int wordEnds = 0;
	char digito = input();

	if(digito == ' ' ||
			digito == '\t' ||
			digito == '\n' ||
			digito == '\r'){
		wordEnds = 1;
	} else if(digito == '1') {
		countInts++;
		window[1] = 1;
		countOnes++;
	} else {
		window[1] = 0;
		countInts++;
	}

	while(!wordEnds){
		digito = input();

		if(digito == ' ' ||
			digito == '\t' ||
			digito == '\n' ||
			digito == '\r'){
		wordEnds = 1;
		} else if(countInts < 5) {
			if(digito == '1'){
				window[c]
			}
		} else {

		}
	}
}
main () {
	int i;
	while (i = yylex ())
		switch (i) {
			case ACEITA:
				printf ("%-20s: Aceita\n", yytext); 
				break;
			case OUTRA:
				printf ("%-20s: Rejeitada\n", yytext); 
				break;
		}
}
