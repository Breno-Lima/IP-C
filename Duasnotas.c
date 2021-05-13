//==============================================
//Autor:Breno
//Data:18/07
//==============================================
#include <stdio.h>
#include <math.h>
int Notas(dinheiro){
    int prova = 0;
    int n100, n50, n20, n10, n5, n2, n1, r100, r50, r20, r10, r5, r2;

    n100 = dinheiro / 100;
    r100 = (dinheiro % 100);

    n50 = r100 / 50;
    r50 = r100 % 50;

    n20 = r50 / 20;
    r20 = r50 % 20;

    n10 = r20 / 10;
    r10 = r20 % 10;

    n5 = r10 / 5;
    r5 = r10 % 5;

    n2 = r5 / 2;
    r2 = r5 % 2;

    n1 = r2;

    if (n100 != 0){
        prova++;
    }
    if (n50 != 0){
        prova++;
    }
    if (n20 != 0){
        prova++;
    }
    if (n10 != 0){
        prova++;
    }
    if (n5 != 0){
        prova++;
    }
    if (n2 != 0){
        prova++;
    }
    if (n1 != 0){
        prova++;
    }

    return prova;
}

int main(){
    
    int p, v, teste,troco;

    while(1){

    scanf("%d %d", &v, &p);

    if(v == 0 && p == 0){
        break;
        }
        troco = p - v;
        teste = Notas(troco);

    if(teste==2){
        printf("possible\n");
       }else{
        printf("impossible\n");
       }
    }

    return 0;
}
