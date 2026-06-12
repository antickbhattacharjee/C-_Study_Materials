#include <iostream>
using namespace std;

int main() {

int num = -20;
if (num > 0) {
    if (num % 2 == 0)
        cout << "Positive Even";
    else
        cout << "Positive Odd";
}
else
	cout<<"Negative";

return 0;
}
