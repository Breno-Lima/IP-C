//========================================
//Aluno:Breno
//Programa: Batalha de pomekons
//Data:17/07/2020
//========================================
#include <stdio.h>
#include <math.h>


int main (void){

int instancia,bonus,calculo1,calculo2,golpe,Ai,Di,Li,Ai2,Di2,Li2;
int i;

scanf("%d",&instancia);

for(i=0;i<instancia;i++){

    scanf("%d",&bonus);
    scanf("%d%d%d",&Ai,&Di,&Li);
    calculo1=((Ai + Di)/2)+(bonus);

    scanf("%d%d%d",&Ai2,&Di2,&Li2);
    calculo2=((Ai2 + Di2)/2)+(bonus);


    if(calculo1>calculo2){
        printf("Dabriel\n");
    }else if (calculo2==calculo1){
        printf("Empate\n");
    }else{
        printf("Guarte\n");
    }

}

    return 0;
}
