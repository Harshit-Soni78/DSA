#include <iostream>
using namespace std;
int power(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
bool isEven(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    else
        return false;
}
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int nCr(int n, int r)
{
    int value = 1;
    value = fact(n) / (fact(r) * fact(n - r));
    return value;
}
int nPr(int n, int r)
{
    int value = 1;
    value = fact(n) / fact(n - r);
    return value;
}
void print_AP(int a_1, int d, int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << a_1 + (i - 1) * d << " ";
    }
    cout << endl;
}
void print_GP(int g_1, int r, int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << g_1 * power(r, i - 1) << " ";
    }
    cout << endl;
}
void print_HP(int h_1, int d, int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << power(h_1 + (i - 1) * d, -1) << " ";
    }
    cout << endl;
}
int main()
{
    cout << power(5, 3) << endl;
    cout << isEven(3) << endl;
    cout << isPrime(13) << endl;
    cout << fact(5) << endl;
    cout << nCr(10, 5) << endl;
    cout << nPr(10, 5) << endl;
    print_AP(1, 2, 5);
    print_GP(1, 2, 5);
    print_HP(1, 2, 5);
    return 0;
}