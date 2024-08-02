#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    
    cin >> N;
    
    if(N == 61){
        cout << "Brasilia" << endl;
    }else if(N == 71){
        cout << "Salvador" << endl;
    }else if(N == 11){
        cout << "Sao Paulo" << endl;
    }else if(N == 21){
        cout << "Rio de Janeiro" << endl;
    }else if(N == 32){
        cout << "Juiz de Fora" << endl;
    }else if(N == 19){
        cout << "Campinas" << endl;
    }else if(N == 27){
        cout << "Vitoria" << endl;
    }else if(N == 31){
        cout << "Belo Horizonte" << endl;
    }else{
        cout << "DDD nao cadastrado"<< endl;
    }
    return 0;
}