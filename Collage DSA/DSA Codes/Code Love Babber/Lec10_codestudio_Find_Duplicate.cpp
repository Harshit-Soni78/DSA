// codestudio ; easy ; unknown
// Find Duplicate No.
// N no. of array is given in which n-1 counting is given and 1 no. is repeating.
// Print that no..
#include <iostream>
using namespace std;
int findDuplicate(int arr[], int size)
{
    int ans = 0;
    
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        ans = i ^ ans;
    }
    return ans;
}
int main()
{
    int arr[11] = {1,2,3,4,5,6,7,8,9,10,5};
    int brr[10] = {1,2,3,4,5,6,7,8,9,7};
    cout<<findDuplicate(arr , 11)<<endl;
    cout<<findDuplicate(brr , 10);
    return 0;
}