#include <stdio.h>
 
int main() {
 
   int N, i;
   float v1, v2, v3, result = 0;
   
   scanf("%d", &N);
   for(i = 0; i < N; i++){
       scanf("%f",  &v1);
       scanf("%f",  &v2);
       scanf("%f",  &v3);
       
       result = (((v1 * 2) + (v2 * 3) + (v3 * 5)) / 10);
       printf("%.1f\n", result);
   }
 
    return 0;
}