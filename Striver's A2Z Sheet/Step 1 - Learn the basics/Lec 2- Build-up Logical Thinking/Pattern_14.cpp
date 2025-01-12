#include <bits/stdc++.h>

using namespace std;

/*
    A
    AB
    ABC
    ABCD
    ABCDE
*/

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A'+i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}