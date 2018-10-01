#include <stdio.h>
#include <stdlib.h>

int main (void){

	float soma = 0;
	float n;

	while (1){
		printf ("Digite um numero: ");
		scanf ("%f", &n);

		if (n == 0){
			break;
		} else {
			soma += n;
		}		
	}
	
	printf ("A Soma e: %.2f \n", soma);	
	return 0;
}
