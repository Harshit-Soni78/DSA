// https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1

/*
Given two integers a and b, write a function lcmAndGcd() to compute their LCM and GCD.
The function inputs two integers a and b and returns a list containing their LCM and GCD.
*/

#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b){
    for (int i = min(a,b); i >=2 ; i--)
    {
        if(a%i == 0 && b%i == 0){
            return i;
        }
    }
    return 1;
}

vector<int> lcmAndGcd(int a, int b) {
    vector<int> ans = {a*b/GCD(a,b), GCD(a,b)};
    return ans;
}

int main(int argc, char const *argv[])
{
    

    return 0;
}