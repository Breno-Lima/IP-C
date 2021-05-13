
#include<stdio.h>
#include<stdlib.h>
int main(void){

    int x,y,z,soma,media,produto;

    printf("Digite a primeira nota:");
    scanf("%d",&x);
    printf("Digite a segunda nota:");
    scanf("%d",&y);
    printf("Digite a terceira nota:");
    scanf("%d",&z);

    soma=x+y+z;
    media=soma/3;
    produto=x*z*y;

    printf("o resultado da soma foi %d, do produto foi %d e da media foi %d",soma,produto,media);



    return 0;
}
