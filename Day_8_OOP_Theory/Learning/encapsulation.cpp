/*
?? Definition:
Encapsulation is the process of binding data and functions into a class, 
and restricting direct access to that data to protect it from outside interference.

?? Explanation:
name and age are private — they cannot be accessed directly.
setData() and display() are public methods that control access.
This protects the data from being altered wrongly and ensures data hiding.
*/

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s;
	s.setData("Rupam", 20);  // Set values using public method
	Student x;
	x.setData("Anupam", 54);
	s.display();              // View values using public method
	x.display();

    return 0;
}

