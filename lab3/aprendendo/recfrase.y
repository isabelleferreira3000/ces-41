%%
prod :	'C' 'O' 'M' 'P' ' ' '2' '0'	
			{printf ("Reconheco!\n"); return;}
	  ; 
%%
yylex () {
	return getchar ();
} 


