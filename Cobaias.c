#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int rodadas = 0, testes, s = 0, num;
	int total_c = 0, total_r = 0, total_s = 0;
	float t_c, t_r, t_s;
	float per_c, per_r, per_s;
	char tipo;

	scanf("%d", &testes);

	while (rodadas < testes) {

		scanf("%d %c", &num, &tipo);
		s += num;
		if (tipo == 'C') {
			total_c += num;
		}
		if (tipo == 'R') {
			total_r += num;
		}
		if (tipo == 'S') {
			total_s += num;
		}
		rodadas += 1;
	}

	t_c = total_c;
	t_r = total_r;
	t_s = total_s;

	per_c = (t_c / s) * 100;
	per_r = (t_r / s) * 100;
	per_s = (t_s / s) * 100;

	printf("Total: %d\n", s);
	printf("Total de coelhos: %d\n", total_c);
	printf("Total de ratos: %d\n", total_r);
	printf("Total de sapos: %d\n", total_s);
	printf("Percentual de coelhos: %.2f %%\n", per_c);
	printf("Percentual de ratos: %.2f %%\n", per_r);
	printf("Percentual de sapos: %.2f %%\n", per_s);
}
