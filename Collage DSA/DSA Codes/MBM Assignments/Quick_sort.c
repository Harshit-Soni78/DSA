#include <stdio.h>
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int a = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = a;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter the no. of elements in the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    return 0;
}