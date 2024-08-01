#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
    int C;
    string palavra, cripto;
    
    cin >> C;
    
    for(int i=0; i < C; i++){
        cin >> palavra;
        
        for(char c : palavra){
            if(islower(c)){
                cripto.push_back(c);
            }
        }
        
        reverse(cripto.begin(), cripto.end());
        cout << cripto << endl;
        cripto.clear();
    }
    
    return 0;
}