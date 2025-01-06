#include<iostream>
using namespace std;
class point{
    public:
        int x,y;
        point(){
            cout<<"Const. Called\n";
            x=0;
            y=0;
        }
        ~point(){
            cout<<"Dist. Called\n";
        }
}p1,p2;

int main()
{
    cout<<"Start\n";
    point p1;
    cout<<p1.x<<p1.y;
    int flag=0;
    if (flag==0)    
    {
        point p2;
    }
    cout<<"end\n";
    
return 0; 
}