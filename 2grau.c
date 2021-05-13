/*=================================
Autor:Breno Henrique
Data:21/07/2020
Programa:Equação do 2 grau
===================================*/

#include <stdio.h>/*Incluindo as bibliotecas principais para funcionamento do programa.*/
#include <math.h>

float Delta(float a, float b, float c){

return b * b - 4 * a *c;

}

int ResolveEquacao2Grau(float a, float b, float c, float *x1, float *x2){
    if(a==0){
        return -1;
    }
    float delta = Delta (a,b,c);
    if(delta<0)
        return -2;

     *x1=(-b + sqrt(delta))/(2*a);
     *x2=(-b - sqrt(delta))/(2*a);

     return 0;
}

int main (void){

float a,b,c,x1,x2;
int resultado;

    printf("Digite o coeficiente a: ");
    scanf("%f",&a);
    printf("Digite o coeficiente b: ");
    scanf("%f",&b);
    printf("Digite o coeficiente c: ");
    scanf("%f",&c);

    resultado = ResolveEquacao2Grau(a,b,c,&x1,&x2);

    switch(resultado){
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
