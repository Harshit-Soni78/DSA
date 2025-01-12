#include <bits/stdc++.h>

using namespace std;

/*
       A
      ABA
     ABCBA
    ABCDCBA
*/

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n-1-i; j++)
        {
            cout<<" ";
        }
        // letter
        for (char j = 'A'; j < 'A'+i; j++)
        {
            cout<<j;
        }
        for (char j = 'A'+i; j >= 'A'; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    

    return 0;
}