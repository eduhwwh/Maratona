#include <bits/stdc++.h>
using namespace std;

int main() {
   
   int  A, B, C;
   
   cin >> A >> B >> C;
   
   if( A == B || A == C || B == A || B == C || C == A || C == B){
        
        cout << "S" << endl;
        
   }else if( A + B == C || B + C == A || C + A == B){
       
       cout << "S" << endl;
       
   }else{
       
       cout << "N" << endl;
   }
  
    return 0;
}