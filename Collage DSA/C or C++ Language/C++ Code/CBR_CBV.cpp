#include<iostream>

using namespace std;
int demo(int a){
    a=a+1;
    return a;
}
int demo(int* a){
    *a=*a+1;
    return *a;
}
int main()
{ 
    int a;
    cout<<"Enter a Number \n";
    cin>>a;
    cout<<"Calling By Value "<<demo(a)<<endl;
    cout<<"Old 'a' is not changed with Function "<<a<<endl;
    cout<<"Calling By Referance "<<demo(&a)<<endl;
    cout<<"The Old 'a' is changed with Function "<<a<<endl;
return 0; 
}