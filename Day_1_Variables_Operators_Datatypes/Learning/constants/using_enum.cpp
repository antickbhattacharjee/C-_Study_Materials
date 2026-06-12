#include <iostream>
using namespace std;

enum Day { SUN, MON, TUE, WED, THU, FRI, SAT };

int main() {
    Day today = WED;

    cout << "Numeric value of WED is: " << today << endl;  // Output: 3

    return 0;
}

