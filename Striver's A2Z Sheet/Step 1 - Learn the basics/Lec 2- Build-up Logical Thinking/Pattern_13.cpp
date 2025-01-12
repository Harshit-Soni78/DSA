#include <bits/stdc++.h>

using namespace std;

/*
    1
    2 3
    4 5 6
    7 8 9 10
*/

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
    }

    return 0;
}