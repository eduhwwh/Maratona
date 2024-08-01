#include <bits/stdc++.h>


using namespace std;
 
int main() {
    int N;
    cin >> N;

    cin.ignore();

    for(int i = 0; i < N; i++) {
        string palavra;
        getline(cin, palavra);
        
        int letras[26] = {0};
        
        for (char c : palavra){
            if(isalpha(c)){
                letras[tolower(c) - 'a']++;
            }
        }
        int presentes = 0;
        
        for(int i=0; i < 26; i++){
            if(letras[i] > 0){
                presentes++;
            }
        }
        
        if(presentes == 26){
            cout << "frase completa" << endl;
        }else if (presentes >= 13){
            cout << "frase quase completa" << endl;
        }else{
            cout << "frase mal elaborada" << endl;
        }
    }
 
    return 0;
}
