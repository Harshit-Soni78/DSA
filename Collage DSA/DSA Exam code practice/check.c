// Include the standard input/output library
#include <stdio.h>
// Include the standard library
#include <stdlib.h>

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

// Define a function to print an array
void printArray(int arr[], int size) {
  // Loop through the array and print each element
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

// Define the main function
int main() {
  // Declare an array and its size
  int arr[] = {12, 11, 13, 5, 6, 7};
  int size = sizeof(arr) / sizeof(arr[0]);
  // Print the original array
  printf("Given array is \n");
  printArray(arr, size);
  // Perform merge sort on the array
  mergeSort(arr, 0, size - 1);
  // Print the sorted array
  printf("\nSorted array is \n");
  printArray(arr, size);
  // Return 0 to indicate successful termination
  return 0;
}
