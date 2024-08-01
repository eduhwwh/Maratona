#include <stdio.h>
 
int main() {
 
   int N, mult=0;
   
   scanf("%d", &N);
   for (int i=1 ;i<=10 ; i++){
       
       mult=i*N;
       printf("%d x %d = %d\n", i,N,mult);
       
   }
    return 0;
}