// https://www.geeksforgeeks.org/problems/count-digits5716/1

/*
    Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits.

    A digit d of n divides n evenly if the remainder when n is divided by d is 0 (n % d == 0).
    Digits of n should be checked individually. If a digit is 0, it should be ignored because division by 0 is undefined.
*/

#include <bits/stdc++.h>

using namespace std;

int evenlyDivides(int n)
{
    int temp = n, digit = 0, count = 0;
    while (temp > 0)
    {
        digit = temp%10;
        temp /=10;
        if(digit!=0){
            if(n % digit ==0) count++;
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    cout << evenlyDivides(12)<<endl;
    cout << evenlyDivides(2446)<<endl;
    cout << evenlyDivides(23)<<endl;
    return 0;
}