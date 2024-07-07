#include <bits/stdc++.h>

using namespace std;

double naoSei(int N){
    
    double raiz = 1.0;
    
    for(int i=0; i < N; i++){
        raiz = 1.0 + 1.0 / (1.0 + raiz);
    }
    
    return raiz;
}

int main()
{
    int N;
    cin >> N;
    
    double resu = naoSei(N);
    
    cout << fixed << setprecision(10) << resu << endl;
    
    return 0;
}