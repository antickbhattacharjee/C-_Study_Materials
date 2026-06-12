# Day 6: Functions

## 📖 Definition
A function is a block of reusable code that performs a specific task. It only runs when it is called. Functions help to keep your code organized, modular, and easier to debug.

## 💻 Examples
```cpp
#include <iostream>
using namespace std;

// Function Declaration
int addNumbers(int a, int b) {
    return a + b;
}

// Void Function (No return)
void greet() {
    cout << "Hello!" << endl;
}

int main() {
    greet();
    int sum = addNumbers(5, 7);
    cout << "Sum: " << sum << endl;
    return 0;
}
```

## 🔄 Differences to Note
- **Void vs Return Functions**: A `void` function executes actions (like printing) but does not return a value to the caller. A return function (like `int`, `double`) computes a value and hands it back to wherever it was called.
- **Iteration vs Recursion**: Loops (iteration) repeat code using control structures. Recursion is when a function calls itself to solve smaller instances of the same problem (e.g., calculating Factorials).

## 📝 Assignments & Learning
- **Learning**: Explores function declarations, return types (`int`, `void`), function calling from within functions, and basic recursion examples (Factorial, Fibonacci).
- **Assignments**: Practice writing custom functions and applying recursive logic to solve mathematical problems.
