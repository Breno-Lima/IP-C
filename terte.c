#include <stdio.h>

#define Alunos 1

double  Media(double notas[Alunos]){
    double soma=0,media=0;
    soma=soma+notas[Alunos];

     return media=soma/notas[Alunos];
}


int main(void){
    double notas[Alunos],media=0,variancia,soma=0;
    int i;

    for(i=0;i<=Alunos;i++){
        printf("Digite a nota do aluno: #%d ",i+1);
        scanf("%lf",&notas[i]);
    }


    media=Media(notas);
    printf("A media foi: %.1lf",media);














    return 0;
}
