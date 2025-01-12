#include <bits/stdc++.h>

using namespace std;

/*
    1      1
    12    21
    123  321
    12344321
*/

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // number
        for (int j = 0; j <= i; j++)
        {
            cout<<j+1;
        }
        // space
        for (int j = 2*i; j < 2*n-2; j++)
        {
            cout<<" ";
        }
        // number
        for (int j = i; j >= 0; j--)
        {
            cout<<j+1;
        }
        cout << endl;
    }

    return 0;
}