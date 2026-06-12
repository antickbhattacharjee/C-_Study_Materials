#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;  // base case
    else
        return n * factorial(n - 1);  // recursive call
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}


/*
5 -> 5 * factorial(4)
4 -> 5* 4* factorial(3)
3 -> 5*4*3*factorial(2)
2 -> 5*4*3*2*factorial(1)
1 -> 5*4*3*2*1 = 120
*/
