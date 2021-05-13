//===============================================
//Aluno:Breno
//Data:18/07/2020
//Programa:Primo Rápido
//===============================================

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n, x=1, i, s=0, testes = 0;

	scanf("%d", &x);

	while (testes < x) {

		scanf("%d", &n);

		for(i = 1; i <=n; i++) {

			if (n % i == 0) {
				s += 1;
			}
		}

		if (s == 2) {
			printf("Prime", n);
			printf("\n");
		}
		else {
			printf("Not Prime", n);
			printf("\n");
		}

		s = 0;
		testes += 1;
	}
}

