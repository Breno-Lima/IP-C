#include <stdio.h>
#include <math.h>

long double Distancia(int a1, int a2, int b1, int b2){
    long double distanciaX, distanciaY;

    distanciaX = a2 - a1;
    distanciaY = b2 - b1;

    return sqrt(pow(distanciaX,2) + pow(distanciaY,2));
}

int main(void){
    int testes, bolas;
    int x1, x2, y1, y2;
    int t1 = 0, t2 = 0, aux2 = 0;
    long double dist, aux1 = 0;

    scanf("%d", &testes);

    while(++t1<=testes){
        scanf("%d", &bolas);
        scanf("%d %d", &x1, &y1);

        while(++t2<=bolas){
            scanf("%d %d", &x2, &y2);

            dist = Distancia(x1, x2, y1, y2);

            if(aux1==0){
                aux1 = dist;
                aux2 = t2;
            }
            if(dist<aux1){
                aux1 = dist;
                aux2 = t2;
            }
        }
        printf("%d\n", aux2);
        t2 = aux1 = 0;
    }

    return 0;
}