// codestudio ; easy ; unknown
// Given an int array of size 2m+1.
// In given array m numbers are present twice ane only one number is present once.
// Fint that number and print.
#include<iostream>
using namespace std;
int findUnique(int *arr,int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}
int main()
{ 
    int arr[11]={2,3,5,4,6,2,3,4,5,6,7};
    cout<<findUnique(arr,11);
return 0; 
}