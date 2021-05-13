#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a,b;

    printf("Digite um numero: ");
    scanf("%d",&a);
    printf("Digite outro numero: ");
    scanf("%d",&b);


    if(a==b){
            printf("\nOs numero sao iguais!");
    }

    if(a<b){
        printf("O menor eh:%d",a);
    }else
        printf("O menor eh:%d",b);

            return 0;
}




