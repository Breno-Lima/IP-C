#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int x = 1, v, rodadas = 0, Mary_p = 0, John_p = 0;
	
	while (x != 0) {
		
		scanf("%d", &x);
		
		if (x == 0) {
			break;
		}
		
		while (rodadas < x) {
			scanf("%d", &v);
			if (v == 0) {
				Mary_p += 1;
			}
			if (v == 1) {
				John_p += 1;
			}
			rodadas += 1;
		}
		printf("Mary won %d times and John won %d times", Mary_p, John_p);
		printf("\n");
		rodadas = 0;
		Mary_p = 0;
		John_p = 0;
	}
}
