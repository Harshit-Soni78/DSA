#include <bits/stdc++.h>

using namespace std;

/*
                            (n = 5)
            *               [4, 1, 4]
          * * *             [3, 3, 3]
        * * * * *           [2, 5, 2]
      * * * * * * *         [1, 6, 1]
    * * * * * * * * *       [0, 9, 0]
                            [n-i-1, 2i+1 , n-i-1]
*/

int main(int argc, char const *argv[])
{
    int count;
    cout << "Enter the number: ";
    cin >> count;
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
    return 0;
}