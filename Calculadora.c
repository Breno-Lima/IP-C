#include <stdio.h>

void ExibeMenu(){
    
    printf("\n============Menu============\n"
        "\t[1]-Adicao\n"
        "\t[2]-Subtracao\n"
        "\t[3]-Multiplicacao\n"
        "\t[4]-Divisao\n"
        "\t[5]-Sair\n");
}

int soma (int a, int b){
return a + b;
}

int subtracao (int a, int b){
    return a - b;
}

int multiplicacao (int a, int b){
    return a * b;
}

int divisao (int a, int b){
    return a / b;
}
int main(void){

    int op,x,y,res;
    printf("\nAbrindo sua calculadora...");
        while(1){
        ExibeMenu();
        printf("Escolha uma opcao:");
        scanf("%d",&op);

        if(op==5){
            break;
        }

        printf("Digite x: ");
        scanf("%d",&x);
        printf("Digite y: ");
        scanf("%d",&y);

        switch(op){
            case 1:
                res=soma(x,y);
                printf("%d + %d = %d\n",x,y,res);
                break;
            case 2:
                res=subtracao(x,y);
                printf("%d - %d = %d\n",x,y,res);
                break;
            case 3:
                res=multiplicacao(x,y);
                printf("%d * %d = %d\n",x,y,res);
                break;

            case 4:
                res=divisao(x,y);
                printf("%d / %d = %d\n",x,y,res);
                break;
            default:
                printf("\nopcao invalida!");


        }

}
    printf("Obrigado!");
return 0;
}
