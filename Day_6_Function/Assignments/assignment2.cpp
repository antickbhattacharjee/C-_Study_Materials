#include <iostream>
#include <string>
using namespace std;

// Recursive function to check palindrome
bool isPalindrome(const string& str, int start, int end) {
    if (start >= end){
        return true;
    }
    if (str[start] != str[end]){
        return false;
    }
    cout<<"str: "<<str<<" start: "<<str[start + 1]<<" end: "<<str[end - 1]<<endl;
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
	cout<<"str: "<<input<<" start: "<<input[0]<<" end: "<<input[input.length() - 1]<<endl;
    if (isPalindrome(input, 0, input.length() - 1)){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not a Palindrome" << endl;
	}
    return 0;
}


/*
input -> level

*/
