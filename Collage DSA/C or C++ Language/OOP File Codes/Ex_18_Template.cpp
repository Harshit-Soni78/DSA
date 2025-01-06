// Write a C++ program to find a minimum of two numbers using templates
#include <iostream>
using namespace std;

// Define a template function to compare two values of any type
template <typename T>
T my_min(T x, T y) {
  // Return the smaller value
  return (x < y) ? x : y;
}

int main() {
  // Test the function with different types of arguments
  cout << "Min of 10 and 20 is " << my_min(10, 20) << endl;
  cout << "Min of 2.5 and 1.2 is " << my_min(2.5, 1.2) << endl;
  cout << "Min of 'a' and 'b' is " << my_min('a', 'b') << endl;
  return 0;
}
