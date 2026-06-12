# Day 1: Variables, Operators, and Data Types

## 📖 Definition
- **Data Types**: Specify the type of data that a variable can hold (e.g., `int` for integers, `float` for floating-point numbers, `char` for characters).
- **Variables**: Named storage locations in memory holding a specific type of data.
- **Operators**: Symbols that perform operations on variables and values (e.g., Arithmetic `+`, `-`, `*`, `/`, Logical `&&`, `||`, Relational `==`, `!=`).

## 💻 Examples
```cpp
#include <iostream>
using namespace std;

int main() {
    // Data Types and Variables
    int age = 20;
    float height = 5.9;
    char grade = 'A';
    
    // Operators
    int newAge = age + 1; // Arithmetic operator +
    bool isAdult = (age >= 18); // Relational operator >=
    
    cout << "Age next year: " << newAge << endl;
    return 0;
}
```

## 🔄 Differences to Note
- **`int` vs `float`**: `int` stores whole numbers (e.g., 5), whereas `float` stores decimal numbers (e.g., 5.99).
- **`=` vs `==`**: `=` is the assignment operator used to assign values to a variable. `==` is a relational operator used to compare two values.

## 📝 Assignments & Learning
- **Learning**: Code inside the `Learning` directory demonstrates basic variable declaration, taking user inputs, multiple variables, and basic arithmetic.
- **Assignments**: The `Assignments` directory contains practice problems focused on applying basic arithmetic and taking multiple inputs to produce a calculated output.
