#include <stdio.h>
int main() {
   
    int x[2][2], y[2][2];

   scanf("%d %d %d %d", &x[0][0], &y[0][0], &x[0][1], &y[0][1]);
   scanf("%d %d %d %d", &x[1][0], &y[1][0], &x[1][1], &y[1][1]);
   
   if(x[0][1] < x[1][0] || x[1][1] < x[0][0] || y[0][1] < y[1][0] || y[1][1] < y[0][0] || x[1][0] > x[0][1] || y[0][0] > y[1][1] || y[1][0] > y[0][1]){
       printf("0\n");
   }else{
       printf("1\n");
   }
   return 0;
}
