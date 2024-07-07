#include <iostream>
#include <vector>

using namespace std;
 
int main() {
 
   int N,i;
   
   cin >> N;
   
   vector<int>territorio(N);
   
   for(i=0; i < N; i++){
       cin >> territorio[i];
   }
   
   int resu = 0;
   for(i=0; i < N; i++){
       resu += territorio[i];
   }
   
   int soma = 0;
   for(i=0; i < N; i++){
       soma += territorio[i];
       if(soma == resu - soma){
           cout << i + 1 << endl;
           break;
       }
   }
    return 0;
}