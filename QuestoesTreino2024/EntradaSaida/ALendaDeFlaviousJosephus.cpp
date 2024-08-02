#include <stdio.h>

int main()
{
    int NC, n, k, result, sobrev=0;
    
    scanf("%d", &NC);
    
    for (int i = 1; i <= NC; i++){
        scanf("%d %d", &n, &k);
        
        for (int x = 1; x <= n; x++){
            
            sobrev = (sobrev + k) % x;
        }
        
        result = sobrev + 1;
        printf("Case %d: %d\n", i,result);
        
    }

    return 0;
}