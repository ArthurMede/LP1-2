#include <stdio.h>
#include <stdlib.h>

int main (void){

	int a, v1, v2;
	
	printf ("Digite dois numeros: ");
	scanf ("%d %d", &v1, &v2);
	
	printf ("Esses sao os numeros compreendidos entre %d e %d: \n", v1, v2);

	if (v1 > v2){
		a = v2 + 1;
		while (a < v1){
			printf ("%d \n", a);
			a += 1;		
		}
	} 
	if (v2 > v1){
		a = v1 + 1;
		while (a < v2){
			printf ("%d \n", a);
			a += 1;
		}
	}

	return 0;
}
