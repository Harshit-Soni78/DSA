// Write  a  C++  program  to  differentiate  between  passing parameters  by value 
// and  reference  to  a function.
#include <iostream>
using namespace std;

// Function to demonstrate passing by value
void passByValue(int num) {
    num += 10;
    cout << "Inside passByValue function: " << num << endl;
}

// Function to demonstrate passing by reference
void passByReference(int &num) {
    num += 10;
    cout << "Inside passByReference function: " << num << endl;
}

int main() {
    int num = 5;

    cout << "Before function call: " << num << endl;

    passByValue(num);
    cout << "After passByValue function call: " << num << endl;

    passByReference(num);
    cout << "After passByReference function call: " << num << endl;

    return 0;
}
