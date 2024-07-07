#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int main() {
    
    int N,M;
    
    cin >> N;
    
    for(int j=0; j < N; j++){
        cin >> M;
        
        vector<int>Fila(M);
        vector<int>Fila2(M);
        
        for(int i=0; i < M; i++){
            cin >> Fila[i];
            Fila2[i] = Fila[i];
        }
        
        int cont =0;
        sort(Fila.begin(), Fila.end(), greater<int>());
        
        for(int i=0; i < M; i++){
            if(Fila[i] == Fila2[i]){
                cont++;
            }
        }
        cout << cont << endl;
    }
    
    return 0;
}