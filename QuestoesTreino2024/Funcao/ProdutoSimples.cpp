#include <iostream>

using namespace std;

int prod(int N, int X){
    int naoSei;
    
    naoSei = N * X;
    
    return naoSei;
}

int main(){
    int N, X;
    
    cin >> N >> X;
    
    cout << "PROD = " << prod(N,X) << endl;

    return 0;
}