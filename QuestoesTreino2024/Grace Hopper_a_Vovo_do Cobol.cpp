#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string linha, palavra, cobol;
    while (getline(cin, linha)) {
        istringstream iss(linha);
        cobol = "";
        while (getline(iss, palavra, '-')) {
            char i = tolower(palavra[0]);
            char f = tolower(palavra[palavra.length() - 1]);
            if (cobol.length() == 0 && (i == 'c' || f == 'c')) {
                cobol += 'c';
            } else if (cobol.length() == 1 && (i == 'o' || f == 'o')) {
                cobol += 'o';
            } else if (cobol.length() == 2 && (i == 'b' || f == 'b')) {
                cobol += 'b';
            } else if (cobol.length() == 3 && (i == 'o' || f == 'o')) {
                cobol += 'o';
            } else if (cobol.length() == 4 && (i == 'l' || f == 'l')) {
                cobol += 'l';
            }
        }

        if (cobol == "cobol") {
            cout << "GRACE HOPPER" << endl;
        } else {
            cout << "BUG" << endl;
        }
    }
    return 0;
}