#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string enigma, crib;
    
    cin >> enigma >> crib;
    cin.ignore();
    
    int cont = 0;
    
    for(int i=0; i <= enigma.length() - crib.length(); i++){
        bool posicao = true;
        
        for(int j=0; j < crib.length(); j++){
            if(enigma[i + j] == crib[j]){
                posicao = false;
                break;
            }
        }
        
        if(posicao){
            cont++;
        }
    }
    cout << cont << endl;
    
    return 0;
}