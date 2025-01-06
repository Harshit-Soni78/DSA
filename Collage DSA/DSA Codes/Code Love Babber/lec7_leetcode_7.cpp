// leetcode ; medium ; 7
// given a signed 32-bit integer x, return x with its digits reversed.(range = -2^31 to 2^31-1) out of range return '0'
#include<iostream>
#include<math.h>
using namespace std;
class Solution
{
public:
 int reverse(int x){
        int digit=0;
        int ans=0;
        while (x!=0)
        {
            digit=x%10;
            if (ans>INT_MAX/10 || ans<INT_MIN/10)
            {
                return 0;
            }
            ans = digit + (ans*10);
            x=x/10;
        }
        return ans;
 }
}Object;
int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    cout<<Object.reverse(n);
     
return 0; 
}