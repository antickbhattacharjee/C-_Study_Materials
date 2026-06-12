#include <iostream>
#include<string>
using namespace std;

void greet() {
    cout << "Hello! Welcome to C++ functions.\n";
}
void greetUser() {
	string name;
	cin>>name;
    cout << "Hello, " << name << "!\n";
}

int main() {
    greet();  // function call
    greetUser();

    return 0;
}

