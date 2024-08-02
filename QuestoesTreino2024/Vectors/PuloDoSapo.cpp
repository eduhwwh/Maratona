#include <stdio.h>

int main() {
    int i, altCano, altPulo, quantCano;
    
    scanf("%d", &altPulo);
    scanf("%d", &quantCano);
    
    int pulosSeguidos[quantCano];
    int puloCerto = 1;

    for(i = i; i < quantCano; i++){
        scanf("%d", &pulosSeguidos[i]);
    }
    
    for(i = 0; i < quantCano - 1; i++){
        if((pulosSeguidos[i] - pulosSeguidos[i + 1]) < (-altPulo)){
            puloCerto = 0;
        } else if((pulosSeguidos[i] - pulosSeguidos[i + 1]) > altPulo){
            puloCerto = 0;
        }
        
    }
    
    if(puloCerto == 1){
        printf("YOU WIN\n");
    }else {
        printf("GAME OVER\n");
    }

    
    return 0;
}