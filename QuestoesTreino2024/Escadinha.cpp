#include <iostream>
#include <vector>

using namespace std;
 
int main() {
 
    int N,i;
   
    cin >> N;
    
    if (N == 1 || N == 2) {
        cout << 1 << endl;
        return 0;
    }
   
    vector<int>Escadinhas(N);
    for( i=0 ; i < N; i++){
        cin >> Escadinhas[i];
    }
   
    int quant = 1;
    int resul = Escadinhas[1] - Escadinhas[0];
    for(i = 1; i < N - 1; i++){
        if(Escadinhas[i + 1] - Escadinhas[i] == resul){
            continue;
        }else{
           resul = Escadinhas[i + 1] - Escadinhas[i];
           quant++;
        }
    }
   
    cout << quant << endl;
    return 0;
}