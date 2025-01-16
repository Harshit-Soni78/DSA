// https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

/*
You are given an array arr[] of non-negative numbers. Each number tells you the maximum number of steps you can jump forward from that position.

For example:

If arr[i] = 3, you can jump 1 step, 2 steps, or 3 steps forward from position i.
If arr[i] = 0, you cannot jump forward from that position.
Your task is to find the minimum number of jumps needed to move from the first position in the array to the last position.

Note:  Return -1 if you can't reach the end of the array.
*/

#include <bits/stdc++.h>

using namespace std;

int minJumps(vector<int> &arr)
{
    int maxReach = 0, lastIndex = 0;
    int n = arr.size(), jump = 0;

    if (n == 1)
        return 0;

    for (int i = 0; i < n; i++)
    {
        maxReach = max(maxReach, i + arr[i]);
        if (i == lastIndex)
        {
            if (maxReach == i)
            {
                jump = -1;
                break;
            }
            lastIndex = maxReach;
            jump++;
            if (maxReach >= n - 1)
            {
                break;
            }
        }
    }
    return jump;
}

int main(int argc, char const *argv[])
{

    vector<int> arr = {9, 10, 1, 2, 3, 4, 8, 0, 0, 0, 0, 0, 0, 0, 1};
    vector<int> arr2 = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << minJumps(arr) << endl;
    cout << arr.size() << endl
         << endl;
    cout << minJumps(arr2) << endl;
    cout << arr2.size() << endl;

    return 0;
}