#include <bits/stdc++.h>

using namespace std;

/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<start<<" ";
            start = 1 - start;
        }
        cout<<endl;
    }
    
    return 0;
}