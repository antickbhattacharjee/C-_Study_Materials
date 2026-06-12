# Day 3: Loops

## 📖 Definition
Loops are used to execute a block of code repeatedly as long as a specified condition is true. They help avoid code duplication and manage repetitive tasks.

## 💻 Examples
```cpp
#include <iostream>
using namespace std;

int main() {
    // For Loop
    cout << "For loop: ";
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // While Loop
    cout << "While loop: ";
    int j = 0;
    while (j < 5) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    return 0;
}
```

## 🔄 Differences to Note
- **`for` loop vs `while` loop**: Use a `for` loop when the number of iterations is known beforehand (e.g., iterating over an array). Use a `while` loop when the number of iterations is unknown and depends on a dynamic condition.
- **`while` vs `do-while`**: A `while` loop checks the condition *before* executing the block (might not execute at all). A `do-while` loop executes the block at least once, checking the condition *after* execution.

## 📝 Assignments & Learning
- **Learning**: The `Learning` folder covers `for`, `while`, and `do-while` loops, along with simple patterns, Fibonacci series generation, and prime number checks.
- **Assignments**: The `Assignments` directory tasks you with generating more complex patterns, calculating series sums, and applying loops for basic data processing.
