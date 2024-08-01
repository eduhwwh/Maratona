#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int main() {
    
    int N,i;
    
    while(cin >> N && N != 0){
        vector<int>Suspeitos (N);
        for( i=0; i < N; i++){
            cin >> Suspeitos[i];
           
        }
        vector<int>SegSuspeitos = Suspeitos;
        sort(SegSuspeitos.begin(), SegSuspeitos.end());
        
        int V = SegSuspeitos[N - 2]; 

        for (i = 0; i < N; i++) {
            if (Suspeitos[i] == V) {
                cout << i + 1 << endl; 
                break; 
            }
        }
    }
    
    return 0;
}