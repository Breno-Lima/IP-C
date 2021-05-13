/*=================================
Autor:Breno Henrique
Data:21/07/2020
Programa:Equa��o do 2 grau
===================================*/

#include <stdio.h>/*Incluindo as bibliotecas principais para funcionamento do programa.*/
#include <math.h>

float Delta(float a, float b, float c){/*Fun��o para abrigar o delta do tipo flutuante.*/

return b * b - 4 * a *c;/*Retornar� a f�rmula matem�tica do delta.*/

}

int ResolveEquacao2Grau(float a, float b, float c, float *x1, float *x2){/*Fun��o do tipo inteiro para abrigar a f�rmula de baskhara, "puxando" a fun��o delta.*/
    if(a==0){
        return -1;
    }
    float delta = Delta (a,b,c);
    if(delta<0)
        return -2;

     *x1=(-b + sqrt(delta))/(2*a);
     *x2=(-b - sqrt(delta))/(2*a);

     return 0;
     /*N�o retornar� nenhum valor.*/
}

int main (void){/*Fun��o principal*/

float a,b,c,x1,x2;/*Declara��o das vari�veis que v�o abrigar valores do tipo flutuante.*/
int resultado;/*Vari�vel do tipo inteiro que pegar� o resultado.*/

    printf("Digite o coeficiente a: ");/*Leitores de vari�veis.*/
    scanf("%f",&a);
    printf("Digite o coeficiente b: ");
    scanf("%f",&b);
    printf("Digite o coeficiente c: ");
    scanf("%f",&c);

    resultado = ResolveEquacao2Grau(a,b,c,&x1,&x2);/*O resultado servir� para receber o par�metro que ir� resolver a equa��o*/

    switch(resultado){/*Switch case para mostras os poss�veis casos e suas defini��es para o resultado obtido.*/
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
