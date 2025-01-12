#include <bits/stdc++.h>

using namespace std;

/*
                // [star, space, star]
    *        *  // [1, 8, 1]
    **      **  // [2, 6, 2]
    ***    ***  // [3, 4, 3]
    ****  ****  // [4, 2, 4]
    **********  // [5, 0, 5]
    ****  ****  // [4, 2, 4]
    ***    ***  // [3, 4, 3]
    **      **  // [2, 6, 2]
    *        *  // [1, 8, 1]
*/

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    // first half
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        
        // space
        for (int j = 0; j < 2*(n-i-1); j++)
        {
            cout<<" ";
        }
        
        // star
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    // second half
    for (int i = 1; i < n; i++)
    {
        // star
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        
        // space
        for (int j = 0; j < 2*i; j++)
        {
            cout<<" ";
        }

        // star
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    
    return 0;
}