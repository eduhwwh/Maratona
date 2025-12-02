#include <bits/stdc++.h>
using namespace std;

int main() {
    int quant;
    cin >> quant;

    for (int i = 0; i < quant; i++) {
        int num1, num2;
        
        cin >> num1;
        cin >> num2;

        string str1 = to_string(num1);
        string str2 = to_string(num2);

        if (str1.size() >= str2.size() && str1.substr(str1.size() - str2.size()) == str2) {
            cout << "encaixa" << endl;
        } else {
            cout << "nao encaixa" << endl;
        }
    }
    return 0;
}