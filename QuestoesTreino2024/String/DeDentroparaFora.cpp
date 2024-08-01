#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); 

    for (int i = 0; i < N; i++) {
        string frase;
        getline(cin, frase);

        int tamanho = frase.length();
        int meio = tamanho / 2;

        string direita = frase.substr(meio);
        string esquerda = frase.substr(0, meio);

        reverse(direita.begin(), direita.end());
        reverse(esquerda.begin(), esquerda.end());

        cout <<  esquerda+direita << endl; 
    }

    return 0;
}