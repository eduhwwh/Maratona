#include <stdio.h>

int main()
{
    int quantVazio, figComprada, tamanho = 0, result, i, j;
    
    scanf("%d", &quantVazio);
    scanf("%d", &figComprada);
    
    int vetorFig[figComprada];
    int vetorFignaoRep[quantVazio];
    
    for(i = 0; i < figComprada; i++) {
        scanf("%d", &vetorFig[i]);
    }

    for (i = 0; i < figComprada; i++) {
        for (j = 0; j < tamanho; j++) {
            if (vetorFig[i] == vetorFignaoRep[j]) {
                break;
            }
        }
        if (j == tamanho) {
            vetorFignaoRep[tamanho] = vetorFig[i];
            tamanho++;
        }
    }

    result = quantVazio - tamanho;
    printf("%d\n", result);

    return 0; 
}