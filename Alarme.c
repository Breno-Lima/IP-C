#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
	
	int H1, M1, H2, M2;
	int minutos, minutos_maior, minutos_menor, minutos_r;
	
	while (true) {
	
		scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
		
		if (H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0) {
			break;
		}
	
		if (H1 > H2 && M1 > M2) {
			minutos_maior = H1 * 60 + M1;
			minutos_r = 1440 - minutos_maior;
			minutos_menor = H2 * 60 + M2;
			minutos = minutos_r + minutos_menor;
		}
		if (H1 > H2 && M1 < M2) {
			minutos_maior = H1 * 60 + M1;
			minutos_r = 1440 - minutos_maior;
			minutos_menor = H2 * 60 + M2;
			minutos = minutos_r + minutos_menor;
		}
		if (H1 == H2 && M1 > M2) {
			minutos_maior = H1 * 60 + M1;
			minutos_r = 1440 - minutos_maior;
			minutos_menor = H2 * 60 + M2;
			minutos = minutos_r + minutos_menor;
		}
		if (H1 < H2 && M1 > M2) {
			minutos_maior = H2 * 60 + M2;
			minutos_menor = H1 * 60 + M1;
			minutos = minutos_maior - minutos_menor;
		}
		if (H1 < H2 && M1 < M2) {
			minutos_maior = H2 * 60 + M2;
			minutos_menor = H1 * 60 + M1;
			minutos = minutos_maior - minutos_menor;
		}
		if (H1 == H2 && M1 < M2) {
			minutos = M2 - M1;
		}
		if (H1 > H2 && M1 == M2) {
			minutos = (24 - (H1 - H2)) * 60;
		}
		if (H1 < H2 && M1 == M2) {
			minutos = (H2 - H1) * 60;
		}
		if (H1 == H2 && M1 == M2) {
			minutos = 0;
		}
		
		printf("%d", minutos);
		printf("\n");
		
	}
}
