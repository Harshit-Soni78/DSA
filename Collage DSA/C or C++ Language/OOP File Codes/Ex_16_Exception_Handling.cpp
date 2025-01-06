// Write a C++ program to show exception handling.
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        if (num2 == 0) {
            throw "Division by zero is not allowed.";
        }
        double result = (double)num1 / num2;
        cout << "The result is: " << result << endl;
    }
    catch (const char* e) {
        cout << "Error: " << e << endl;
    }

    return 0;
}
