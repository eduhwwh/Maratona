#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int main() {
    
    int N,Q;
    
    while( cin >> N >> Q){
        
        vector<int>Notas(N);
        
        for(int i=0; i < N; i++ ){
            cin >> Notas[i];
        }
        
        sort(Notas.rbegin(), Notas.rend());
        
        for(int i=0; i < Q; i++){
            int P;
            
            cin >> P;
            
            cout << Notas[P - 1] << endl;
        }
    }
 
    return 0;
}