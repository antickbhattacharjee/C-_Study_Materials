#include <iostream>
using namespace std;
int main() {
    int unitsConsumed;
    double electricityCharge = 0.0;
    const double METER_CHARGE = 50.0;
    double surchargeAmount = 0.0;
    double totalBillBeforeSurcharge;
    double finalBillAmount;

  	cout<<"Enter unit consumed: ";
  	cin>>unitsConsumed;
  	
  	if (unitsConsumed <= 50){
  		electricityCharge = (unitsConsumed * 0.5);
  		totalBillBeforeSurcharge = electricityCharge + METER_CHARGE;
		finalBillAmount = electricityCharge + METER_CHARGE;
	  }
	else if (unitsConsumed <= 150){
		electricityCharge = ((unitsConsumed - 50) * 0.75) + (50 * 0.5);
		totalBillBeforeSurcharge = electricityCharge + METER_CHARGE;
		finalBillAmount = electricityCharge + METER_CHARGE;
	}
	else if (unitsConsumed <= 250){
		electricityCharge = ((unitsConsumed - 150) * 1.2) + (100 * 0.75) + (50 * 0.5);
		totalBillBeforeSurcharge = electricityCharge + METER_CHARGE;
		finalBillAmount = electricityCharge + METER_CHARGE;
	}
	else {
		electricityCharge = ((unitsConsumed - 250) * 1.5) + (100 * 1.2) + (100 * 0.75) + (50 * 0.5);
		totalBillBeforeSurcharge = electricityCharge + METER_CHARGE;
		finalBillAmount = electricityCharge + METER_CHARGE;
	}
	
	if (totalBillBeforeSurcharge >= 400){
		surchargeAmount = totalBillBeforeSurcharge * 0.2 ;
		finalBillAmount = totalBillBeforeSurcharge + surchargeAmount;
	}
  	
  	cout << "Total Units Consumed: " << unitsConsumed << endl;
    cout << "Electricity Charge: $ " << electricityCharge << endl;
    cout << "Meter Charge: $ " << METER_CHARGE << endl;
    cout << "Surcharge (20%): $ " << surchargeAmount << endl;
    cout << "Final Bill Amount: $ " << finalBillAmount << endl;

    return 0;
}
