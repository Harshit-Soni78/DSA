//  Write  a C++ program  to  add  private  data  members  of  two  different classes 
// using a friend  function.
#include <iostream>
using namespace std;

// Forward declaration of class B
class B;

class A {
private:
    int numA;

public:
    A() : numA(12) {}

    // Friend function
    friend int add(A, B);
};

class B {
private:
    int numB;

public:
    B() : numB(1) {}

    // Friend function
    friend int add(A, B);
};

// Function add() is the friend function of classes A and B
// that accesses the member variables numA and numB
int add(A objectA, B objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    A objectA;
    B objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}
