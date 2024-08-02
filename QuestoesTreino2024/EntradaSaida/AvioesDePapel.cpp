#include <stdio.h>

int main()
{
  int C, P, F,result;
  
  scanf("%d %d %d", &C,&P,&F);
  
  result = C * F;
  
  if(result <= P ){
      printf("S\n");
  }else{
      printf("N\n");
  }
    return 0;
}
