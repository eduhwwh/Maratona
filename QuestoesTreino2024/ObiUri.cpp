#include <bits/stdc++.h>
 
using namespace std;

int main() {
  int n;
  
  cin >> n;

  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;

    if (s.size() == 3) {
      if (s.substr(0, s.size() -1) == "OB") s[s.size()-1] = 'I';
      else if (s.substr(0, s.size() -1) == "UR") s[s.size()-1] = 'I';
    }

    cout << s;

    if (i != n - 1) {
      cout << " ";
    }
  }

  cout << endl;
  
  return 0;
}