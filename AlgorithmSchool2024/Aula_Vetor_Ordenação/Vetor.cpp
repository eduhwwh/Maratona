#include <bits/stdc++.h>

using namespace std;

int main(){
   
    int tam_vector;
    
    cin >> tam_vector;
    
    vector<int> valores(tam_vector);
    
    for(int i = 0; i < valores.size(); i++){
        
        cin >> valores[i];
    }

    int somatorio = 0; 
     for(int i = 0; i < valores.size(); i++){
        somatorio = somatorio + valores[i];
    }

    cout << somatorio << endl;
  
    return 0;
}
