#include <stdio.h>/*Inclui as bibliotecas principais para funcionamento do programa.*/
#include <stdlib.h>

int main(void){/*Fun��o principal*/

    int x, y, z;/*Declara��o de vari�veis para receberem os valores do tipo inteiro.*/
    float soma,produto,media;/*Tr�s vari�veis do tipo flutuante para abrigar o tipo de opera��o.*/

    printf("Digite um valor:");/*Leitores de vari�veis*/
    scanf("%d",&x);
    printf("Digite outro valor:");
    scanf("%d",&y);
    printf("Digite outro valor:");
    scanf("%d",&z);

    soma=x+y+z;/*Declara��o do tipo de opera��o que os par�metros devem fazer.*/
    produto=x*y*z;
    media=soma/3;

    printf("O resultado da soma foi %2.f, do produto foi %2.f e da media foi %2.f",soma,produto,media);
/*Mostrar o resultado final das tr�s opera��es*/
    return 0;
}
