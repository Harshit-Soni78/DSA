// https://leetcode.com/problems/reverse-integer/description/

/*
    Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

    Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/


#include <bits/stdc++.h>

using namespace std;

int reverse(int x) {
    int ans = 0;
    int digit;
    int temp = x;
    while(temp != 0){
        digit = temp%10;
        temp /=10;
        ans = ans*10 + digit;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    cout<<reverse(1534236469)<<endl;
    cout<<reverse(45678)<<endl;
    cout<<reverse(1205)<<endl;
    cout<<reverse(1947)<<endl;
    return 0;
}