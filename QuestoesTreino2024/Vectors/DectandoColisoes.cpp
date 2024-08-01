#include <iostream>
#include<vector>

using namespace std;
int main()
{
    int N, i;
    
    cin >> N;
    
    vector<int>tabuleiro(N);
    
    for (i=0; i < N; i++){
        cin >> tabuleiro[i];
    }
    
    int resul[N];
    
    for(i=0; i < N; i++){
        int minas = 0;
        
        if(tabuleiro[i] == 1){
           minas++;
        } 
        if(i > 0 && tabuleiro[i - 1 ] == 1){
            minas++;
        }
        if(i < N && tabuleiro[i + 1] == 1){
            minas++;
        }
        resul[i] = minas;
    }
    
    for(i=0; i < N; i++){
        cout << resul[i] << endl;
    }

    return 0;
}