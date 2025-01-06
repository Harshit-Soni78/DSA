// leetcode ; medium ; 442
// Find all Duplicates in an Array
// Home Work
#include<iostream>
using namespace std;
class Solution{
    public:
     // vector<int> findDuplicates(vector<int>& numd){
        void findDuplicates(int arr[], int size){
            int ans=0;
            for (int i = 0; i < size; i++)
            {
                ans = ans^arr[i];
            }
            for (int i = 0; i < size; i++)
            {
                ans = ans^i;
            }
            cout << ans<< endl;
            
            
        }
}obj;
int main()
{ 
    int arr[6]={5,5,4,2,3,1};
    obj.findDuplicates(arr , 6);
    
return 0; 
}