#include <bits/stdc++.h>

using namespace std;

int main(){

    vector <int> vetor = {1, 3, 5, 2, 10, 6, 2, 0};
    sort(vetor.begin(), vetor.end());

    int esq = 0, dir = vetor.size();
  

    int procurado = 6; 

    while(esq != dir){
        int meio = (esq + dir) / 2;

        if(vetor[meio] > procurado){
            dir = meio;
        }else if(vetor[meio] < procurado){
            esq = meio;
        } else {
            cout << meio << endl;
            cout << vetor[meio] << endl;
            break;
        }
      
    }

    return 0;
}