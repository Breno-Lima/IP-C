#include <stdio.h>

void ExibeArrayBi(int a[][2], int dim1, int dim2)
{
    int i, j;

    for (i = 0; i < dim2; ++i) {
        printf("\t%d", i);
    }

    for (i = 0; i < dim1; ++i) {
        printf("\n%d", i);

        for (j = 0; j < dim2; ++j) {

            printf("\t%d", a[i][j]);

        }

    }

}






int main(void){

    int ar[3][2]={{1,2},{3,4},{5,6}};

    ExibeArrayBi(ar,1,2);






    return 0;
}
