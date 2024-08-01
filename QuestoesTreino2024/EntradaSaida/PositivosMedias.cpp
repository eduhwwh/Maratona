#include <stdio.h>
 
int main() {
 
    float  soma=0, n;
    int cont=0, i;
    
    for(i =0; i<6; i++){
        scanf("%f", &n);
        
        if(n>0){
            cont++;
            soma+=n;
        }
    }
    
    printf("%d valores positivos\n%.1f\n", cont,(soma/cont));
    return 0;
}