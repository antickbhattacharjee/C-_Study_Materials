#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    float marks;
    
};

int main() {
    Student rupam; // Create Object

    rupam.roll = 10;
    rupam.marks = 95.5;
    cout << rupam.roll << endl;
    cout << rupam.marks;
    
}
