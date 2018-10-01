#include <stdio.h>
#include <stdlib.h>

int main (void){

	int a, v1, v2, maior, menor;
	
	printf ("Digite dois numeros: ");
	scanf ("%d %d", &v1, &v2);
	
	printf ("Esses sao os numeros compreendidos entre %d e %d: \n", v1, v2);

	if (v1 > v2){
		maior = v1;
		menor = v2 + 1;
	} else if (v2 > v1){
		maior = v2;
		menor = v1 + 1;
	}
	while (menor < maior){
		printf ("%d \n", menor);
		++menor;
	}

	return 0;
}
