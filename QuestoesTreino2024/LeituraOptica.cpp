#include <iostream>
#include <vector>

using namespace std;
 
int main() {
 
    int num_leituras;
   
    while(cin >> num_leituras){
        if(num_leituras == 0){
            break;
        }
        for(int i=0; i < num_leituras; i++){
            vector<int>questoes(5);
           
            for(int j=0; j < 5; j++){
                cin >> questoes[j];
            }
            int marcada = 0;
            int branca = 0;
       
            for(int num : questoes){
                if(num <= 127){
                    marcada++;
                }else{
                    branca++;
                  }
            }
           
            if(marcada == 1 && branca ==4){
                for (int k=0; k <questoes.size(); k++){
                    if(questoes[k] <= 127){
                        cout << char('A' + k) << endl;
                    }
                }
            }else{
            cout << '*' << endl;
            }
        }
    }
    return 0;
}
