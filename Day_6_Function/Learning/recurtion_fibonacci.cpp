#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0){
        return 0;  // base case
    }
    else if (n == 1){
        return 1;  // base case
    }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);  // recursive call
    }
}

int main() {
    int terms;
    cout << "Enter number of terms: ";
    cin >> terms;
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
/*
0 1 1 2 3 5 8 13 21 34
*/
