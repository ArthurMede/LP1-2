#include <stdio.h>    
#include <stdlib.h>

int main(){
        
    int temp, soma = 0, media = 0, cont=0;
    int i;
    char temps[3];
    
    for ( i=1; i <= 3; i++){
        printf ("Digite uma temperatura:\n>>> ");
        scanf ("%d", &temp);
        if ((temp<-100)||(temp>100)){
            printf("\nERRO-->Apenas temperaturas entre -100 e 100 graus.\n\n");
            i--;
        } else {        
            temps[i] = temp;
            soma += temp;
        }
    }
    media = soma/3;

    for (i=1; i <= 3; i++){
        if (temps[i] > media){
            cont++;
        }    
    }
    printf ("Ha %d temperatura(as) acima da media.\n ", cont);
    printf ("A media das temperaturas e: %d", media);
    return 0;
}
