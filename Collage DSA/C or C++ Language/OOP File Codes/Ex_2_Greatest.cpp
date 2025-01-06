// Write a C++  program  to find  the  greatest  among  three  numbers.
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout<< max(max(num1,num2) , max(num2,num3))<<endl;
    // int greatest;
    // if (num1 >= num2 && num1 >= num3)
    //     greatest = num1;
    // else if (num2 >= num1 && num2 >= num3)
    //     greatest = num2;
    // else
    //     greatest = num3;

    // cout << "The greatest number is: " << greatest << endl;

    return 0;
}
