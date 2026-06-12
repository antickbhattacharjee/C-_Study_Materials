#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Default Constructor Called" << endl;
    }
};

int main() {
    Demo d;  // Constructor runs automatically
    return 0;
}

