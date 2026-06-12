/*
?? Definition:
Abstraction means showing only essential features of 
an object while hiding the background details.

?? Explanation:
The user just calls printDocument() — no need to know how printing works internally.
Only essential operations are exposed. 
Complex implementation (e.g., sending to printer hardware) is hidden.
This simplifies the interface — you use it, not build it.
*/
#include <iostream>
using namespace std;

class Printer {
public:
    void printDocument() {
        connectPrinter();         // Hidden internal steps
        sendDataToPrinter();
        cout << "Document printed successfully." << endl;
    }

private:
    void connectPrinter() {
        cout << "Connecting to printer..." << endl;
    }

    void sendDataToPrinter() {
        cout << "Sending data to printer..." << endl;
    }
};

int main() {
    Printer p;
    p.printDocument();  // User only sees this simple call
    return 0;
}


