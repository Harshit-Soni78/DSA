// Write  a  C++  program  to  implement  a class  and  access  the  data  members  and 
// member functions  using  its objects. 
#include <iostream>
using namespace std;

// Define a class named 'MyClass'
class MyClass {
public:
    // Data member
    int myNumber;

    // Member function
    void printNumber() {
        cout << "The number is: " << myNumber << endl;
    }
};

int main() {
    // Create an object of MyClass
    MyClass obj;

    // Access data member and assign a value
    obj.myNumber = 5;

    // Access member function
    obj.printNumber();

    return 0;
}
