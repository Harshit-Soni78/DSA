#include<iostream>
using namespace std;
class two;
class one{
	private:
		int data;
	public:
	one(){
		data=50;
	}
	friend int access_both(one,two);
};
class two{
	private:
		int data_2;
	public:
	two(){
			data_2=200;
		}
	friend int access_both(one,two);	
};
int access_both(one a, two b){
		return (a.data + b.data_2);
}
int main(){
	one a;
	two b;
	cout<<access_both(a,b);
	return 0;
}
