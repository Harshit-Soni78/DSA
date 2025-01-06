#include <stdio.h>
int test = 0;
int find(int arr[], int start, int n, int search)
{
    if (search == arr[n / 2])
    {
        return n / 2;
    }
    else if (search < arr[n / 2] && test <= n)
    {
        test++;
        find(arr, start, n / 2, search);
    }
    else if (search > arr[n / 2] && test <= n)
    {
        find(arr, n / 2, n, search);
    }
    else
        return -1;
}
int main()
{
    int n, f;
    printf("Enter the no. of elements in the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("What do you want to find ?\n");
    scanf("%d", &f);
    if (find(arr, 0, n, f) == -1)
    {
        printf("%d is not in the array", f);
    }
    else
        printf("The location of %d is %d", f, find(arr, 0, n, f));
    return 0;
}