#include <bits/stdc++.h>

using namespace std;

/*
    1
    1 2
    1 2 3
    1 2 3 4
*/

int main(int argc, char const *argv[])
{
    int count;
    cout << "Enter the number: ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        for (int j = 1; j <= i+1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}