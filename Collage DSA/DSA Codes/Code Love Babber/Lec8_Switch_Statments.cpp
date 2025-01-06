#include <iostream>
using namespace std;
//  100 , 50 , 20 , 10 , 1 ????
int main()
{
    int n, r;
    cout << "Enter the amount\n";
    cin >> n;
    switch (100)
    {
    case 100:
        r = n / 100;
        cout << n << " needs " << r << " 100 notes\n";
        n = n % 100;
    case 50:
        r = n / 50;
        cout << n << " needs " << r << " 50 notes\n";
        n = n % 50;
    case 20:
        r = n / 20;
        cout << n << " needs " << r << " 20 notes\n";
        n = n % 20;
    case 10:
        r = n / 10;
        cout << n << " needs " << r << " 10 notes\n";
        n = n % 10;
    case 1:
        r = n / 1;
        cout << n << " needs " << r << " 1 notes\n";
        n = n % 1;
    default:
        break;
    }
    return 0;
}