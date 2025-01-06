// Write a C++  program to add two complex numbers by  overloading the + 
// operator.
#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    // Constructor to initialize real and imaginary parts
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Overloading the + operator
    Complex operator + (Complex const &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res; 
    }

    void print() {
        cout << real << " + i" << imag << endl;
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    c3.print();
}
