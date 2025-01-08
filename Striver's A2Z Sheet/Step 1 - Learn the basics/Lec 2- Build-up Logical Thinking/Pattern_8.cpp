#include <bits/stdc++.h>

using namespace std;

/*
                (n=5)
    *********   [0,9,0]
     *******    [1,7,1]
      *****     [2,5,2]
       ***      [3,3,3]
        *       [4,1,4]
*/

int main(int argc, char const *argv[])
{
    int count;
    cout << "Enter the number: ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        // Space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Star
        for (int j = 0; j < 2*count - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}