#include <iostream>
using namespace std;
// Print Array
void printArray(int arr[], int n)
{
    cout << "Printing the Array\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl
         << "Array Printed" << endl;
}
void printArray(char arr[], int n)
{
    cout << "Printing the Array\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl
         << "Array Printed" << endl;
}
// Minimum Value in Array
int Min_Value(int arr[], int n)
{
    int value = INT_MAX;
    cout << "Minimum Value in Array\n";
    for (int i = 0; i < n; i++)
    {
        value = min(value, arr[i]);
        // if (arr[i] < value)
        // {
        //     value = arr[i];
        // }
    }
    return value;
}
// Max Value in Array
int Max_Value(int arr[], int n)
{
    int value = INT_MIN;
    cout << "Max Value in Array\n";
    for (int i = 0; i < n; i++)
    {
        value = max(value, arr[i]);
        // if (arr[i] > value)
        // {
        //     value = arr[i];
        // }
    }
    return value;
}
// Updating the values in array
void UpdateArray(int arr[], int index, int updated)
{
    cout << "Updating index " << index << " of array to the " << updated << endl;
    arr[index] = updated;
}
// Sum of elements of array
int SumOfArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of Elements in Array is " << sum << endl;
    return sum;
}
int main()
{
    int first[5] = {};
    printArray(first, 5);
    int second[5] = {0};
    printArray(second, 5);
    int third[5] = {1};
    printArray(third, 5);
    int forth[5] = {2, 3};
    printArray(forth, 5);
    int fifth[] = {3, 5, 4, 7, 8};
    printArray(fifth, 5);
    int arr[6] = {5, 8, 94, 35, 20, 155};
    printArray(arr, 6);
    cout << Min_Value(arr, 6) << endl;
    cout << Max_Value(arr, 6) << endl;
    UpdateArray(arr, 2, 100);
    printArray(arr, 6);
    SumOfArray(arr, 6);
    return 0;
}