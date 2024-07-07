#include <bits/stdc++.h>

using namespace std;

int naoSei(int N){
    int fato = 1;
    
    for(int i=1; i <= N; i++){
        fato *= i;
    }
    
    return fato;
}

int main(){
    int N;
    
    cin >> N;
    
    int resu = naoSei(N);
    
    cout << resu << endl;
    
    return 0;
}