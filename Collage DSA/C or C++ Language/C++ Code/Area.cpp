#include<iostream>
using namespace std;
int area(int a){
    return a*a;
}
int area(int l, int b){
    return l*b;
}
int main()
{   
    int a,l,b;
    cout<<"Enter Side of a Square :- \n";
    cin>>a;
    cout<<"Area of Square is :- "<<area(a)<<" "<<endl;
    cout<<"Enter Length of a Rectangle :- \n";
    cin>>l;
    cout<<"Enter Breath of a Rectangle :- \n";
    cin>>b;
    cout<<"Area of Rectangle is :- "<<area(a)<<endl;
    system("pause");
return 0;
}