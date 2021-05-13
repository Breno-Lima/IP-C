//============================================================
//Autor:Breno
//Programa: Funções
//Data:17/07/2020
//============================================================

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    int a, b,testes,i;

    scanf("%d",&testes);

    for(i=0;i<testes;i++){

    scanf("%d%d",&a,&b);
    

    if((3*a)*(3*a) + b*b > (2*(a*a)) + (5*b*5*b) && (3*a)*(3*a) + b*b > (-100*a + b*b*b) ){
        printf("Rafael ganhou\n");
    }else{

        if((2*(a*a)) + (5*b*5*b) > (3*a)*(3*a) + b*b && (2*(a*a)) + (5*b*5*b) > (-100*a + b*b*b)){
            printf("Beto ganhou\n");
        }else{
            printf("Carlos ganhou\n");
            }
        }
    }
    return 0;

}
