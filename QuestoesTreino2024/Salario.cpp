#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    int funcionario, hora;
    float sala;
    
    cin >> funcionario >> hora >> sala;
    
    float resu = 0;
    
    resu = hora * sala;
    
    cout << "NUMBER = " << funcionario << endl;
    cout <<  fixed << setprecision(2) << "SALARY = U$ " << resu << endl;
 
    return 0;
}