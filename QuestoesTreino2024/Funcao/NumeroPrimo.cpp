#include <bits/stdc++.h>
 
using namespace std;

bool naoSei(int X){
    if(X <= 1){
        return false;
    }
    for(int i=2; i*i <= X; i++){
        if(X % i == 0){
            return false;
        }
    }
    return true;
}
 
int main(){
    int N,X;
    
    cin >> N;
    
    for(int i=0; i < N; i++){
        cin >> X;
        if(naoSei(X)){
            cout << X << " eh primo" << endl;
        }else{
            cout << X << " nao eh primo" << endl;
        }
    }
    
    return 0;
}