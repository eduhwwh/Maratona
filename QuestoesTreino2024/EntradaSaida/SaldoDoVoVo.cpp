#include <stdio.h>

int main()
{
    int N, S, menorSaldo, move;
    
    scanf("%d %d", &N, &S);
    
    menorSaldo = S;
    
    for(int i = 0; i < N; i++){
        
        scanf("%d", &move);
        
        S += move;
        
        if(S < menorSaldo){
            menorSaldo = S;
        }
    }
    printf("%d\n", menorSaldo);
    return 0;
}
