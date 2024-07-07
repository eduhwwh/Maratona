#include <bits/stdc++.h>

using namespace std;
 
int main() {
    
    string Nome;
    double salaFixo, salaFinal = 0, total;
    
    cin >> Nome >> salaFixo >> total;
    
    double comissao = 0;
    
    comissao = 0.15 * total;
    
    salaFinal = salaFixo + comissao;

    cout <<  fixed << setprecision(2) << "TOTAL = R$ " << salaFinal << endl;
 
    return 0;
}