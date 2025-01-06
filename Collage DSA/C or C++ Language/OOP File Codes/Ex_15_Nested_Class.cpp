//  Write a C++  program  to  implement  the  concept  of  nested class. 
#include <iostream>
using namespace std;

// Outer class
class Outer {
public:
    int outer_x = 10;

    // Nested class
    class Inner {
    public:
        int inner_y = 20;
    };

    // Function to create an object of the nested class
    Inner createInner() {
        return Inner();
    }
};

int main() {
    // Create an object of the outer class
    Outer outer;

    // Create an object of the nested class
    Outer::Inner inner = outer.createInner();

    cout << "Outer x: " << outer.outer_x << endl;
    cout << "Inner y: " << inner.inner_y << endl;

    return 0;
}
