// Write a C++ program to solve the diamond problem.
#include <iostream>
using namespace std;
 
class Grandparent {
public:
    void print() {
        cout << "This is Grandparent class" << endl;
    }
};

class Parent1 : virtual public Grandparent {
};

class Parent2 : virtual public Grandparent {
};

class Child : public Parent1, public Parent2 {
};

int main() {
    Child c;
    c.print();  // This will call the function from Grandparent class
    return 0;
}
