#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float mi;
	float km;

	printf ("Digite a velocidade do carro (em milhas/hora): ");
	scanf ("%f", &mi);

	km = mi * 1.6;

	if (km < 80){
		printf ("ACELERE \n");
	} else if (km > 100){
		printf ("DESACELERE \n");
	} else {
		printf ("MANTENHA \n");
	}

	return 0;
}
