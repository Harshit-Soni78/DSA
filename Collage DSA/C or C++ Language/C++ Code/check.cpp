#include<iostream>
using namespace std;
struct complex{float real,img ;};

    complex input_no(float r , float i){
        complex temp;
        temp.real=r;
        temp.img=i;
        return temp;
    }
    void output_no(complex t){
        cout<<t.real<<" + i"<<t.img;
    }
    complex operator+(complex c1, complex c2){
        complex temp;
        temp.real = c1.real+ c2.real;
        temp.img = c1.img + c2.img;
        return temp;
    }

int main()
{ 
    complex a,b,c;
    a=input_no(1.0,2.1);
    b= input_no(2.1,2.2);
    c=a+b;
    cout<<"Sum";
    output_no(c);
     
return 0; 
}