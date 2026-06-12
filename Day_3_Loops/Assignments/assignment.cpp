#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number to print its multiplication table: ";
    cin >> num;

    cout << "\nUsing FOR loop:\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    cout << "\nUsing WHILE loop:\n";
    int j = 1;
    while (j <= 10) {
        cout << num << " x " << j << " = " << num * j << endl;
        j++;
    }

    cout << "\nUsing DO-WHILE loop:\n";
    int k = 1;
    do {
        cout << num << " x " << k << " = " << num * k << endl;
        k++;
    } while (k <= 10);

    return 0;
}

