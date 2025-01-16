// https://leetcode.com/problems/palindrome-number/description/

// Given an integer x, return true if x is a palindrome, and false otherwise.

#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int x) {
    if(x<0) return false;
    double rev = 0;
    int  temp = x, digit = 0;
    while(temp != 0){
        digit = temp%10;
        temp /=10;
        rev = rev*10 + digit;
    }
    return rev == x;
}

int main(int argc, char const *argv[])
{
    cout<<isPalindrome(12654321)<<endl;
    cout<<isPalindrome(12345213)<<endl;
    cout<<isPalindrome(654456)<<endl;
    cout<<isPalindrome(325482)<<endl;
    cout<<isPalindrome(12321)<<endl;
    return 0;
}