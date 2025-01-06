//  Write a C++  program  to  implement  simple  inheritance. 
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog dog1;
    dog1.eat();  // Calling function from base class
    dog1.bark();  // Calling function from derived class
    return 0;
}
