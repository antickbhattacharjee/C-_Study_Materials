#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

// Helper function for older compilers
string intToString(int num) {
    stringstream ss;
    ss << num;
    return ss.str();
}

class Student {
public:
    string name, email, password;
    int roll, marks, id;

    Student(string n, int r, string e, int m, int i, string p)
        : name(n), roll(r), email(e), marks(m), id(i), password(p) {}

    void viewProfile() {
        cout << "\n--- Student Profile ---\n";
        cout << "Name: " << name << "\nRoll: " << roll << "\nEmail: " << email
             << "\nMarks: " << marks << "\nID: " << id << endl;
    }

    string toFileString() const {
        return name + "|" + intToString(roll) + "|" + email + "|" +
               intToString(marks) + "|" + intToString(id) + "|" + password + "\n";
    }
};

// Function to load students from file
vector<Student> loadStudents() {
    vector<Student> students;
    ifstream file("data.txt");
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string name, email, pass, temp;
        int roll, marks, id;

        getline(ss, name, '|');
        getline(ss, temp, '|'); roll = stoi(temp);
        getline(ss, email, '|');
        getline(ss, temp, '|'); marks = stoi(temp);
        getline(ss, temp, '|'); id = stoi(temp);
        getline(ss, pass);

        students.emplace_back(name, roll, email, marks, id, pass);
    }
    file.close();
    return students;
}

// Function to save students to file
void saveStudents(const vector<Student>& students) {
    ofstream file("data.txt", ios::trunc);
    for (const Student& s : students) {
        file << s.toFileString();
    }
    file.close();
}

bool isUniqueID(int id, const vector<Student>& students) {
    for (const Student& s : students) {
        if (s.id == id) return false;
    }
    return true;
}

// Signup function
void signUp(vector<Student>& students) {
    string name, email, pass;
    int roll, id;

    cout << "\n--- Sign Up ---\n";
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Roll: ";
    cin >> roll;
    cout << "Enter Email: ";
    cin >> email;
    cout << "Create Student ID: ";
    cin >> id;

    if (!isUniqueID(id, students)) {
        cout << "ID already exists!\n";
        return;
    }

    cout << "Set Password: ";
    cin >> pass;
    int marks = 0; // default, only admin can set marks

    students.emplace_back(name, roll, email, marks, id, pass);
    saveStudents(students);
    cout << "Registration successful. Please login now.\n";
}

// Admin panel
void adminPortal(vector<Student>& students) {
    cout << "\n--- Admin Panel ---\n";
    cout << "List of Students:\n";
    for (const Student& s : students) {
        cout << "ID: " << s.id << ", Name: " << s.name << ", Marks: " << s.marks << endl;
    }

    int targetId, newMarks;
    cout << "\nEnter Student ID to update marks: ";
    cin >> targetId;
    bool found = false;

    for (Student& s : students) {
        if (s.id == targetId) {
            cout << "Enter new marks: ";
            cin >> newMarks;
            s.marks = newMarks;
            found = true;
            break;
        }
    }

    if (found) {
        saveStudents(students);
        cout << "Marks updated successfully.\n";
    } else {
        cout << "Student ID not found.\n";
    }

    cout << "\nAdmin logged out.\n";
}

// Login function (Student or Admin)
void login(vector<Student>& students) {
    string user, pass;
    cout << "\n--- Login ---\n";
    cout << "Enter ID or username: ";
    cin >> user;
    cout << "Enter Password: ";
    cin >> pass;

    if (user == "admin" && pass == "admin") {
        adminPortal(students);
        return;
    }

    bool found = false;
    for (Student& s : students) {
        if (intToString(s.id) == user && s.password == pass) {
            cout << "Login successful!\n";
            s.viewProfile();
            cout << "\nLogging out...\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Login failed. Invalid credentials.\n";
    }
}

int main() {
    vector<Student> students = loadStudents();
    string action;

    cout << "==== Student Management System ====\n";

    cout << "Do you want to login or signup? (login/signup): ";
    cin >> action;

    if (action == "signup") {
        signUp(students);
        login(students);
    } else if (action == "login") {
        login(students);
    } else {
        cout << "Invalid choice.\n";
    }

    cout << "\nThank you. System logged out.\n";
    return 0;
}

