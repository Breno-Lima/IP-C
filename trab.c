#include <stdio.h>
#include  <stdlib.h>

int main(void){

    int x;
    int i;
    int n;

    scanf("%d",&n);

    for(i = 1; i <= n; i++){

        scanf("%d",&x);
        if(x == 0){
            printf("NULL\n");
        }else{
            if(x % 2 == 0) printf("EVEN ");
            else printf("ODD ");

            if(x > 0) printf("POSITIVE\n");
            else printf("NEGATIVE\n");

        }
    }
}
