#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};
// Function to display student details
void input_output(Student s){
	cout << "\nStudent Data Entry:\n";
	cout << "Roll: ";
	cin >> s.roll;
	cout << "Name: ";
	cin >> s.name;
	cout << "Marks: ";
	cin >> s.marks;
	cout << "\nStudent Info:\n";
    cout << "Roll: " << s.roll << "\nName: " << s.name << "\nMarks: " << s.marks << endl;
}

int main() {
Student s1;
    input_output(s1);
    return 0;
}
