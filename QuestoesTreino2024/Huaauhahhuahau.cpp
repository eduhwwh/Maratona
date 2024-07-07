#include <bits/stdc++.h>

using namespace std;

int main() {
    string palavraRisada;
    string Vogal = "";
    int i;
    cin >> palavraRisada;
    
    int quantLetra = palavraRisada.length();
    

    for (int i = 0; i < quantLetra; i++) {
        char c = palavraRisada[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            Vogal += c;
        }
    }

    int engracada = 1;
    quantLetra = Vogal.length();
    for (int i = 0; i < quantLetra / 2; i++) {
        if (Vogal[i] != Vogal[quantLetra - i - 1]) {
            engracada = 0;
           
        }
    }

    if(engracada == 1){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

    return 0;
}