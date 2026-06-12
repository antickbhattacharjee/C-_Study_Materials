# Day 8: Object-Oriented Programming (OOP) Theory

## 📖 Definition
Object-Oriented Programming (OOP) is a programming paradigm centered around objects rather than functions and logic. It binds data and functions together into a single unit (Class).

### Four Pillars of OOP:
1. **Encapsulation**: Bundling of data and methods that operate on that data within a single unit, keeping details hidden from the outside.
2. **Abstraction**: Hiding complex implementation details and showing only the essential features of an object.
3. **Inheritance**: A mechanism where a new class derives properties and characteristics from an existing class.
4. **Polymorphism**: The ability of different classes to respond to the same function call in their own specific ways.

## 💻 Examples
```cpp
#include <iostream>
using namespace std;

class Animal {
private:
    string name; // Encapsulated

public:
    // Constructor
    Animal(string n) { name = n; }
    
    void speak() {
        cout << name << " makes a sound." << endl;
    }
};

int main() {
    Animal myAnimal("Dog");
    myAnimal.speak();
    return 0;
}
```

## 🔄 Differences to Note
- **Procedural vs OOP**: Procedural programming is about writing procedures or functions that perform operations on the data, whereas OOP is about creating objects that contain both data and functions.
- **Default vs Parameterized Constructors**: A default constructor takes no arguments, whereas a parameterized constructor takes parameters to initialize objects with specific values upon creation.

## 📝 Assignments & Learning
- **Learning**: Contains theoretical and practical examples of classes, objects, access modifiers (`public`, `private`), encapsulation, inheritance, polymorphism, abstraction, and memory allocation.
- **Assignments**: Applying OOP principles to model systems and design hierarchical object architectures.
