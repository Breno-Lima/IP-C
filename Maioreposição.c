#include <stdio.h>
#include <stdlib.h>

int main(void){

    int x[100];
    int maior;
    int i;
    int posicao;

    for(i=0;i<100;i++)
        scanf("%d",&x[i]);

        maior= x[0];
        posicao=0;

    for(i=1;i<100;i++)
    if(maior>x[i]){
        maior=x[i];
        posicao=i;

    }

    printf("%d\n",maior);
    printf("%d\n",posicao+1);
}









