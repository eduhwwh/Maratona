#include <bits/stdc++.h>

using namespace std;

int naoSei(vector<int>& capitao){
    int K = capitao.size();
    return capitao[K / 2];
}

int main(){
    int T;
    cin >> T;
    
    for(int i=1; i <= T; i++){
        int N;
        cin >> N;
        
        vector<int>capitao(N);
        
        for(int j=0; j < N; j++){
            cin >> capitao[j];
        }
        
        int namu = naoSei(capitao);
        
        cout << "Case " << i << ": " << namu << endl;
    }
    return 0;
}