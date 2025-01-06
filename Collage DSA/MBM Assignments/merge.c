#include<stdio.h>
// void sort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             int a = arr[i];
//             arr[i] = arr[i + 1];
//             arr[i + 1] = a;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }
void merge(int arr1[],int n, int arr2[] ,int m){
    for (int i = 0 ; i < n ; i++)
    {
        printf("%d ",arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d ",arr2[i]);
    }
}
int main()
{   int n;
    printf("Enter the no. of elements in the array 1\n");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter the array 1\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int m;
    printf("Enter the no. of elements in the array 2\n");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter the array 2\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    merge(arr1, n,arr2 , m);
    
return 0; 
}