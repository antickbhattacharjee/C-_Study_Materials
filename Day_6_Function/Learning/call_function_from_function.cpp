#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

void printSum(int x, int y) {
    int result = add(x, y);  // calling add() inside printSum()
    cout << "Sum is: " << result << endl;
}

int main() {
    printSum(10, 20);
    return 0;
}
