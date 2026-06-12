#include <iostream>
using namespace std;

int main() {
    string name;
    int vowelCount = 0;

    cout << "Enter a name: ";
    cin >> name;

    for (int i = 0; i < name.length(); i++) {
        char ch = name[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
			ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
				{
            		vowelCount++;
        		}
    }

    cout << "Name: " << name << " Vowels: " << vowelCount << endl;

    return 0;
}

