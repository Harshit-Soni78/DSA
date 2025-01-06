#include<iostream>
using namespace std;
class info{
    private:
            char mob[10];
    public:
        string name;
        // char mob[10];
    void get_mob(){
            cin>>mob;
    }
    void print_mob(){
            cout<<mob;
    }
};
int main()
{
    info e1;
    cout<<"Start\n";
    cin>>e1.name;
    e1.get_mob();
    cout<<e1.name<<endl;
    e1.print_mob(); 
    // cout<<e1.mob;
return 0; 
}