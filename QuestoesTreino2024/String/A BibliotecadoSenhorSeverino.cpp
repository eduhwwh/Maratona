#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int main() {
 
    int N,i;
    
    while(cin >> N){
        vector<string>Livro(N);
        for(i=0; i < N; i++){
            cin >> Livro[i];
        }
        sort(Livro.begin(), Livro.end());
        
        for(i=0; i < N; i++){
            cout << Livro[i] << endl;
        }
    }
 
    return 0;
}