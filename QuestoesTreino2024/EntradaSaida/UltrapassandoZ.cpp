#include <iostream>

using namespace std;

int main (){
	int x;
	int z;
    
	cin >> x >> z;

	int s,c = 0;
	while(z <= x){
        
		cin >> z;
	}

	while(s <= z){
		s += x;
		++x;
		c++;
	}

	cout << c << endl;
	
	return 0;
}