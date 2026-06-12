#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student students[3];

    // Input for multiple students
    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        cout << "Roll: ";
        cin >> students[i].roll;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Marks: ";
        cin >> students[i].marks;
    }

    // Display all
    cout << "\nAll Student Records:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << " - Roll: " << students[i].roll
		<< ", Name: " << students[i].name << ", Marks: " 
		<< students[i].marks << endl;
    }

    return 0;
}

