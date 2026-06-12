#include<iostream>
#include<string>
using namespace std;
int main(){
	string line = "Lets start c++ programming";
	
	size_t word = line.find("start");
	
	cout << word << endl;
	
	if (word == string::npos){
		cout << "\"Word\" not found.\n";
	}
	else{
		cout << "\"Word\" found at position: " << word << endl;
	}
	
 }
