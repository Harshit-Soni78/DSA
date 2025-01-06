#include<stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp; 
}
void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
void merge(int arr1[],int n, int arr2[] ,int m){
    int merge[n+m];
    for (int i = 0 ; i < n ; i++)
    {
        merge[i]=arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        merge[i+n]=arr2[i];
    }
    sort(merge,n+m);
    printf("Sorted array: ");
    for (int i = 0; i < n+m; i++) {
        printf("%d ", merge[i]);
    }
}
int main()
{
    int arr1[]={2,5,8,9};
    int arr2[]={3,10,12,14,16};
    merge(arr1, 4,arr2 , 5);
    // int n;
    // printf("Enter the no. of elements in the array 1\n");
    // scanf("%d", &n);
    // int arr1[n];
    // printf("Enter the array 1\n");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr1[i]);
    // }
    // int m;
    // printf("Enter the no. of elements in the array 2\n");
    // scanf("%d", &m);
    // int arr2[m];
    // printf("Enter the array 2\n");
    // for (int i = 0; i < m; i++)
    // {
    //     scanf("%d", &arr2[i]);
    // }
    // merge(arr1, n,arr2 , m);
    
return 0; 
}