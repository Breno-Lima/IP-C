#include <stdio.h>
#include <math.h>
float Delta(float a, float b, float c){

   float delta=(b*b-4*a*c);

}
int ResolveEquacao2Grau(int a, float b, float c, float *x1, float *x2){

    if(a==0)
        return 1;
    if(Delta<0)
        return 2;
    else
        return 0;


    *x1=((-b+sqrt(delta))/(2*a));
    *x2=((-b-sqrt(delta))/(2*a));



}

int main(void){

   float a,b,c,delta,x1,x2;

    puts("==============Bem-Vindo==============");

    printf("Digite o coeficiente [a]: ");
    scanf("%d",&a);
    printf("Digite o coeficiente [b]: ");
    scanf("%d",&b);
    printf("Digite o coeficiente [c]: ");
    scanf("%d",&c);

    ResolveEquacao2Grau(&x1,&x2,a,b,c);

    printf("X1:%d\nX2:%d",x1,x2);







}
