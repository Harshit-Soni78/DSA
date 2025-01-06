#include<stdio.h>

void PrintArray(int A[] , int n){
    for(int i=0 ; i<n ; i++){
        printf(" %d ",A[i]);
    }
    printf("\n");
}

void swap(int *a , int *b){
    int c = *a;
    *a=*b;
    *b=c;
}

void Selection_Sort(int A[] , int n){
    printf("\nSelection Sort\n");
    int min_index;
    for(int i=0 ; i<n ; i++){
        min_index=i;
        for(int j=i+1 ; j<n ; j++){
            if(A[min_index]>A[j]){
                min_index = j;
            }
        }
        swap(&A[min_index],&A[i]);
    }
    PrintArray(A , n);
}

void Bubble_Sort(int A[] , int n){
    printf("\nBubble Sort\n");
    for(int i=n-1 ; i>=0 ; i--){
        for(int j=0 ; j<i ; j++){
            if(A[j]>A[j+1]){
                swap(&A[j],&A[j+1]);
            }
        }
    }
    PrintArray(A , n);
}

void Insertion_Sort(int A[] , int n){
    printf("\nInsertion Sort\n");
    int temp,j;
    for (int i = 1; i < n; i++)
    {
        temp = A[i];
        j=i-1;
        while(temp < A[j] && j>=0){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;
    }
    PrintArray(A , n);
}

void Linear_Sort(int A[] , int n){
    printf("\nLinear Sort\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[i]){
                swap(&A[i],&A[j]);
            }
        }
    }
    PrintArray(A , n);
}
int partation(int A[] , int s , int e){
    int pivot = A[s];
    int count =0;
    for (int i = s+1; i <=e; i++)
    {
        if(A[i] <= pivot){
            count++;
        }
    }

    // Place pivot at right position
    int pivotIndex = s+ count;
    swap(&A[pivotIndex] , &A[s]);

    // Left and Right Part
    int i=s , j=e;

    while(i < pivotIndex && j > pivotIndex){
        while(A[i] <= pivot){
            i++;
        }

        while (A[j]>pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(&A[i++] , &A[j--]);
        }   
    }
    return pivotIndex;
}

void Quick_Sort(int A[] , int s ,int e){
    // printf("\nQuick Sort\n");
    // Base case
    if(s>=e) return;

    // Partation 
    int p = partation(A , s, e);

    // Left part sort
    Quick_Sort(A , s , p-1);

    // Right part sort
    Quick_Sort(A , p+1 , e);
    // PrintArray(A , s+e);
}

// Define a function to merge two sorted subarrays
void merge(int arr[], int l, int m, int r) {
  // Declare variables to store the sizes of the subarrays
  int n1 = m - l + 1;
  int n2 = r - m;
  // Declare temporary arrays to store the subarrays
  int L[n1], R[n2];
  // Copy the data from the original array to the temporary arrays
  for (int i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for (int j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];
  // Declare variables to store the indices of the subarrays and the merged array
  int i = 0, j = 0, k = l;
  // Merge the subarrays by comparing their elements and copying the smaller one to the merged array
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }
  // Copy the remaining elements of the subarrays to the merged array, if any
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }
  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

// Define a function to perform merge sort on an array
void mergeSort(int arr[], int l, int r) {
  // Check if the left index is less than the right index
  if (l < r) {
    // Find the middle point of the array
    int m = l + (r - l) / 2;
    // Recursively sort the left and right halves of the array
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    // Merge the sorted halves
    merge(arr, l, m, r);
  }
}

int main()
{
    int A[]={5,6,7,8,9,4,6,10,56} , n=9;
    // Bubble_Sort(A , n);
    // Selection_Sort(A,n);
    // Insertion_Sort(A,n);
    // Linear_Sort(A,n);
    // Quick_Sort(A, 0 , n);
    // PrintArray(A,n);
    // mergeSort(A , 0 , 9);
    // PrintArray(A,n);

return 0; 
}