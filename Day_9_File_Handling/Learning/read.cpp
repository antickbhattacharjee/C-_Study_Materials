#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("data.cpp"); // open file to read
    string line;

    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close(); // close file after reading
    } else {
        cout << "File not found.";
    }

    return 0;
}
