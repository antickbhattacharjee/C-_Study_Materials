# Day 4: Arrays

## 📖 Definition
An array is a collection of elements of the same data type stored in contiguous memory locations. Elements can be accessed via their zero-based index. Arrays can be 1D, 2D, or Multi-dimensional.

## 💻 Examples
```cpp
#include <iostream>
using namespace std;

int main() {
    // 1D Array
    int numbers[5] = {10, 20, 30, 40, 50};
    cout << "First element: " << numbers[0] << endl;

    // 2D Array
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    cout << "Row 2, Col 3: " << matrix[1][2] << endl;

    return 0;
}
```

## 🔄 Differences to Note
- **Arrays vs Individual Variables**: Arrays group related data under one name using indices, drastically reducing the number of variables you need to declare manually.
- **1D vs 2D Arrays**: 1D arrays are like a single row or list of items. 2D arrays represent a grid or table with rows and columns (matrices).

## 📝 Assignments & Learning
- **Learning**: The `Learning` folder contains basic 1D arrays, understanding the `sizeof` operator, 2D array structures, and 3D arrays.
- **Assignments**: The `Assignments` directory focuses on array traversals, finding maximums/minimums, and matrix-based calculations.
