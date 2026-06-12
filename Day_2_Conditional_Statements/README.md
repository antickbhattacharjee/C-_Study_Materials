# Day 2: Conditional Statements

## 📖 Definition
Conditional statements allow a program to make decisions and execute different blocks of code based on whether a given condition evaluates to true or false.

## 💻 Examples
```cpp
#include <iostream>
using namespace std;

int main() {
    int score = 85;

    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else {
        cout << "Grade: C or below" << endl;
    }
    
    return 0;
}
```

## 🔄 Differences to Note
- **`if` vs `else if`**: `if` checks a primary condition. `else if` checks secondary conditions only if the preceding `if` (or `else if`) condition was false.
- **`if` vs `switch`**: `if-else` is versatile and can check ranges or complex boolean expressions. `switch` is mostly used for checking equality against discrete values (like integers or characters) and can be cleaner for multiple distinct cases.

## 📝 Assignments & Learning
- **Learning**: The `Learning` folder contains examples of `if`, `if-else`, `else-if` ladders, and nested conditionals.
- **Assignments**: The `Assignments` folder contains practice problems where you evaluate different conditions, handle edge cases, and print appropriate outputs based on complex boolean logic.
