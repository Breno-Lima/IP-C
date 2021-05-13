#include <stdio.h>
#define Tam_Array 10

double MediaArray(int ar[],int t){//parte 2 do código
    int soma = 0, i;

    for(i = 0; i < t; i++){
        soma += ar[i];
    }

    return (double) soma/t;

}
int EmArray(int ar[], int t, int elem){
    int i;

    for(i = 0; i < t; i++){
        if (ar[i] == elem){
            return 1;
        }
    }

    return 0;
}

int MaximoValorArray(int ar[], int t){
    if (t <= 0)
        return -1;

    int maior = ar[0], i;

    for(i = 1; i < t; i++){
        if (ar[i] > maior){
            maior = ar[i];
        }
    }

    return maior;
}

int EhArrayOrdenado(int ar[], int t){
    int i;

    for (i = 1; i < t; i++){
        if (ar[i] < ar[i-1]){
            return 0;
        }
    }

    return 1;
}

int main(void){//Parte 1 do código, se os comentários forem retirados o código será executado como se fosse a parte 1.

 int ar[Tam_Array];//={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
 int i,elem;

    for(i=0;i<Tam_Array;i++){
        //ar[i] = (i+1)*10;
        printf("Digite o valor: ");
        scanf("%d",&ar[i]);
    }

    printf("Ordem Crescente: ");
    for(i=0;i<Tam_Array;i++){
        printf("%d ",ar[i]);
    }
    printf("\n");
    printf("Ordem Decrescente: ");
    for(i=Tam_Array-1;i>=0;i--){
        printf("%d ",ar[i]);
    }
    printf("\n");
    printf("O elemento 5 eh: %d",ar[4]);
    printf("\n");

    printf("Os indices impares sao: ");
    for(i=0;i<Tam_Array;i++){
        if(i%2==1)
            printf("%d ",ar[i]);
    }
    int soma=0;
    for(i=0;i<Tam_Array;i++){
            soma=soma+ar[i];
    }
        printf("\nA soma dos valores eh: %d",soma);
        printf("\nMedia dos elementos: %.2lf\n", MediaArray(ar, Tam_Array));

    printf("Digite um elemento para procurar: ");
    scanf("%d", &elem);
    if (EmArray(ar, Tam_Array, elem)){
        printf("\nO elemento estah no array!\n");
    }else{
        printf("\nElemento nao encontrado.\n");
    }

    printf("\nValor maximo: %d\n", MaximoValorArray(ar, Tam_Array));
    printf("\nO array%sestah ordenado.\n", EhArrayOrdenado(ar, Tam_Array) ? " " : " NAO ");

    return 0;
}