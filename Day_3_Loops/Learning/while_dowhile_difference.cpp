#include <iostream>
using namespace std; 
int main() {
    int x = 0;
    cout << "--- While Loop ---" << endl;
    while (x < 0) { 
        cout << "This line in while loop will NOT print." << endl;
        x++;
    }
    cout << "Value of x after while loop: " << x << endl;
    cout << endl;
    x = 0; 
    cout << "--- Do-While Loop ---" << endl;
    do { 
        cout << "This line in do-while loop WILL print once." << endl;
        x++; 
    } while (x < 0);
    cout << "Value of x after do-while loop: " << x << endl; 
    return 0;
}
