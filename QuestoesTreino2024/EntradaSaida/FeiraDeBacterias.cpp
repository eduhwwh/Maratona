#include <math.h>
#include <stdio.h>

int main() {
    int result = 0, n, i;
    double max = 0.0;
   
    scanf("%d", &n);
   
    for(i = 0; i < n; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        double atual = y * log(x);
        if(atual > max){
            max = atual;
            result = i;
        }
    }
   
     printf("%d\n", result);
     return 0;
}
