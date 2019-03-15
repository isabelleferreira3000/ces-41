%{
#define	ACEITA	1
#define OUTRA 	2

int verificaRegra (int entrada);
%}
delim	[ \t\n\r]
ws	{delim}+
%%
{ws}		{ ;}
"0"		{verificaRegra(0);}
"1"		{verificaRegra(1);}
%%
int verificaRegra (int entrada){
	int word[50]; // vetor com a palavra
	int maxWord = 0; // maximo indice preenchido no vetor
	int countOnes; // minimo de 1s que tem em janelas de 5 digitos
	char digito; // digito sendo lido
	int failed = 0; // "bool" para dizer se falhou

	word[0] = entrada;
	if(entrada == 1){
		countOnes = 1;
	} else {
		countOnes = 0;
	}
	printf("lendo o %d-esimo digito: %d\n", 1, entrada);
	
	while(1){
		digito = input();
		printf("lendo o %d-esimo digito: %d\n", maxWord+2, digito-48);
		
		// ler palavra ate o espaco
		if(digito == ' ' || digito == '\t' ||
			digito == '\n' || digito == '\r'){
			break;
		}

		if(!failed){
			maxWord++;
			printf("maxWord: %d\n", maxWord);
			printf("countOnes: %d\n", countOnes);

			if(maxWord < 5) {
				if(digito == '1'){
					word[maxWord] = 1;
					printf("aumentou 1\n");
					countOnes++;
				} else {
					word[maxWord] = 0;
				}
		
			} else {

				if(countOnes < 3) {
					failed = 1;
				}

				if(digito == '1'){
					word[maxWord] = 1;
					printf("aumentou 1\n");
					countOnes++;
				} else {
					word[maxWord] = 0;
				}

				if(word[maxWord-4] == 1){
					printf("diminuiu 1\n");
					countOnes--;
				}
			}
		}
	}
	printf("Uns: %d\n", countOnes);
	printf("failed: %d\n", failed);
	if(failed){
		return OUTRA;
	}
	return ACEITA;
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
