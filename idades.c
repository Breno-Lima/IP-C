#include <stdio.h>
#include <stdlib.h>

int main(void){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if(idade<18){
        printf("Voce eh jovem!");
    }else{
        if(idade==18 || idade<=50)
            printf("Voce eh adulto!");
        else{
            if(idade>50)
                printf("Voce eh idoso!");
        }
    }



    return 0;
}
