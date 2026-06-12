#include <iostream>
using namespace std;

int main(){
	string name;
	cin >> name;             // Reads one word
	
	getline(cin, name);      // Reads entire line
	
	cout << name;
	return 0;
}
