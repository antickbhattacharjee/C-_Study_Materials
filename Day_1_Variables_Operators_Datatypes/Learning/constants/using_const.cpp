#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159;
    const int MAX_USERS = 100;

     PI = 3.2;  // ? Error: assignment of read-only variable

    cout << "Pi: " << PI << ", Max Users: " << MAX_USERS << endl;
    return 0;
}
