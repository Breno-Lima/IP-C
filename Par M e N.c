#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {

	 int i, s = 0, m, n, maior = 0, menor = 0;

	while (true) {
		scanf("%d %d", &m, &n);

		if (m > n) {
			maior = m;
			menor = n;
		}
		else {
			maior = n;
			menor = m;
		}

		if (m <= 0 || n <= 0) {
			break;
		}

		for(i = menor; i <= maior; i++) {
			printf("%d ", i);
			s += i;
		}

		printf("Sum=%d", s);
		printf("\n");

		s = 0;
		m = 1;
		n = 1;
		maior = 0;
		menor = 0;
	}
}
