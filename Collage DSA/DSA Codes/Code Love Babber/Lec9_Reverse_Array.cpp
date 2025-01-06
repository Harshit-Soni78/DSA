#include <iostream>
using namespace std;
void swap(int* a , int* b){
    int *temp = a;
    a=b;
    b=temp;
}
void reverse(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void Print_Array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Swap_Alternate(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 >= size)
        {
            continue;           // For Odd No. of elements in Array.
        }
        swap(arr[i], arr[i + 1]);
    }
}
int main()
{
    int arr[6] = {5, 8, 9, 4, 5, 6};
    int brr[5] = {9, 5, 4, 6, 7};
    Print_Array(arr, 6);
    Print_Array(brr, 5);
    cout<<"Reversing The Array\n";
    reverse(arr, 6);
    reverse(brr, 5);
    Print_Array(arr, 6);
    Print_Array(brr, 5);
    cout<<"Reversing The Array\n";
    reverse(arr, 6);
    reverse(brr, 5);
    cout<<"Swap_Alternate of The Array\n";
    Swap_Alternate(arr, 6);
    Swap_Alternate(brr, 5);
    Print_Array(arr, 6);
    Print_Array(brr, 5);
    return 0;
}