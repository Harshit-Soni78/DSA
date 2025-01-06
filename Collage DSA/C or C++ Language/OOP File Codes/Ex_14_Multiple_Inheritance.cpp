// Write a C++  program  to  implement  multilevel  inheritance. 
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// First derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

// Second derived class
class Puppy : public Dog {
public:
    void weep() {
        cout << "Weeping..." << endl;
    }
};

int main() {
    Puppy p1;
    p1.eat();  // Calling function from base class
    p1.bark();  // Calling function from first derived class
    p1.weep();  // Calling function from second derived class
    return 0;
}
