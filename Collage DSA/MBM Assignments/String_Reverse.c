#include <stdio.h>
#include<string.h>
void StrRev(char *t){
    if (*t)
    {
        StrRev(t+1);
        printf("%c",*t);
    }
}
int main()
{
    char name[]={}; // Declaring the string of user defined length 
    printf("Enter the string\n");
        // %s is used to save string but this can only save string without blankspace 
        // for example :- 'Harshit' do not have blankspace but 'Harshit Soni' have a blankspace 
        // so only 'Harshit' is saved through %s 
    scanf("%[^\n]s",name); // Taking the string from user 
        // Here %[^\n]s is used for saving string having blank spaces 
        // Here 'Harshit Soni' is saves as 'Harshit Soni'...So string do not break in blankspace
    printf("Reverse of the string : %s is \n",name);
    StrRev(name);
    return 0;
}
