#include <iostream>
using namespace std;
class Complex
{
private:
    float real;
    float imag;
public:
    void input()
    {
        cout << "Enter real Part: ";
        cin >> real;
        cout<<"Enter Imaginary Part: ";
        cin >> imag;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void output()
    {
        if (imag < 0)
            cout << "Output Complex number: " << real << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag << "i";
    }
};
int main()
{
    Complex c1, c2, result;
    cout << "Enter first complex number:\n";
    c1.input();
    cout << "Enter second complex number:\n";
    c2.input();
    result = c1 + c2;
    result.output();
    return 0;
}
