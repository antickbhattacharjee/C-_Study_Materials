/*
?? Definition:
Inheritance is the mechanism by which a class (child or derived) 
inherits properties and behaviors of another class (base or parent).

?? Explanation:
Dog inherits from Animal.
Dog object can call both sound() (inherited) and bark() (own).
This supports code reuse and a hierarchical class design.
*/

#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.sound();  // Inherited from Animal
    d.bark();   // Specific to Dog
    return 0;
}

