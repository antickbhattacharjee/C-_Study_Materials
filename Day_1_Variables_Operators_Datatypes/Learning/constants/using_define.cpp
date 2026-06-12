#include <iostream>
#define DISCOUNT 10
#define WEBSITE "www.example.com"
using namespace std;

int main() {
    int price = 100;
    int finalPrice = price - DISCOUNT;

    cout << "Final Price: " << finalPrice << endl;
    cout << "Visit: " << WEBSITE << endl;

    return 0;
}

