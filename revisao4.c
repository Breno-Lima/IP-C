#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a,b,c;

    printf("Digite um numero:");
    scanf("%d",&a);
    printf("Digite um numero:");
    scanf("%d",&b);
    printf("Digite um numero:");
    scanf("%d",&c);

    if(a>b && a>b)
        printf("O maior numero foi:%d",a);
    if(b>a && b>c)
        printf("O maior numero foi:%d",b);
    if(c>a && c>b)
        printf("O maior numero foi:%d",c);

        return 0;
    }
