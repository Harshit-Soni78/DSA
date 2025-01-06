// to implement nested class 
// write a programm in c++ to find minimum of two numbers using a template function 
// to implement exception hendling
// diamond problem
// #include<iostream>
// using namespace std;
// class one{
//     public:
//         int x;
//         int y;
//         one(){
//             cout<<"constructor called for class one\n";
//         }
// };
// class two:public one{
//     public:
//         void display(){
//             cout<<x <<" "<<y<<endl;
//         }
// };
// int main()
// { 
//     two m;
//     m.x = 4;
//     m.y= 5;
//     m.display();
     
// return 0; 
// }
/////////////////////////////////////////////////////////
// to implement nested class 
#include<iostream>
using namespace std;
class nested{
    
        int data;
        public:
        int data2;
        void showdata(){
            data =10;
            cout<<data<<endl;
        }
};
class parent{
    public:
    nested n;
        void setdata(){
            n.showdata();
        }
};
int main()
{ 
    parent p;
    p.n.data2 = 5;
    cout<<p.n.data2<<endl;
    p.setdata();
    return 0; 
}
/////////////////////////////////////////////////////////////////
// write a programm in c++ to find minimum of two numbers using a template function 
// #include<iostream>
// using namespace std;

// int main()
// { 
     
// return 0; 
// }