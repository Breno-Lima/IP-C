#include <stdio.h>
#include <stdlib.h>

int main(void){

int a,b;

printf("Digite um numero: ");
scanf("%d",&a);
printf("Digite outro numero: ");
scanf("%d",&b);

if (a<b)
    printf("o menor foi: %d",a);
else{
    printf("o menor foi: %d",b);

}



    return 0;
}
