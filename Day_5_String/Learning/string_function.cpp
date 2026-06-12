#include <iostream>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";
	
    // length() / size()
    cout << "Length of s1: " << s1.length() << endl;
    cout << "Size of s2: " << s2.size() << endl;

    // append()
    s1.append(" Everyone");
    cout << "After append: " << s1 << endl;

    // +
    string s3 = s1 + " and " + s2;
    cout << "Using + to join: " << s3 << endl;

    // substr(pos, len)
    string part = s3.substr(0, 5);  // Should return "Hello"
    cout << "Substring (0, 5): " << part << endl;

    // compare()
    string a = "Apple";
    string b = "Banana";
    int result = a.compare(b);
    if (result == 0)
        cout << "Strings are equal." << endl;
    else if (result < 0)
        cout << "\"" << a << "\" comes before \"" << b << "\"" << endl;
    else
        cout << "\"" << a << "\" comes after \"" << b << "\"" << endl;

    // find()
    size_t pos = s3.find("World");
    if (pos != string::npos)
        cout << "\"World\" found at position: " << pos << endl;
    else
        cout << "\"World\" not found.\n";

    // replace()
    s3.replace(0, 5, "Hi");
    cout << "After replace: " << s3 << endl;

    return 0;
}

