#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    string S;
    
    cin >> S;
    
    transform(S.begin(), S.end(), S.begin(), ::tolower);
    
    
    if(S.find("zelda") != string :: npos){
        cout << "Link Bolado" << endl;
    }else{
        cout << "Link Tranquilo" << endl;
    }
  
    return 0;
}