#include <bits/stdc++.h>

using namespace std;

/*
    E
    D E
    C D E
    B C D E
    A B C D E
*/

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'+n-1-i ; j <= 'A'+ n - 1; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}