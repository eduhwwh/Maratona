#include <stdio.h>
 
int main() {
 
   int X,Y,i, resu=0;
   
   scanf("%d", &X);
   scanf("%d", &Y);
   
   if(X > Y){
       for(i=Y+1; i < X; i++){
           if(i%2 !=0){
               resu += i;
           }
       }
   }else if(Y > X){
       for(i=X+1; i < Y; i++){
           if(i % 2 != 0){
               resu +=i;
           }
       }
   }
   printf("%d\n",resu);
 
    return 0;
}