#include <stdio.h>

int main(){
	
	int num, par=0, impar=0, nega=0, pos=0;
	
	for (int i=0; i<5; i++){
		scanf("%d", &num);
		
		if(num > 0){
			pos++;
		}else if(num < 0 && num != 0){
			nega++;
		}	
		if(num%2==0){
			num = par;
			par++;
		}else{
			num = impar;
			impar++;
		}	
	}
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", pos);
	printf("%d valor(es) negativo(s)\n", nega);
	
	return 0;
}