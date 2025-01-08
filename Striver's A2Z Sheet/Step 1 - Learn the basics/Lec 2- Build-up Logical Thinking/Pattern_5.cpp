/*
    *****
    ****
    ***
    **
    *
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
        for (int j = count; j > i; j--)
        {
            cout <<"* ";
        }
        cout << endl;
    }
    return 0;
}