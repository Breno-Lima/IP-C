/**
 ============================================================================
 Nome      : Números
 Autor     : Breno
 Versao    : 1.0 for
 Copyright : CC BY 4.0
 Descricao : Um programa que imprime a partir do número 20 sempre retirando "-2",até
             chegar no algarismo "2".
 ============================================================================
**/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){

    int i; //Aqui declarei a variável que iria usar como contador, e atribuí como inteiro, pois
          //era o apropriado para questão.

	while (true) {// O laço "while" foi utilizado para que enquanto a expressão fosse verdade, imprimisse ela.
	    for(i=20;i>=1;i--){//Usei um laço de repetição "for", pois permite agrupar todas as informações juntas e realizar
	                      //a condição de impressão. Usei o "i--" para retirar -1 do número.
	        printf("%d\n", i);//"usei o printf" para imprimir os números da condição do "for".
	        i=i-1;//O contador foi usado para retira mais um -1 número dos anteriores a cada vez que fosse escrito.
		}
		if (i < 3) {//A condição "if" foi usada para que se o "i" fosse menor do que 3,juntamente com o "break"
			break; //a condição do "while" fosse impressa só uma única vez.
    }         //Contudo, retirando o "while" e o "if" o programa iria responder corretamente também.

    return 0;
    }
}
