// leetcode ; easy ; 1009
// Find Complement of base 10 integer
#include<iostream>
using namespace std;
class Solution
{
    public:
        int bitwiseComplement(int n){
            int m=n;
            int mask =0;
            // edge case
            if (n==0)
            {
                return 1;
            }
            // 
            while (n!=0)
            {
                mask=(mask<<1)|1;
                n=n>>1;
            }
            int ans = (~m) & mask;
            return ans;
        }
}Object;
int main()
{ 
    cout<<Object.bitwiseComplement(12)<<endl;
    cout<<Object.bitwiseComplement(0);

     
return 0; 
}