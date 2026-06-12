#include <iostream>
using namespace std;
/*
int main(){
	int a = 10;
	(a>=10) ? cout<<"True" : cout<<"False"; //Ternary operator
	// (Condition) ? Execution for True : Execution for False;
}
*/
/*
int main() {
    int age = 16;
	(age>18) ? 
		cout<<"You are adult" :
		(age==18) ? 
			cout<<"You are 18 years old" : 
			cout<<"You are minor";
	return 0;
}
*/

int main() {
    int a = 10, b = 20, c = 15, d = 5;
    int max = (a > b && a > c && a > d) ? a : 
			  (b > a && b > c && b > d) ? b : 
			  (c > a && c > b && c > d) ? c : d;
    cout << "Maximum is: " << max << endl;
    
    int min = (a < b && a < c && a < d) ? a : 
			  (b < a && b < c && b < d) ? b : 
			  (c < a && c < b && c < d) ? c : d;
    cout << "Minimun is: " << min << endl;
    return 0;
}

