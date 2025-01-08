#include <bits/stdc++.h>

using namespace std;

/*
    *
    * *
    * * *
    * * * *
    * * * * *
*/

int main(int argc, char const *argv[])
{
    int count;
    cout << "Enter the number: ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}