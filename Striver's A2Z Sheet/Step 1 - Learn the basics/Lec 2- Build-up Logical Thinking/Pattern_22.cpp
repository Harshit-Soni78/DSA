#include <bits/stdc++.h>

using namespace std;

/*
    4 4 4 4 4 4 4
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 3 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4
*/

int main(int argc, char const *argv[])
{
    int n, right, left, top, bottom;
    cin >> n;

    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n -1; j++)
        {   
            top = i;
            left = j;
            right = (2*n-2) - i;
            bottom = (2*n-2) -j;
            cout<<n - min(min(top, bottom), min(left, right))<<" ";
        }
        cout<<endl;
    }   
    return 0;
}