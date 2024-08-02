#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, cont = 0;
    float soma = 0.0;
    float Media = 0.0;
    
    while (cin >> N) {
        if (N < 0)
            break;
        
        if (N > 0) {
            soma += N;
            cont++;
        }
    }
    
    
    Media = soma/ cont;
    cout << fixed << setprecision(2) << Media << endl;

    return 0;
}