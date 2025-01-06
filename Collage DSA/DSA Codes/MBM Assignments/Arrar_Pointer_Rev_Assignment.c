// Take an array from user
// Print that array using pointers
// Print the reverse of that array using pointers
#include<stdio.h>
// Taking an array using pointers.
void arrin(int*t , int m){
    printf("Please Enter your Array\n");
    for (int i = 0; i<m; i++)
    {
        printf("Enter %dth Term of array\n",i);
        scanf("%d",&*t);
        t=t+1;
    }
}
// Printing that array using pointers.
void arrout(int*t , int m ){
    printf("\nYou have entered is \n");
    for (int i = 0; i<m; i++)
    {
        printf("%dth Term of array is %d\n",i,*t);
        t=t+1;
    }
}
// Printing reverse of that array using pointers.
void arrrev(int*t , int m){
    printf("\nReverse of Array is \n");
    t=t+m;
    for (int i = m-1 ; i >=0 ; i--)
    {   t=t-1;
        printf("%dth Term of array is %d\n",i,*t);  
    }
}
// Main Function 
int main()
{
    int n; // taking the length of array
    printf("Enter the length of array \n");
    scanf("%d",&n);
    int a[n]; // declearing the array
    arrin(a,n); // taking the array
    arrout(a,n); // printing the array
    arrrev(a,n); // revercing the array
    return 0;
}