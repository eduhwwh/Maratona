#include <stdio.h>

int main() {

    int comprEstrada, distPedagio, custoKm, vlPedagio;
    int cont = 0;
    scanf("%d", &comprEstrada);
    scanf("%d", &distPedagio);
    scanf("%d", &custoKm);
    scanf("%d", &vlPedagio);
    
    int quantPedagio = distPedagio;
    int resultCustoKm = comprEstrada * custoKm;
    while(quantPedagio <= comprEstrada){
        quantPedagio += distPedagio;
        cont++;
    }
    
    int resultCustoPed = cont * vlPedagio;
    int valorTotal = resultCustoPed + resultCustoKm;
    printf("%d\n", valorTotal);
    
    return 0;
}