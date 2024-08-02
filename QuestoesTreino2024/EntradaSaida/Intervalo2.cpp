#include <stdio.h>

int main()
{
    int N, X, cont = 0, conta=0;
    scanf("%d", &N);
    for (int i=0; i < N; i++){
        scanf("%d", &X);
        
        if(X >= 10 && X <= 20){
            cont++;
        }else{
            conta++;
        }
    }
    printf("%d in\n", cont);
    printf("%d out\n", conta);
    return 0;
}
