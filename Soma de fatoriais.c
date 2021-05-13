//==============================
//Autor:Breno
//Data:18/07/2020
//Programa:Soma de Fatoriais
//==============================



#include <stdio.h>
#include <stdlib.h>


long long int Fatorial(int valor){
    long long int soma = 1;
    int t;

    for(t = 1; t <= valor; t++){
       soma *= t;
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