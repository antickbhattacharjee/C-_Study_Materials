#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data2.txt", ios::app); // open file in append mode

    if (file.is_open()) {
        file << "This is appended text.\n";
        file.close();
        cout << "Data appended successfully.\n";
    } else {
        cout << "Failed to open the file.\n";
    }

    return 0;
}
