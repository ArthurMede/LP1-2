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

int todos_os_primos (num){
    
    int j, primo;
    
    for (j = 2; j <= num; ++j){
        primo = eh_primo(j, primo);
        if (primo == 1){
            printf ("%d\n", j);
        }
    }
    return 0;
}

int main (){
    
    int num;
    int primos [50];
    
    printf ("Digite um numero: ");
    scanf ("%d", &num);
    printf ("Todos os primos no intervalo [2, %d]:\n", num);
    todos_os_primos(num);
    
    
    return 0;
}
