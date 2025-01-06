#include <iostream>
using namespace std;
int Linear_Search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {

            cout << "Key " << key << " is present at " << i << endl;
            return i;
        }
    }
    cout << "Key " << key << " is absent" << endl;
    return -1;
}
int main()
{
    int arr[10] = {5, -8, 56, -45, 12, 30, 1, -46, 89, 152};
    //  Search for a key (user entered value)
    int key;
    cout << "Enter the key\n";
    cin >> key;
    int l_s = Linear_Search(arr, 10, key);
    return 0;
}