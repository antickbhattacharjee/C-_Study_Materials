#include <iostream>
using namespace std;

// Function to take input
void input(int marks[], int size) {
    cout << "Enter marks for " << size << " subjects:\n";
    for (int i = 0; i < size; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }
}

// Function to calculate total
int calculateTotal(int marks[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += marks[i];
    }
    return total;
}

// Function to display result and grade
void displayResult(int total) {
    cout << "\nTotal Marks: " << total << endl;

    float average = total / 5.0;
    char grade;

    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << "Grade: " << grade << endl;
}

// Main function
int main() {
    const int size = 5;
    int marks[size];

    input(marks, size);
    int total = calculateTotal(marks, size);
    displayResult(total);

    return 0;
}

