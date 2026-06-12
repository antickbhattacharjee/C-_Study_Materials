#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Write
    ofstream out("student.txt");
    out << "Name: John\n";
    out << "Marks: 85\n";
    out.close();

    // Read
    ifstream in("student.txt");
    string line;
    while (getline(in, line)) {
        cout << line << endl;
    }
    in.close();
    return 0;
}

