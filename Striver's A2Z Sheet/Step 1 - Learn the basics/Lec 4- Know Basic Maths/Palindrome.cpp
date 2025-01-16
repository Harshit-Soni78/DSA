// https://takeuforward.org/data-structure/check-if-a-number-is-palindrome-or-not/

/*
Problem Statement: Given an integer N, return true if it is a palindrome else return false.

A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.
*/

#include <bits/stdc++.h>

using namespace std;

bool palindrome(int n){
    int ans = 0, temp = n;
    while(temp!=0){
        ans = ans*10 + temp%10;
        temp = temp/10;
    }
    if(ans == n)return true;
    else return false;
}

int main(int argc, char const *argv[])
{
    cout<<palindrome(113)<<endl;
    cout<<palindrome(12321)<<endl;
    cout<<palindrome(121)<<endl;
    cout<<palindrome(1258521)<<endl;
    cout<<palindrome(123546)<<endl;
    cout<<palindrome(01250)<<endl;
    return 0;
}