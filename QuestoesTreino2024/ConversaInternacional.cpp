#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N, K;
    string S;
    
    cin >> N;
    
    for(int i=0; i < N; i++){
        cin >> K;
        
        unordered_set<string> languages;
        
        for(int j=0; j < K; j++){
            cin >> S;
            languages.insert(S);
        }
        
        if(languages.size() > 1){
            cout << "ingles" << endl;
        }else{
            cout << *languages.begin() << endl;
        }
    }
 
    return 0;
}