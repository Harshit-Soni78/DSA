/*
    1
    22
    333
    4444
*/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int count;
    cout << "Enter the number: ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        for (int j = 1; j <= i+1; j++)
        {
            cout << i+1 << " ";
        }
        cout << endl;
    }
    return 0;
}