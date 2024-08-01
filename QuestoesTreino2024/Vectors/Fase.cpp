#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int main() {
 
    int N,K;
   
    cin >> N >> K;
   
    vector<int> Pontuacao(N);
    for(int i = 0; i < N; i++){
        cin >> Pontuacao[i];
    }
   
    sort(Pontuacao.begin(), Pontuacao.end(), greater<int>());
   
    int soma = 0;
    for(int i = 0; i < Pontuacao.size(); i++){
        if(Pontuacao[i] >= Pontuacao[K - 1]){
            soma++;
        } else {
            break; 
        }
    }
   
    cout << soma << endl;

    return 0;
}
