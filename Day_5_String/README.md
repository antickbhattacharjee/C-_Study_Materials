# Day 5: Strings

## 📖 Definition
In C++, strings can be represented as arrays of characters (`char` arrays) or by using the `std::string` class. The `std::string` class provides many built-in methods to manipulate text effectively.

## 💻 Examples
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string greeting = "Hello";
    string name = "World";
    
    // Concatenation
    string fullGreeting = greeting + " " + name + "!";
    
    // Finding length
    cout << fullGreeting << endl;
    cout << "Length: " << fullGreeting.length() << endl;

    return 0;
}
```

## 🔄 Differences to Note
- **C-style Strings (`char[]`) vs `std::string`**: C-style strings are null-terminated character arrays, which require manual memory management and utility functions from `<cstring>`. `std::string` handles memory automatically and provides a much richer set of methods (e.g., `.length()`, `.append()`, `.substr()`).
- **`cin` vs `getline()`**: `cin >> str` stops reading at the first whitespace. `getline(cin, str)` reads an entire line, including spaces, until the user hits Enter.

## 📝 Assignments & Learning
- **Learning**: Learn about string declaration, reading complete lines using `getline`, using basic string functions, and finding substrings.
- **Assignments**: Practice text processing, string concatenation, parsing characters, and validating text input.
