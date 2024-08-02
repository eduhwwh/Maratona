#include <stdio.h>
#define MAXN 1001010


int pode[MAXN], nPode [MAXN], n, m;

int Result()
{
    for(int i = 0; i <= n; i++){
        if(pode[i] == 0){
            for(int j = 1; j <= m; j++){
                pode[i + j]++;
                nPode[i + j] = j;
            }
        } else if(pode [i] == 1){
            pode [i + nPode[i]]++;
            nPode[i + nPode[i]] = nPode[i];
            
        }
    }

    return pode[n];
}

int main(){
    scanf("%d %d", &n, &m);
    if(Result()){
        printf("Paula\n");
        
    }else{
        printf("Carlos\n");
    }
    
    return 0;
}
