#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, si;
    cout << "Enter Principal, Rate, Time: ";
    cin >> principal >> rate >> time;

    si = (principal * rate * time) / (float)100;
    cout << "Simple Interest = " << si << endl;

    return 0;
}
