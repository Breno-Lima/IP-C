#include <stdio.h>
#include <stdlib.h>

int main(void){

    int senha;
    senha=2020;

    printf("Digite sua senha: ");
    scanf("%d",&senha);

    if(senha==2020){
        printf("Acesso permitido");
    }else{
        printf("Acesso negado");
    }

    return 0;
}
