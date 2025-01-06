#include <iostream>
#include <math.h>
using namespace std;
const int Max_Bit = 32; // Maximum No. Bits
class Dec_BIN
{
public:
    void DEC_2_BIN(unsigned int n)
    { // For Positive Number and Negitive both
        bool ans[Max_Bit] = {};
        for (int i = Max_Bit - 1; n != 0; i--, n = n >> 1)
        {
            ans[i] = n & 1;
        }
        Display(ans);
    }
    void DEC_2_BIN() // Overloaded function
    { // For Positive Number and Negitive both
        unsigned int n;
        cout<<"Enter The Decimal Value\n";
        cin>>n;
        bool ans[Max_Bit] = {};
        for (int i = Max_Bit - 1; n != 0; i--, n = n >> 1)
        {
            ans[i] = n & 1;
        }
        Display(ans);
    }
    void BIN_2_DEC(char arr[])
    { // For Positive Number and Negitive both
        int ans = 0;
        for (int i = 0; i < Max_Bit; i++)
        {
            int a = arr[i] - 48; // ASCII Value of 0 is 48
            ans = (a * pow(2, Max_Bit - 1 - i)) + ans;
        }
        Display(ans);
    }
    void BIN_2_DEC()// Overloaded function
    { // For Positive Number and Negitive both
        char arr[Max_Bit];
        cout<<"Enter The "<<Max_Bit<<"-Bit Binary\n";
        cin>>arr;
        int ans = 0;
        for (int i = 0; i < Max_Bit; i++)
        {
            int a = arr[i] - 48; // ASCII Value of 0 is 48
            ans = (a * pow(2, Max_Bit - 1 - i)) + ans;
        }
        Display(ans);
    }
    void Display(bool arr[])
    {
        for (int i = 0; i < Max_Bit; i++)
        {
            cout << arr[i];
        }
        cout << endl;
    }
    void Display(int a)// Overloaded function
    {
        cout << a << endl;
    }
} Object;
int main()
{
    int choise;
    do
    {
        printf("\n..............Decimal and Binary Conversion Manu..............\n");
        printf("1. Convert Decimal to Binary\n2. Convert Binary to Decimal\n3. Exit\n");
        printf("...........................................\n");
        printf(".........Please Enter Your Choise.........\n");
        scanf("%d", &choise);
        printf("\n");
        switch (choise)
        {
        case 1:
            Object.DEC_2_BIN();
            break;
        case 2:
            Object.BIN_2_DEC();
            break;
        case 3:
            cout<<"Thank You\n";
            break;
        default:
            printf("You Entered Wrong Choise\n");
            break;
        }
    } while (choise != 3);
    
    return 0;
}
