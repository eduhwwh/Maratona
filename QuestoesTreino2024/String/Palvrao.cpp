#include <iostream>
#include <string>

using namespace std;

int main()
{
    string palavra;
    
    while(cin >> palavra){
        if(palavra.size() >= 10){
            cout << "palavrao" << endl;
        } else{
            cout << "palavrinha" << endl;
        }
    }
    
    
    return 0;
}