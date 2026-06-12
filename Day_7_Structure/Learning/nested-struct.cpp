#include <iostream>
using namespace std;

struct Address {
    string city;
    int pincode;
};
struct Student {
    string name;
    Address addr; 
};
int main(){
	Student s1 = {"Alice", {"New York", 10001}};
	cout << "\nStudent Details:\n";
    cout << "Name: " << s1.name << endl;
    cout << "City: " << s1.addr.city << endl;
    cout << "Pin Code: " << s1.addr.pincode << endl;
}
