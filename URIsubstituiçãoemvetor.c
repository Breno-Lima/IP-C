#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int main(void){

	int x[10], i;

	for(i = 0; i < 10; i++){
		scanf("%d", &x[i]);
		if (x[i] <= 0){
			x[i] = 1;
		}
		printf("%d\n", x[i]);
	}

	return 0;
}