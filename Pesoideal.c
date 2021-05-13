#include <stdio.h>
#include <stdlib.h>

int main(void){

    char sexo;
    float altura,pesoideal;

    printf("Digite seu sexo [m]ulher ou [h]omem: ");
    scanf("%c",&sexo);
    printf("Digite sua altura: ");
    scanf("%f%*c",&altura);

    switch (sexo) {

    case 'h':
      printf("Calculando peso ideal...\n");
      pesoideal=(72.7*altura) - 58;
        break;
    case 'm':
        printf("Calculando peso ideal...\n");
        pesoideal=(62.1*altura) - 44.7;
        break;
    
    default:
        printf("Peso ideal nao reconhecido para o sexo \%c\ \n",sexo);
    }

    printf("O peso ideal para o sexo %c, foi de: %.2f ",sexo,pesoideal);

    return 0;
}