/*
?? Definition:
Polymorphism means one name, many forms. 
It allows a function or object to behave differently in different contexts.

?? Explanation:
Two add() functions exist with different parameters.
Based on the input type, the correct version is automatically selected.
This is compile-time polymorphism (also called static polymorphism).
*/

#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }
    float add(int a, float b) {
        return a + b;
    }
};

int main() {
    Calculator c;
    cout << c.add(5, 3) << endl;
    cout << c.add(2.0f, 3.3f) << endl;
    cout << c.add(5,3.4f) << endl;
    return 0;
}

