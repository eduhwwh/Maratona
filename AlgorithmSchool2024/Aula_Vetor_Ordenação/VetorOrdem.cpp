#include <bits/stdc++.h>

using namespace std;

int main(){
   
    int tam_vector;
    
    cin >> tam_vector;
    
    vector<int> valores(tam_vector);
    
    for(int i = 0; i < valores.size(); i++){
        
        cin >> valores[i];
    }

    //Essa parte é responsavel por ordenar até a metade do vetor em ordem crescente!!
    sort(numeros.begin(), numeros.begin() + tam_vector / 2 -1);

    // E esse é em ordem decrecente.
    sort(numeros.begin() + tam_vector / 2, numeros.end(), greater<int>());
    
    
    for(int i = 0; i < valores.size(); i++){
        
        cout << numeros[i] << endl;
    }
    
    return 0;
}
