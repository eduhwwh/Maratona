#include <iostream>
#include <map>
 
using namespace std;

int main() {
 int t;
 string fraseOriginal, fraseTime1, fraseTime2;
 cin >> t;
 getline(cin,fraseOriginal);
 int iteracao = 1;
 while(getline(cin,fraseOriginal)){
  if(iteracao== t+1) break;
  cout << "Instancia "<< iteracao++ << endl;
  getline(cin,fraseTime1);
  getline(cin,fraseTime2);
  int errors1 = 0;
  int errors2 = 0;
  int first_error1 = fraseOriginal.length()+1;
  int first_error2 = fraseOriginal.length()+1;
  for(int i =0;i<fraseOriginal.length();i++){
   if(fraseOriginal[i]!=fraseTime1[i]){
    errors1++;
    first_error1 = first_error1 > i ? i : first_error1;
   }
   if(fraseOriginal[i]!=fraseTime2[i]){
    errors2++;
    first_error2 = first_error2 > i ? i : first_error2;
    if(first_error1 == first_error2){
     first_error1 = fraseOriginal.length()+1;
     first_error2 = fraseOriginal.length()+1;
    }
   }
  }
  if(errors1==errors2){
   if(first_error1 > first_error2){
    cout << "time 1"<<endl<<endl;
   } else if(first_error2 > first_error1){
    cout << "time 2"<<endl<<endl;
   } else
    cout << "empate"<<endl<<endl;
  }
  else{
   if(errors1>errors2){
    cout << "time 2"<<endl<<endl;
   } else{ 
    cout << "time 1"<<endl<<endl;
   }
  }
 }
    return 0;
}