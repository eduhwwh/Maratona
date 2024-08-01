#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N;
    
    cin >> N;

    for(int i = 0; i < N; i++) {
        string S;
        cin >> S;
        
        int cont = 0;
        bool encontrou = false;
        
        for(char c : S) {
            if(isalpha(c) && tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                cont++;
                
                if(cont == 3) {
                    encontrou = true;
                    break;
                }
            } else {
                cont = 0;
            }
        }
        
        if(encontrou) {
            cout << S << " nao eh facil" << endl;
        } else {
            cout << S << " eh facil" << endl;
        }
    }
    

    return 0;
}
