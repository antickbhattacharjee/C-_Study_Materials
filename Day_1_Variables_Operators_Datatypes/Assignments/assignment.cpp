#include <iostream>
using namespace std;

int main() {
	int a, b, temp;
	cout<<"Enter a and b : ";
	cin>>a>>b;
	cout<<"a is "<<a<<"\tb is "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"a after swap "<<a<<"\tb after swap "<<b<<endl;

}
