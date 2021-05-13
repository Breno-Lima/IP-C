#include <stdio.h>
#include <stdlib.h>

int main(void){

    int x, y, z;
    float soma,produto,media;

    printf("Digite um valor:");
    scanf("%d",&x);
    printf("Digite outro valor:");
    scanf("%d",&y);
    printf("Digite outro valor:");
    scanf("%d",&z);

    soma=x+y+z;
    produto=x*y*z;
    media=soma/3;

    printf("O resultado da soma foi %2.f, do produto foi %2.f e da media foi %2.f",soma,produto,media);

    return 0;
}
