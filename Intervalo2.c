#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int vezes, valor, rodadas = 0, dentro = 0, fora = 0;
	
	scanf("%d", &vezes);
	
	while (rodadas < vezes) {
		scanf("%d", &valor);
		
		if (10 <= valor && valor <= 20) {
			dentro += 1;
		}
		else {
			fora += 1;
		}
		rodadas += 1;
	}
	
	printf("%d in", dentro);
	printf("\n%d out", fora);
}
