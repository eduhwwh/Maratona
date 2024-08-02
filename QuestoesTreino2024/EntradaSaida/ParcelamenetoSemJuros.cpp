#include <stdio.h>

int main()
{
    int i, V, P, result = 0, rest;
    scanf("%d", &V);
    scanf("%d",&P);
    

    result = V / P;
    rest = V % P;
    
    for (i=0; i < P; i++){
        if(rest == 0){
            printf("%d\n", result);
        }else{
             rest -= 1;
             printf("%d\n", result + 1);
        }
    }
    
    return 0;
}