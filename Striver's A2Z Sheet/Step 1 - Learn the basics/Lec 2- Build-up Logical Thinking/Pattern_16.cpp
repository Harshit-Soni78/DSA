#include <bits/stdc++.h>

using namespace std;

/*
    A
    BB
    CCC
    DDDD
    EEEEE
*/

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (char i = 'A'; i < 'A'+n; i++)
    {
        for (char j = 'A'; j <=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}