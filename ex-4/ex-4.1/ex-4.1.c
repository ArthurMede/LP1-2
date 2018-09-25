#include <stdio.h>
#include <stdlib.h>

int eh_primo(n, primo){
    
    int i;
    
    for (i = 2; i <= n; ++i){
            if ((n%i == 0)&&(n != i)){
                primo = 0;
                break;
            } else if((n%i == 0)&&(n == i)){
                primo = 1;
            } else{
                primo = 0;
            }
        }
    return primo;
}



int main (){
    int n, primo;
    printf ("Digite um numero e descubra se ele eh primo: ");
    scanf ("%d", &n);
    primo = eh_primo(n, primo);
    
    if (primo == 1){
        printf ("O numero %d eh primo!\n", n);
    } else {
        printf ("O numero %d nao eh primo!\n", n);
    }
    return 0;
}
