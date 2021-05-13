#include <stdio.h>
#include <stdlib.h>

int main(void){

    int altura,base;
    float area;

    printf("Digite a altura do seu triangulo: ");
    scanf("%d",&altura);
    printf("Digite a base do triangulo: ");
    scanf("%d",&base);

    area=base*altura;

    printf("A area do triangulo foi %2.f",area);

    return 0;
}
