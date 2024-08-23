
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    
    cin >> N;
    
    cin.ignore();
    string s;
    
    getline(cin, s); 

    int total = 0;
    int i = 0;

    while (i < N) {
        char seque = s[i];
        int NaoSei = i;
        
        while (i < N && s[i] == seque) {
            i++;
        }
        int length = i - NaoSei;
        
        if (length > 1 && seque == 'a') {
            total+= length;
        }
    }

    cout << total << endl;

    return 0;
}