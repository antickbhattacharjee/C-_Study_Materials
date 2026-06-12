#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("data.cpp"); // create and open file

    if (outFile.is_open()) {
        outFile << "#include <iostream>\n";
        outFile << "using namespace std;\n";
        outFile << "int main() {\n";
        outFile << "cout << \"Data updated!\";\n";
        outFile << "}\n";
        outFile.close(); // close file after writing
        cout << "Data updated successfully!";
    } else {
        cout << "Unable to open file.";
    }

    return 0;
}

