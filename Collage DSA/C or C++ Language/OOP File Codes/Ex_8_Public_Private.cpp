// Write  a  C++  program  to  demonstrate  the  difference  between  accessing  public 
// and private  members  of  a class  through  its objects. 
#include<iostream>
using namespace std;

class MyClass {
public:
    int publicVar;

private:
    int privateVar;
};

int main() {
    MyClass obj;
    obj.publicVar = 10;  // Allowed
    // obj.privateVar = 20;  // Not allowed, will cause a compile error

    return 0;
}
