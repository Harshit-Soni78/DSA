#include <stdio.h>
void sort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i + 1]){
            int a = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = a;
        }
    }
    int duplicate[n/2];
    int g = 0;
    for (int i = 0; i < n ; i++){
        if (arr[i] == arr[i + 1]){
            printf("%d ", arr[i]);
            duplicate[g] = arr[i];
            g++;
        }
    }
    duplicate[g] = '\0';
    if (duplicate[0] == '\0'){
        printf("-1");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    return 0;
}