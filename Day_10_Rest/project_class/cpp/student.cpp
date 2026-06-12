#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

struct Student {
    string name;
    int roll;
    string mail;
    int marks;
    int id;
    string pass;
};

const int MAX_STUDENTS = 100;
Student students[MAX_STUDENTS] = {
    {"Shourjya Sarkar", 31, "shourjyasarkar131@gmail.com", 463, 2006, "shourjya2006"},
    {"Supriyo Adak", 43, "supriyoadak23@gmail.com", 478, 2007, "supriyo2007"},
    {"Sayan Das", 33, "sayandas566@gmail.com", 432, 2005, "sayan2005"}
};
int studentCount = 3;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");

    string action;
    input >> action;

    if (action == "signup") {
        if (studentCount >= MAX_STUDENTS) {
            output << "Registration limit reached!";
            return 0;
        }

        Student newStudent;
        input.ignore();
        getline(input, newStudent.name);
        input >> newStudent.roll >> newStudent.mail >> newStudent.marks >> newStudent.id >> newStudent.pass;

        for (int i = 0; i < studentCount; i++) {
            if (students[i].id == newStudent.id) {
                output << "ID already exists.";
                return 0;
            }
        }

        students[studentCount++] = newStudent;
        output << "Registration Successful!";
    } else if (action == "login") {
        int id;
        string pass;
        input >> id >> pass;
        bool found = false;

        for (int i = 0; i < studentCount; i++) {
            if (students[i].id == id) {
                found = true;
                if (students[i].pass == pass) {
                    output << "Login Successful\n";
                    output << "Name: " << students[i].name << "\n";
                    output << "Roll: " << students[i].roll << "\n";
                    output << "E-mail: " << students[i].mail << "\n";
                    output << "Marks: " << students[i].marks << "\n";
                } else {
                    output << "Wrong password!";
                }
                break;
            }
        }

        if (!found) output << "ID not found!";
    } else {
        output << "Invalid action!";
    }

    input.close();
    output.close();
    return 0;
}
