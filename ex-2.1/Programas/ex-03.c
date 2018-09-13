#include <stdio.h>
#include <stdlib.h>

int main (void){

	float dol;
	float real;
	
	printf ("Digite o preco do celular (em dolares): ");
	scanf ("%f", &dol);
	
	real = dol * 3.17;
	
	if (real > 1000){
		printf ("MUITO CARO \n");
	} else {
		printf ("BOM NEGOCIO \n");
	}

	return 0;
}
