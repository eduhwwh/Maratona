#include <stdio.h>

int main()
{
    int i, codAl = 0 , codGas = 0 , codDi = 0, cod; 
    
    while(cod != 4 ){
        scanf("%d", &cod);
        if(cod == 1){
            codAl++;
        }else if(cod == 2){
            codGas++;
        }else if(cod == 3){
            codDi++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", codAl);
    printf("Gasolina: %d\n", codGas);
    printf("Diesel: %d\n", codDi);
    
    return 0;
}