#include <bits/stdc++.h>
 
using namespace std;

void naoSei(int M, int N) {
    int soma = 0;

    int menor = (M < N) ? M : N;
    int maior = (M > N) ? M : N;
    
    for (int i = menor; i <= maior; i++){
        cout << i;
        if (i < maior) cout << " ";
        soma += i;
    }

    cout << " Sum=" << soma << endl;
}

int main() {
    int M, N;

    while (true) {
        cin >> M >> N;
        if (M <= 0 || N <= 0) break;
        naoSei(M, N);
    }

    return 0;
}