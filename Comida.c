#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int testes, rodadas = 0, dias = 0;
	float comida;
	
	scanf("%d", &testes);
	
	while (rodadas < testes) {
		
		scanf("%f", &comida);
		
		while (comida > 1) {
			comida /= 2;
			dias += 1;
		}
	
		printf("%d dias", dias);
		printf("\n");
		
		rodadas += 1;
		dias = 0;
	}
	
}
