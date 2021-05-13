//========================================
//Aluno:Breno
//Programa: Batalha de pomekons
//Data:18/07/2020
//========================================
#include <stdio.h>
#include <math.h>

int Golpe(int A,int D,int L,int B){
int golpe;

golpe=(A + D)/2;
if(L%2==0){
    golpe += B;
    }
    return golpe;
}


int main (){

int teste, i, B, A, D, L, Dabriel, Guarte;

    scanf("%d",&teste);

    for(i=1;i<=teste;i++){

    scanf("%d %d %d %d", &B, &A, &D, &L);
    Dabriel=Golpe(A,D,L,B);
    scanf("%d %d %d ", &A, &D, &L);
    Guarte=Golpe(A,D,L,B);

    if (Dabriel > Guarte){
            printf("Dabriel\n");
        }
    if (Guarte > Dabriel){
            printf("Guarte\n");
        }
    if(Guarte==Dabriel){
            printf("Empate\n");
        }
    }
    return 0;
}