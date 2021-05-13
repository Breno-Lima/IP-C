#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, comprimento, rendimento, volume;
    float quantidade;
    printf("digite altura:");
    scanf("%f", &altura);
    printf("digite comprimento:");
    scanf("%f", &comprimento);
    printf("digite rendimento:");
    scanf("%f", &rendimento);
    printf("digite volume:");
    scanf("%f", &volume);
    quantidade = ((altura*comprimento/rendimento)/volume);
    printf("a quantidade foi: %f", quantidade);

    return 0;


}
