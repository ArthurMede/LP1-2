#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){

	char n[10];
	char M[10];				
	char m[10];
	int pontuacao;
	int v;
	int e;
	int d;
	int maior = 0;
	int menor = 1000;
	int i;

	for (i = 0; i < 3; i +=1){
		/* Na condicao do for, basta trocar "i < 3" para "i < 20 que funciona para 20 times." */

		printf ("Digite o nome do time e quantas vitorias, empates e derrotas ele tem, respectivamente: ");
		scanf ("%s %d %d %d", n, &v, &e, &d);
		
		pontuacao = ((3*v) + e);
		
		if (pontuacao > maior){
			maior = pontuacao;   
			strcpy (M, n);
		}
		if (pontuacao < menor){
			menor = pontuacao;
			strcpy (m, n);		
		}
	}
	printf ("O time %s tem mais pontos. \n", M);
	printf ("O time %s tem menos pontos. \n", m);
			
	return 0;
}
