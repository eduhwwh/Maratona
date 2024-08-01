#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
   
    vector<int> Paisagem(N);
    for (int i = 0; i < N; i++) {
        cin >> Paisagem[i];
    }
   
    if (N == 1) {
        cout << "1" << endl;
    }else if (N == 2) {
        if (Paisagem[0] != Paisagem[1]) {
            cout << "1" << endl; 
        }else{
            cout << "0" << endl; 
        }
    }else {
        bool padrao = true;

        for (size_t i = 1; i < Paisagem.size() - 1; ++i) {
            if (Paisagem[i] > Paisagem[i - 1] && Paisagem[i] > Paisagem[i + 1]) {
                continue;
            }else if (Paisagem[i] < Paisagem[i - 1] && Paisagem[i] < Paisagem[i + 1]) {
                continue;
            } else {
                padrao = false;
                break;
            }
        }

        if (padrao) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
   
    return 0;
}
