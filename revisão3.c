#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){

    int a,b;

    printf("Digite um numero:");
    scanf("%d",&a);
    printf("Digite outro numero:");
    scanf("%d",&b);

    if(a==b){
        printf("Os numeros sao iguais");
    }else{
        if(a<b){
            printf("O menor numero foi: %d",a);
        }else{
            printf("O menor numero foi: %d",b);

        }

        return 0;

    }}
