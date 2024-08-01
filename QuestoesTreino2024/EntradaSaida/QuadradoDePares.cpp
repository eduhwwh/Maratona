#include <stdio.h>
 
int main() {
 
   int N, result = 0, i;
   
   scanf("%d",&N);
   
   for (i =2 ; i <= N; i+=2){
       result = i * i;
       printf("%d^2 = %d\n", i, result);
   }
    return 0;
}