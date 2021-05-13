#include <stdio.h>
#include <stdlib.h>

int main(void){

    int diametro;
    float raio,perimetro,area;

    printf("Digite o valor do diametro: ");
    scanf("%d",&diametro);

    raio=(diametro*diametro);
    perimetro=(2*(3.14*raio));
    area=(3.14*(raio*raio));

    printf("O raio eh %2.f, o perimetro eh %2.f e a area eh %2.f",raio,perimetro,area);


    return 0;
}

