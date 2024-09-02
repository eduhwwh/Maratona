#include <bits/stdc++.h>

using namespace std;

int main(){
   
    int n,k;

    cin >> n >> k;

    int n_pausa = n - 1;
    int calculo = 0;
    
    for(size_t i=0 ; i <= k ; i++){
        calculo = i * n + n_pausa;

        if(calculo > k){
            calculo = i;

            break;
        }
    }

    if(n == 1){
        cout << k << endl;
    }else{
        cout << calculo-1 << endl;
    }

   
    return 0;

    //teste

}
