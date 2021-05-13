#include <stdio.h>
#include <stdlib.h>

int main(void){

int a,b,c;

    printf("Digite um numero: ");
    scanf("%d",&a);
    printf("Digite outro numero: ");
    scanf("%d",&b);
    printf("Digite outro numero: ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("O maior foi %d",a);
    }else{
    if(b>a && b>c){
        printf("O maior foi %d",b);
    }else
        printf("O maior foi %d",c);
    }

    return 0;
}
