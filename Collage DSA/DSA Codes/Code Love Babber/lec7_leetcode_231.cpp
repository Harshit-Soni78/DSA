// leetcode ; easy ; 231
// Power of Two
#include<iostream>
using namespace std;
class Solution{
    public:
        bool isPowerOfTwo(int n){
            int ans =1;
            for (int i = 0; i < 32; i++)
            {
                
                if (n== ans)
                {
                    return true;
                }
                if (ans<INT_MAX)
                    ans = ans * 2 ;   
            }
            return false;
        }
}Object;
int main()
{ 
    cout<<Object.isPowerOfTwo(16);

     
return 0; 
}