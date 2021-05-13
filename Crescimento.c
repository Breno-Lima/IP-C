#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	
	int PA, PB, testes, rodadas = 0, k, i;
	float G1, G2, t;
	scanf("%d", &testes);
	
	while (rodadas < testes) {
		
		scanf("%d %d %f %f", &PA, &PB, &G1, &G2);
		
		for(i = 0; i <= 100; i++) {
			PA += PA * (G1 / 100);
			PB += PB * (G2 / 100);
			if (PA > PB) {
				i = 100;
			}
			t += 1;
		}
		
		if (t <= 100) {
		printf("%.0f anos.", t);
		printf("\n");
		}
		else {
			printf("Mais de 1 seculo.");
			printf("\n");
		}
		t = 0;
		rodadas += 1;
	}
	
}
