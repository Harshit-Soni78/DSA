// https://takeuforward.org/maths/check-if-a-number-is-armstrong-number-or-not/

/*
Problem Statement: Given an integer N, return true it is an Armstrong number otherwise return false.

An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
*/

#include <bits/stdc++.h>

using namespace std;

bool isArmstrong(int num) {
    int ans = 0, temp = num;
    int s = to_string(num).length();
    while(temp != 0){
        ans = ans + pow(temp%10,s);
        temp = temp/10;
    }
    if(ans == num) return true;
    else return false;
}

int main(int argc, char const *argv[])
{
    cout<<isArmstrong(153)<<endl;
    cout<<isArmstrong(135)<<endl;
    cout<<isArmstrong(371)<<endl;
    cout<<isArmstrong(2)<<endl;
    cout<<isArmstrong(888)<<endl;
    return 0;
}