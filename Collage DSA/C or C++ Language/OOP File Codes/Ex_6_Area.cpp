// Write  a  C++  program  to  calculate  the  area  of  squares  and  rectangles 
// through  the  same function  by using the  concept  of function  overloading.
#include <iostream>
using namespace std;

// Function to calculate the area of a square
double calculateArea(double side) {
    return side * side;
}

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width;
}

int main() {
    double side = 5.0;
    double length = 6.0;
    double width = 4.0;

    cout << "Area of square: " << calculateArea(side) << endl;
    cout << "Area of rectangle: " << calculateArea(length, width) << endl;

    return 0;
}
