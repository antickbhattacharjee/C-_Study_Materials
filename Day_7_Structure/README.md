# Day 7: Structures

## 📖 Definition
A `struct` (structure) in C++ is a user-defined data type that allows you to combine data items of different kinds under a single name. Unlike arrays, which hold multiple variables of the *same* type, structures can hold multiple variables of *different* types.

## 💻 Examples
```cpp
#include <iostream>
using namespace std;

// Structure Definition
struct Student {
    string name;
    int rollNumber;
    float marks;
};

int main() {
    // Creating a struct instance
    Student s1;
    s1.name = "Alice";
    s1.rollNumber = 101;
    s1.marks = 92.5;

    cout << "Student: " << s1.name << " (Roll: " << s1.rollNumber << ")" << endl;
    
    return 0;
}
```

## 🔄 Differences to Note
- **Array vs Structure**: Arrays group elements of the same type. Structures group elements of varying types into a unified custom record.
- **Structure vs Class (OOP)**: In C++, structures and classes are almost identical, but by default, members of a `struct` are `public`, whereas members of a `class` are `private`.

## 📝 Assignments & Learning
- **Learning**: Learn to define structures, use arrays of structures, nest structures within each other, and include functions inside structures.
- **Assignments**: Real-world modeling tasks representing complex entities using structured data types.
