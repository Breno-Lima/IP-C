#include <stdio.h>
#include <math.h>

int main(void){

    int npalpites;
    int palpites;

     npalpites=0;

    printf("Digite seu palpite: ");
    scanf("%d",&palpites);

    npalpites+=1;

    while(palpites!=5){
        printf("Digite seu novo palpite #%d:",npalpites+1);
        scanf("%d",&palpites);
        npalpites+=1;
        if(palpites==5){
            printf("Voce ganhou");
    }else{
            printf("Voce perdeu");
    }

    }
    printf("Foram dados %d palpites",npalpites);


    return 0;
}
