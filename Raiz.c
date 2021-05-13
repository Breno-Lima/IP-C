#include <stdio.h>
#include <math.h>

int main (void){

float a,b,c,delta,x1,x2;

    printf("Digite o coeficiente a: ");
    scanf("%f",&a);
    printf("Digite o coeficiente b: ");
    scanf("%f",&b);
    printf("Digite o coeficiente c: ");
    scanf("%f",&c);

    if(a!=0){
        delta = (b*b) - 4 * a * c;
            if (delta==0){
                x1=(-b + sqrt(delta))/(2*a);
                printf("Delta igual a 0\n");
                printf("Delta: %.2f\n",delta);
                printf("x1 e x2 = %.2f\n",x1);
                return 1;
            }else{
                if(delta>0){
                    x1=(-b + sqrt(delta))/(2*a);
                    x2=(-b - sqrt(delta))/(2*a);
                    printf("Delta maior que 0\n");
                    printf("Delta: %1.f\n",delta);
                    printf("x1 = %.2f\n",x1);
                    printf("x2 = %.2f\n",x2);
                    return 0;
             }else{
                    printf("Delta menor que 0\n");
                    printf("As raizes nao podem ser calculadas\n");
                    return 2;
                  }
            }
             }else{
                 printf("Nao eh uma equacao do 2 grau");


             }


    }