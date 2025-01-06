#include<iostream>
using namespace std;
struct complex {
    float real, img;
};
complex input_no(float r, float i) {
    complex temp;
    temp.real = r;
    temp.img = i;
    return temp;
}
void output_no(complex t) {
    cout << t.real << " + i" << t.img;
}
complex operator+(complex c1, complex c2) {
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int main() {
    complex a, b, c;
    float c1r,c1i,c2r,c2i;
    cout<<"Enter real part of complex 1\n";
    cin>>c1r;
    cout<<"Enter imaginary part of complex 1\n";
    cin>>c1i;
    cout<<"Enter real part of complex 2\n";
    cin>>c2r;
    cout<<"Enter imaginary part of complex 2\n";
    cin>>c2i;
    
    a = input_no(c1r, c1i);
    b = input_no(c2r, c2i);
    c = a + b;
    cout << "Sum: ";
    output_no(c);   
    return 0; 
}