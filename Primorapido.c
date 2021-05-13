//========================
//Autor:Breno
//Data:18/07/2020
//Programa:Primo Rápido
//========================
#include <stdio.h>
#include <math.h>

int Primo(int x){
    int primo = 1, j;

    for(j = 2; j <= sqrt(x); j++){
        if(x % j == 0){
            primo = 0;
            break;
        }

    }
    return primo;
}


int main(void){
    int t,i,primo,n;

    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        scanf("%d", &n);

        primo = Primo(n);

        if(primo == 1)
            printf("Prime\n");
        else if(primo == 0)
            printf("Not Prime\n");

    }

    return 0;
}