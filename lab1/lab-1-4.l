%{
#define	ACEITA	1
#define OUTRA 	2
union {
	char aux[50];
} yylval;
int verificaRegra (char entrada);
%}
delim	[ \t\n\r]
ws	{delim}+
%%
{ws}		{ ;}
"0"		{return verificaRegra('0');}
"1"		{return verificaRegra('1');}
%%
int verificaRegra (char entrada){
	int maxWord = 0; // maximo indice preenchido no vetor
	int countOnes; // minimo de 1s que tem em janelas de 5 digitos
	char digito; // digito sendo lido
	int failed = 0; // "bool" para dizer se falhou

	yylval.aux[0] = entrada;
	if(entrada == '1'){
		countOnes = 1;
	} else {
		countOnes = 0;
	}
	
	while(1){
		digito = input();
		
		// ler palavra ate o espaco
		if(digito == ' ' || digito == '\t' ||
			digito == '\n' || digito == '\r'){
			break;
		}
		maxWord++;
		yylval.aux[maxWord] = digito;

		if(!failed){
			if(digito == '1'){
					countOnes++;
			}

			if(maxWord >= 5) {
				if(countOnes < 3) {
					failed = 1;
				}
				
				// if(word[maxWord-4] == '1'){
				if(yylval.aux[maxWord-4] == '1'){
					countOnes--;
				}
			}
		}
	}

	yylval.aux[maxWord+1] = '\0';

	if(!failed){
		return ACEITA;
	}
	return OUTRA;
}
main () {
	int i;
	while (i = yylex ())
		switch (i) {
			case ACEITA:
				printf ("%-20s: Aceita\n", yylval.aux); 
				break;
			case OUTRA:
				printf ("%-20s: Rejeitada\n", yylval.aux); 
				break;
		}
}
