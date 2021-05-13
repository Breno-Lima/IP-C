#include <stdio.h>
#include <math.h>


int main (void){

float a,b,c,delta,x1,x2;
delta=

printf("Digite o valor de [a]: ");
scanf("%f",&a);
printf("Digite o valor de [b]: ");
scanf("%f",&b);
printf("Digite o valor de [c]: ");
scanf("%f",&c);
 delta = (b*b) - 4 * a * c;
if(A==0){
    printf("Nao eh uma equaçao de 2 grau.");
    return 1;
}

if(delta<0){
    printf("Delta menor que 0\nAs raizes nao podem ser calculadas.");
    return 2;
}

    x1 = x1(a,b,c,delta);
    x2 = x2(a,b,c,delta);

    printf("\t Delta: %.1f\n",delta);
    printf("\t x1: %.1f\n",x1);
    printf("\t x2: %.1f\n",x2);

    return 0;

}