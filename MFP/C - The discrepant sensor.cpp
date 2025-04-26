#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    int T = 0;
    int K, M, N;
    
    cin >> T;
    
    for(int i=0 ; i < T; i++){
        
        cin >> K >> M >> N;
        
        if( K != M & K != N){
            cout << K << endl;
        }else if(M != K & M != N){
            cout << M << endl;
        }else if(N != K & N != M){
            cout << N << endl;
        }
    }
    
 return 0;   
}