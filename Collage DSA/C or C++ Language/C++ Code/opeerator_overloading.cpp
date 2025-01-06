#include <iostream>
using namespace std;
class Number  {
private:
    int value;
public:
int input(){
    cin>>value;
}
void operator++() {
        value--;
    }
void display() {
        cout << "Value: " << value <<endl;
    }
};

int main() {
    Number num;
    num.input();
    
    cout << "Original Value:"<<endl;
    num.display();

    // Using the overloaded prefix decrement operator
    ++num;

    cout << "After Decrement:"<<endl;
    num.display();

    return 0;
}
