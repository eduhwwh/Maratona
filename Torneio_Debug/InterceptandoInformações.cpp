#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int>Bits(8);

    for(int i=0 ; i < N; i++){
        cin >> Bits[i];
    }

    int indejado = 9;
    bool encontrou = false;

    for(int achou : Bits){

        if(achou == indejado){
            encontrou = true;
            break;
        }
    }

    if(encontrou){
        cout << "F" << endl;
    }else{
        cout << "S" << endl;
    }

    return 0;
}