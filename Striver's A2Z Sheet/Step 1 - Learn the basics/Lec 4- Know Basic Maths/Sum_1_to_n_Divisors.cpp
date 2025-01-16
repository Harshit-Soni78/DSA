// https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

/*
    Given a positive integer n, The task is to find the value of Σi F(i) where i is from 1 to n and function F(i) is defined as the sum of all divisors of i.
*/

#include <bits/stdc++.h>

using namespace std;

int F(int n){
    int sum =0;
    for (int i = 1; i <= n; i++)
    {
        if(n%i == 0){
            sum = sum + i;
        }
    }
    return sum;
}

int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + F(i);
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    int n = 4;
    cout<<F(n)<<" | "<<sumOfDivisors(n);
    return 0;
}