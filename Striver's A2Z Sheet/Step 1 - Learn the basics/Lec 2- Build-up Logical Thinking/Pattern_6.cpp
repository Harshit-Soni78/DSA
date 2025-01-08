#include <bits/stdc++.h>

using namespace std;

/*
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2 
    1
*/

int main(int argc, char const *argv[])
{
    int count;
    cout << "Enter the number: ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        for (int j = count; j > i; j--)
        {
            cout << count - j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}