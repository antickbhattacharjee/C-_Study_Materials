#include <iostream>
using namespace std;

int main() {
    int marks[2][3][4]; 

    cout << "\nEnter marks for 2 terms, 3 students, 4 subjects each:\n";
    for (int term = 0; term < 2; term++) {
        cout << "Term " << term + 1 << ":\n";
        for (int student = 0; student < 3; student++) {
            cout << "  Student " << student + 1 << ":\n";
            for (int subject = 0; subject < 4; subject++) {
                cout << "    Subject " << subject + 1 << ": ";
                cin >> marks[term][student][subject];
            }
        }
    }
    int maxTotal = 0;
    int topper = 0;

    cout << "\nTotal Marks of Each Student Across All Terms:\n";
    for (int student = 0; student < 3; student++) {
        int total = 0;
        for (int term = 0; term < 2; term++) {
            for (int subject = 0; subject < 4; subject++) {
                total += marks[term][student][subject];
            }
        }

        cout << "Student " << student + 1 << " - Total Marks: " << total << endl;

        if (total > maxTotal) {
            maxTotal = total;
            topper = student;
        }
    }

    cout << "\n Student " << topper + 1 << " has the highest total marks: " << maxTotal << endl;

    return 0;
}

