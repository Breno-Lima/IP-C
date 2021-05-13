#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int quan_p, peso_max, rodadas = 0, testes, peso_t, cont = 0, peso_i, viagens = 0;

	scanf("%d", &testes);

	while (rodadas < testes) {

		scanf("%d %d", &quan_p, &peso_max);

		while (cont < quan_p) {
			scanf("%d", &peso_i);
			peso_t += peso_i;
			cont += 1;
		}

		if (peso_t <= peso_max) {
			printf("1");
			printf("\n");
		}
		else {
			while (peso_t > peso_max) {
				viagens += 1;
				peso_t -= peso_max;
			}
			printf("%d", viagens);
			printf("\n");
		}
		rodadas += 1;
		cont = 0;
	}
}
