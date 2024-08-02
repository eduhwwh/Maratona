#include <bits/stdc++.h>

using namespace std;

bool NaoSei(const string& S) {
    if (S.length() < 6 || S.length() > 32) return false;

    bool hasUpper = false, hasLower = false, hasDigit = false;

    for (char C : S) {
        if (isupper(C)) hasUpper = true;
        if (islower(C)) hasLower = true;
        if (isdigit(C)) hasDigit = true;

        
        if (ispunct(C) || isspace(C)) return false;
    }

    return hasUpper && hasLower && hasDigit;
}

int main() {
    string S;

    while (getline(cin, S)) {
        if (NaoSei(S)) {
            cout << "Senha valida." << endl;
        } else {
            cout << "Senha invalida." << endl;
        }
    }

    return 0;
}