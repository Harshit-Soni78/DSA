// Write a C++  program  to  print the sum  of  n even  numbers.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    for (int i = 2; i <= n * 2; i += 2) {
        sum += i;
    }

    cout << "The sum of the first " << n << " even numbers is: " << sum << endl;

    return 0;
}
