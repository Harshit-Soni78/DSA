/*
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count;
    cout << "Enter the number: ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}