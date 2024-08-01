#include <iostream>

using namespace std;
 
int main() {
 
    int V,T;
   
    cin >> V >> T;
   
    for(int i=0; i < T; i++){
        int Ai;
        cin >> Ai;
        
        V += Ai;
        
        if(V > 100){
            V = 100;
        }
        
        if(V < 0){
            V = 0;
        }
    }
   
    cout << V << endl;
    return 0;
}