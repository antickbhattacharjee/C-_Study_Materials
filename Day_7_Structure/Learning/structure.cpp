#include <iostream>
using namespace std;

// Structure declaration
struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
//    Student s1 = {11,"Antick",67};
	Student s1;
    // Input
    cout << "Enter roll: ";
    cin >> s1.roll;
    cin.ignore();  // Clear newline character from buffer
    cout << "Enter name: ";
    getline(cin, s1.name);
    cout << "Enter marks: ";
    cin >> s1.marks;

    // Output
    cout << "\nStudent Details:\n";
    cout << "Roll: " << s1.roll << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}

