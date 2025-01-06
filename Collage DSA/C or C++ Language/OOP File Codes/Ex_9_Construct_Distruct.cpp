// Write  a  C++ program to initialize objects using  the  default  constructor of  a 
// class  and also trace  the  calling  of destructors  for  those  objects
#include <iostream>
using namespace std;

class MyClass {
public:
    // Default constructor
    MyClass() {
        cout << "Default constructor called" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    // Create an object of MyClass
    MyClass obj1;  // Default constructor is called here

    // Create another object of MyClass
    MyClass obj2;  // Default constructor is called here

    // obj1 and obj2 go out of scope here, so the destructors are called

    return 0;
}
