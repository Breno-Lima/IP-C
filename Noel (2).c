#include <stdio.h>
#include <stdlib.h>

int main(void){

    int vezes,i,i2,peso1,peso2,presentes,viagens,somax;
    scanf("%d", &vezes);
    for(i=0;i!=vezes;i++){
        scanf("%d",&presentes);
        scanf("%d",&peso2);
        viagens=1;
        somax=0;
        for(i2=0;i2!=presentes;i2++){
            scanf("%d",&peso1);
            somax+=peso1;
            if(somax>peso2){
                viagens++;
                somax=peso1;
            }
    }

    if(peso2 % peso1 == 0)
        viagens--;

    if(viagens == 0){
        viagens++;

    }
    printf("%d\n",viagens);
}

}



