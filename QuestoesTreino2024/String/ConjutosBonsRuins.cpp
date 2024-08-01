#include <bits/stdc++.h>
 
using namespace std;

bool isPrefix(const string& word, const string& prefix) {
    return mismatch(word.begin(), word.end(), prefix.begin()).first == word.end();
}

int main() {
    int N;
    
    while(cin >> N && N != 0) {
        vector<string> words(N);
        
        for(int i = 0; i < N; ++i) {
            cin >> words[i];
        }
        
        bool isBadSet = false;
        
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < N; ++j) {
                if(i != j && isPrefix(words[i], words[j])) {
                    isBadSet = true;
                    break;
                }
            }
            if(isBadSet) break;
        }
        
        if(isBadSet) {
            cout << "Conjunto Ruim" << endl;
        } else {
            cout << "Conjunto Bom" << endl;
        }
    }
    
    return 0;
}