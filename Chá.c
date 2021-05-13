#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int tipo, A, B, C, D, E, acertos = 0;
	
	scanf("%d", &tipo);
	
	scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
	
	if (A == tipo) {
		acertos += 1;
	}
	if (B == tipo) {
		acertos += 1;
	}
	if (C == tipo) {
		acertos += 1;
	}
	if (D == tipo) {
		acertos += 1;
	}
	if (E == tipo) {
		acertos += 1;
	}
	
	printf("%d", acertos);
}
