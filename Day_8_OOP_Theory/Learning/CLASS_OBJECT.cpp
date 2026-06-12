#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float marks;

public:
    void input() {
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll: " << roll << ", Marks: " << marks << endl;
    }
};

int main() {
    Student rupam;
    
    rupam.input();
    rupam.display();
    /*
    // Try to access private members directly:
    cout << rupam.roll; // ? This will cause a compiler error
    rupam.marks = 95.5; // ? Error: 'marks' is a private member
    */
}

