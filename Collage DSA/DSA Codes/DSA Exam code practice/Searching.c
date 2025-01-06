#include <stdio.h>
int binarySearch(int arr[], int n, int x) {
  int low = 0, high = n - 1, mid;
  while (low <= high) {
    mid = (low + high) / 2;
    if (arr[mid] == x) {
      return mid;
    }
    else if (arr[mid] > x) {
      high = mid - 1;
    }
    else {
      low = mid + 1;
    }
  }
  return -1;
}

int binarySearch_using_recursion(int arr[], int low, int high, int x)
{
  if (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == x) {
      return mid;
    }
    else if (arr[mid] > x) {
      return binarySearch_using_recursion(arr, low, mid - 1, x);
    }
    else {
      return binarySearch_using_recursion(arr, mid + 1, high, x);
    }
  }
  return -1;
}

int linearSearch(int arr[], int n, int x) {
  int i;
  for (i = 0; i < n; i++) {
    if (arr[i] == x) {
      return i;
    }
  }
  return -1;
}
int main() {
  int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 14;
  int result = binarySearch(arr, n, x);
  if (result == -1) {
    printf("Element %d is not present in the array\n", x);
  } else {
    printf("Element %d is present at index %d\n", x, result);
  }
  return 0;
}
