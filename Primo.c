#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int A,B,C,D,soma,soma2;

    scanf("%d %d %d %d",&A, &B, &C, &D);

    soma= C+D;
    soma2=A+B;
  if(B>C && D>A && soma > soma2 && C>0 && D>0 && A%2==0){
    printf("Valores aceitos");
  }else{
    printf("Valores nao aceitos\n");
  }

}

