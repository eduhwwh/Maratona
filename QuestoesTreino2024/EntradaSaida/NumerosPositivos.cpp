#include <iostream>
 
using namespace std;
 
int main() {
    
    int posi=0;
    float nume;
    
    for(int i=0; i < 6; i++){
        cin >> nume;
        
        if(nume > 0){
            posi++;
        }
    }
    cout << posi << " valores positivos" << endl;
    return 0;
}