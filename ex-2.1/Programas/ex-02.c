#include <stdio.h>
#include <stdlib.h>

int main (void){

	int a, b;
	printf ("Digite dois numeros: ");
	scanf ("%d %d", &a, &b);
	if (a > b){
		printf ("O numero %d e maior que %d. \n", a, b);
	} else if (b > a){
		printf ("O numero %d e maior que %d. \n", b, a);
	}

	return 0;
}
