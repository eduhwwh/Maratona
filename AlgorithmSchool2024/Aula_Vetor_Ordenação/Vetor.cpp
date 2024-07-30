#include <bits/stdc++.h>

using namespace std;

int main(){
   
    int tam_vector;
    
    cin >> tam_vector;
    
    vector<int> valores(tam_vector);
    
    for(int i = 0; i < valores.size(); i++){
        
        cin >> valores[i];
    }
    
    for(int i = 0; i < valores.size(); i++){
        
        cout << valores[i];
    }
    
    return 0;
}
