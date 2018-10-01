#include <stdio.h>

void troca (int* p1, int* p2, int x){
	*p1 = *p2;
	*p2 = x;
}

int main (){

	int x, y;

	printf ("Digite x:\n>>> ");
	scanf ("%d", &x);
	printf ("Digite y:\n>>> ");
	scanf ("%d", &y);	

	troca (&x, &y, x);
	printf ("Apos  troca:\nx = %d\ny = %d\n", x, y);	

	return 0;
}
