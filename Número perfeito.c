#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int i, s = 0, n, testes = 0, x;
	
	scanf("%d", &x);
	
	while (testes < x) {
		
		scanf("%d", &n);
		
		for(i = 1; i < n; i++) {
			if (n % i == 0) {
				s += i;
			}
		}

		if (s == n) {
			printf("%d eh perfeito", n);
			printf("\n");
		}
		else {
			printf("%d nao eh perfeito", n);
			printf("\n");
		}
		
		s = 0;
		testes += 1;
	}
}
