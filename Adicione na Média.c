/*/==================================
Autor:Breno
Data:21/07/2020
Programa:AdiconeNaMedia
=====================================/*/
#include <stdio.h>
#include <stdlib.h>

double AdicioneNaMedia(double valor){
    static double soma=0;
    static int quantidade=0;

    soma = soma+valor;
    quantidade++;

    return soma/quantidade;

}

int main (void){

    int t;
    double x, media;

    printf("Digite o numero de termos: ");
    scanf("%d",&t);

    while(t--){

        printf("Digite a nota:");
        scanf("%lf",&x);
        media = AdicioneNaMedia(x);
        printf("No momento sua media eh de: %.2lf\n",media);



    }


}
