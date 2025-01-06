// leetcode ; easy ; 1281
// Subtract the product and sum of digits of an integer
#include<iostream>
using namespace std;
class Solution{
    public:
    int subtractProductAndSum(int n){
        if (n==0)
        {
            return 0;
        }
        int Sum=0,Product=1;
        while (n!=0)
        {
            int r = n%10;
            Sum=Sum+r;
            Product=Product*r;
            n=n/10;   
        }
        return (Product-Sum);
    }
};
int main()
{
    Solution Solution1;
    int n;
    cout<<"Enter a number \n";
    cin>>n;
    cout<<Solution1.subtractProductAndSum(n);
return 0; 
}