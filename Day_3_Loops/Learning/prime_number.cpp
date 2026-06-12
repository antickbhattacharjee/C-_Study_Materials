#include <iostream>
using namespace std;
int main() {
    int n=7;
    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
        return 0;
    }
    bool is_prime = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }
    if (is_prime==true) {
        cout << n << " is a prime number." << endl;
    } 
	else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
