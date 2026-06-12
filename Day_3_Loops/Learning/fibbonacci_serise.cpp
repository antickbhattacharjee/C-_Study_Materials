#include<iostream>
using namespace std;
int main() {
    int n =10, i;
    int first = 0, second = 1, next;
    cout<<"Fibonacci Series up to "<<n<<" terms: "<<endl;
    for (i = 1; i <= n; i++) {
    	if(i==n){
    		cout<<first;
		}
		else{
			cout<<first<<", "; // Print the current term
	        next = first + second; // Calculate the next term
	        first = second;            // Update first
	        second = next;           // Update second
        }
    }
    return 0;
}
