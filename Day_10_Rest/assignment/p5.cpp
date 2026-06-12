#include <iostream>
using namespace std;

int main() {
    string name, topStudent;
    int subjectMark, total, maxTotal = -1;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter name of student " << i << ": ";
        cin >> name;

        total = 0;
        for (int j = 1; j <= 3; j++) {
            cout << "Enter marks for subject " << j << ": ";
            cin >> subjectMark;
            total += subjectMark;
        }

        cout << "Total marks of " << name << ": " << total << endl;

        if (total > maxTotal) {
            maxTotal = total;
            topStudent = name;
        }
    }

    cout << "\nTopper is " << topStudent << " with total marks = " << maxTotal << endl;

    return 0;
}

