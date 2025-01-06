// Write a   C++    program  to  implement  constructor  overloading  by using 
// the  parameterized  constructor.
#include <iostream>
using namespace std;

class MyClass {
public:
    int a, b;

    // Default constructor
    MyClass() {
        a = 0;
        b = 0;
    }

    // Parameterized constructor with one parameter
    MyClass(int i) {
        a = i;
        b = 0;
    }

    // Parameterized constructor with two parameters
    MyClass(int i, int j) {
        a = i;
        b = j;
    }

    void display() {
        cout << "a: " << a << ", b: " << b << endl;
    }
};

int main() {
    MyClass obj1;  // Calls default constructor
    MyClass obj2(10);  // Calls constructor with one parameter
    MyClass obj3(20, 30);  // Calls constructor with two parameters

    cout << "obj1 values: ";
    obj1.display();

    cout << "obj2 values: ";
    obj2.display();

    cout << "obj3 values: ";
    obj3.display();

    return 0;
}
