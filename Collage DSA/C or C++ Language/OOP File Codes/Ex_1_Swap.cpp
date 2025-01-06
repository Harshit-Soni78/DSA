// Write a C++  program  to  swap  two  numbers without  using  a third  variable.
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Before swapping: " << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swap the numbers
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "After swapping: " << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
