/*=================================
Autor:Breno
Data:21/07/2020
Programa:Área do Hexágono
===================================*/

#include <stdio.h>
#include <math.h>

void CalculaHexagono( float l, float *area,float *perimetro){

   *area=(3 * pow (l,2) *sqrt(3))/2;
   *perimetro=6*l;


}

int main (void){

    float l,area,perimetro;

    printf("Digite o lado do Hexagono: ");
    scanf("%f",&l);
    CalculaHexagono(l,&area,&perimetro);
    printf("A area foi de: %.1f\nO perimetro foi de: %.1f\n",area,perimetro);


    return 0;
}

