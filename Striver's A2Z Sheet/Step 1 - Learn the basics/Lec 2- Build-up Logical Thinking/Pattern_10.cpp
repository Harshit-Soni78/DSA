#include <bits/stdc++.h>

using namespace std;

/*
            (n = 5)
    *       [1,4]
    **      [3,3]
    ***     [5,2]
    ****    [6,1]
    *****   [9,0]
    *****   [9,0]
    ****    [7,1]
    ***     [5,2]
    **      [3,3]
    *       [1,4]
*/

int main(int argc, char const *argv[])
{
    int count;
    cout << "Enter the number: ";
    cin >> count;

    // First half Pattern
    for (int i = 0; i < count; i++)
    {
        // Star
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Second half pattern
    for (int i = 0; i < count; i++)
    {
        // Star
        for (int j = 1; j < count - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}