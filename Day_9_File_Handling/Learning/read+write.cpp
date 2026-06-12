#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("sample.txt", ios::out);  // open for writing
    file << "C++ file handling demo.";
    file.close();

    file.open("sample.txt", ios::in);      // open for reading
    string content;
    getline(file, content);
    cout << content << endl;
    file.close();
    return 0;
}

