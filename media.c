#include <stdio.h>
#include <stdlib.h>

int main(void){

int a,b,c;
int soma;
int media;

printf("Digite a sua primeira nota: ");
scanf("%d",&a);
printf("Digite a sua segunda nota: ");
scanf("%d",&b);
printf("Digite a sua terceira nota: ");
scanf("%d",&c);

soma=a+b+c;
media=soma/3;

printf("A media do aluno foi:%d",media);

    return 0;
}
