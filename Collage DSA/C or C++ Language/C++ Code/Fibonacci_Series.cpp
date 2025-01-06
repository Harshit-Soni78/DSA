// Fabonachi series
#include<iostream>
using namespace std;
void fab(int n){
    int a=0;
    int b=1;
    cout<<"Fibonacci Series is :- \n";
    cout<<a<<","<<b;
    for (int i = 0; i < n-2; i++)
    {
        int c=a+b;
        a=b;
        b=c;
        cout<<","<<c;

    }
}

int main()
{
    cout<<"Enter a Number";
    int n;
    cin>>n;
    fab(n);
     
return 0; 
}