#include <bits/stdc++.h>

using namespace std;

/*
                (n = 5)
        *       [4, 1, 4]   || Pattren-7
       ***      [3, 3, 3]   || Pattren-7
      *****     [2, 5, 2]   || Pattren-7
     *******    [1, 6, 1]   || Pattren-7
    *********   [0, 9, 0]   || Pattren-7
    *********   [0,9,0]     || Pattern-8
     *******    [1,7,1]     || Pattern-8
      *****     [2,5,2]     || Pattern-8
       ***      [3,3,3]     || Pattern-8
        *       [4,1,4]     || Pattern-8
*/

int main(int argc, char const *argv[])
{
    int count;
    cout << "Enter the number: ";
    cin >> count;

    // Pattern-7
    for (int i = 0; i < count; i++)
    {
        // Space
        for (int j = 0; j < count - i - 1; j++)
        {
            cout << " ";
        }

        // Star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 0; j < count - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    // Pattern-8
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