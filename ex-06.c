#include <stdio.h>
#include <stdlib.h>

int main (void){

	int soma = 0;
	int n;
	int q;
	int i; 

	printf ("Digite um numero: ");
	scanf ("%d", &n);

	for (i = 1; i <= n; i += 1){
		q = i*i;
		soma += q;
	}
	
	printf ("A soma dos quadrado dos %d primeiros numeros e: %d. \n", n, soma);
	return 0;
}
