#include <stdio.h>/*Inclui as bibliotecas principais para funcionamento do programa.*/
#include <stdlib.h>

int main(void){/*Função principal*/

    int x, y, z;/*Declaração de variáveis para receberem os valores do tipo inteiro.*/
    float soma,produto,media;/*Três variáveis do tipo flutuante para abrigar o tipo de operação.*/

    printf("Digite um valor:");/*Leitores de variáveis*/
    scanf("%d",&x);
    printf("Digite outro valor:");
    scanf("%d",&y);
    printf("Digite outro valor:");
    scanf("%d",&z);

    soma=x+y+z;/*Declaração do tipo de operação que os parâmetros devem fazer.*/
    produto=x*y*z;
    media=soma/3;

    printf("O resultado da soma foi %2.f, do produto foi %2.f e da media foi %2.f",soma,produto,media);
/*Mostrar o resultado final das três operações*/
    return 0;
}
