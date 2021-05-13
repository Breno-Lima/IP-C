#include <stdio.h>
#include <math.h>

int main(void){

    float raio,perimetro,area,diametro;
    float pi=3.14;

    printf("digite o diametro do seu circulo:");
    scanf("%f",&diametro);

    raio=diametro/2;
    perimetro=2*pi*raio;
    area=pi*raio*raio;

    printf(" a area do circulo foi de %f\n o perimetro foi de %f \n o raio foi %f",area,perimetro,raio);

    return 0;
}
