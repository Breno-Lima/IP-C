//===================================
//Autor:Breno
//Data:18/07/2020
//Programa:Fibonacci em vetor
//===================================


#include <stdio.h>
#include <stdlib.h>


long long int Fatorial(int valor){
    long long int soma = 1;
    int i;

    for(i = 1; i <= valor; i++){
       soma *= i;
    }

    return soma;
}

int main(void){

	int m, n;

	while(scanf("%d %d", &m, &n) != EOF){
        printf("%lld\n", (Fatorial(m) + Fatorial(n)));
	}

	return 0;
}
