// Include the standard input/output library
#include <stdio.h>
// Define a function to merge two sorted arrays
void merge(int arr1[], int n1, int arr2[], int n2, int arr3[]) {
  // Declare variables to store the indices of the arrays
  int i = 0, j = 0, k = 0;
  // Loop until one of the arrays is exhausted
  while (i < n1 && j < n2) {
    // Compare the current elements of the arrays and copy the smaller one to the third array
    if (arr1[i] < arr2[j]) {
      arr3[k++] = arr1[i++];
    } else {
      arr3[k++] = arr2[j++];
    }
  }
  // Copy the remaining elements of the first array to the third array, if any
  while (i < n1) {
    arr3[k++] = arr1[i++];
  }
  // Copy the remaining elements of the second array to the third array, if any
  while (j < n2) {
    arr3[k++] = arr2[j++];
  }
}
// Define the main function
int main() {
  // Declare and initialize two sorted arrays
  int arr1[] = {1, 3, 5, 7};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int arr2[] = {2, 4, 6, 8};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  // Declare a third array with size equal to the sum of the two arrays
  int arr3[n1 + n2];
  // Call the merge function to merge the two arrays
  merge(arr1, n1, arr2, n2, arr3);
  // Print the merged array
  printf("The merged array is: ");
  for (int i = 0; i < n1 + n2; i++) {
    printf("%d ", arr3[i]);
  }
  printf("\n");
  // Return 0 to indicate successful termination
  return 0;
}