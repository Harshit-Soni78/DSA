// leetcode ; easy ; 191
// Number of 1 bits
#include<iostream>
using namespace std;
class Solution{
    public:
//  int hammingWeight(uint32_t n){ code not giving answer here because of undefined identifier
    int hammingWeight(unsigned int n){ 
        int count=0;
        while (n!=0)
        {
            if (n&1)
            {
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};
int main()
{
    Solution Solution1;
    int n;
    cout<<"Enter a number \n";
    cin>>n;
    cout<<Solution1.hammingWeight(n);
return 0; 
}