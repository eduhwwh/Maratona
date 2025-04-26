#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
   string S, impar, par;
   
   cin >> S;
   
   for(int i=0; i < S.size(); i++){
       
       if(i % 2 == 0){
           par += S[i];
       }else{
           impar += S[i];
       }
       
   }
   
   cout << par <<  endl;
   cout << impar<< endl;
    
    
 return 0;   
}