#include <stdio.h>
 
int main() {
 
    int c[100];
    int m = 0, p = 0;
    
    for (int i = 0; i < 100; i++){
        scanf("%d", &c[i]);
        if(c[i] > m){
            m = c[i];
            p = i + 1;
        }
    }
    
    printf("%d\n",m);
    printf("%d\n",p);
 
    return 0;
}