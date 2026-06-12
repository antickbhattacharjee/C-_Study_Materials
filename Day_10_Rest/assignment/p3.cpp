#include <iostream>
using namespace std;
int main() {
    double purchaseAmount;
	int isPremiumMember;
	
    cout << "Enter total purchase amount: ";
    cin >> purchaseAmount;
    cout << "Have membership?(0 for no, 1 for yes) ";
    cin >> isPremiumMember;

    double finalAmount = purchaseAmount;

    if (purchaseAmount >= 100.0) {
        if (isPremiumMember==1) {
            finalAmount = purchaseAmount * 0.85; // 15% discount (pay 85%)
        } 
		else {
            finalAmount = purchaseAmount * 0.90; // 10% discount (pay 90%)
        }
    }

    cout << "Final amount: $" << finalAmount << endl;

    return 0;
}
