//===================================
//Autor:Breno
//Data:18/07/2020
//Programa:Fibonacci em vetor
//===================================


#include <stdio.h>
#include <stdlib.h>

long long int Fibonacci(int x){
    int j;
    long long int anterior1, anterior2, atual = 0;

    if (x == 1 || x == 2){
        return 1;
    }else{
        anterior2 = 1;
        anterior1 = 1;
        for(j = 3; j <= x; j++){
            atual = anterior1 + anterior2;
            anterior2 = anterior1;
            anterior1 = atual;
        }
        return atual;
    }
}   

int main(void){
    int t2, t, n;
    long long int fib;

    scanf("%ld", &t2);

    for(t = 1; t <= t2; t++){
        scanf("%d", &n);
        fib = Fibonacci(n);
        printf("Fib(%d) = %lli\n", n, fib);
    }
    return 0;
}