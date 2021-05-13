/**
 ============================================================================
 Nome      : N�meros
 Autor     : Breno
 Versao    : 1.0 for
 Copyright : CC BY 4.0
 Descricao : Um programa que imprime a partir do n�mero 20 sempre retirando "-2",at�
             chegar no algarismo "2".
 ============================================================================
**/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){

    int i; //Aqui declarei a vari�vel que iria usar como contador, e atribu� como inteiro, pois
          //era o apropriado para quest�o.

	while (true) {// O la�o "while" foi utilizado para que enquanto a express�o fosse verdade, imprimisse ela.
	    for(i=20;i>=1;i--){//Usei um la�o de repeti��o "for", pois permite agrupar todas as informa��es juntas e realizar
	                      //a condi��o de impress�o. Usei o "i--" para retirar -1 do n�mero.
	        printf("%d\n", i);//"usei o printf" para imprimir os n�meros da condi��o do "for".
	        i=i-1;//O contador foi usado para retira mais um -1 n�mero dos anteriores a cada vez que fosse escrito.
		}
		if (i < 3) {//A condi��o "if" foi usada para que se o "i" fosse menor do que 3,juntamente com o "break"
			break; //a condi��o do "while" fosse impressa s� uma �nica vez.
    }         //Contudo, retirando o "while" e o "if" o programa iria responder corretamente tamb�m.

    return 0;
    }
}
