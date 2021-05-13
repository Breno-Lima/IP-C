/*=================================
Autor:Breno Henrique
Data:21/07/2020
Programa:Equação do 2 grau
===================================*/

#include <stdio.h>/*Incluindo as bibliotecas principais para funcionamento do programa.*/
#include <math.h>

float Delta(float a, float b, float c){/*Função para abrigar o delta do tipo flutuante.*/

return b * b - 4 * a *c;/*Retornará a fórmula matemática do delta.*/

}

int ResolveEquacao2Grau(float a, float b, float c, float *x1, float *x2){/*Função do tipo inteiro para abrigar a fórmula de baskhara, "puxando" a função delta.*/
    if(a==0){
        return -1;
    }
    float delta = Delta (a,b,c);
    if(delta<0)
        return -2;

     *x1=(-b + sqrt(delta))/(2*a);
     *x2=(-b - sqrt(delta))/(2*a);

     return 0;
     /*Não retornará nenhum valor.*/
}

int main (void){/*Função principal*/

float a,b,c,x1,x2;/*Declaração das variáveis que vão abrigar valores do tipo flutuante.*/
int resultado;/*Variável do tipo inteiro que pegará o resultado.*/

    printf("Digite o coeficiente a: ");/*Leitores de variáveis.*/
    scanf("%f",&a);
    printf("Digite o coeficiente b: ");
    scanf("%f",&b);
    printf("Digite o coeficiente c: ");
    scanf("%f",&c);

    resultado = ResolveEquacao2Grau(a,b,c,&x1,&x2);/*O resultado servirá para receber o parâmetro que irá resolver a equação*/

    switch(resultado){/*Switch case para mostras os possíveis casos e suas definições para o resultado obtido.*/
        case -2:
            printf("Nao possui raizes reais.");
            return -2;
            break;
        case -1:
            printf("Nao forma equacao do 2 grau.");
            return -1;
            break;
        case 0:
            printf("x1 = %.2f\nx2 = %.2f\n",x1,x2);
            return 0;
            break;
        default:
            printf("erro");

    }

}
