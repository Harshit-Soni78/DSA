#include<stdio.h>
void swap(int* a, int* b){
    int c = *b;
    *b= *a;
    *a= c;
}
void merge(int arr[],int start,int mid, int end){
    int x=end;
    int left[mid-start-1], right[end-mid];
    for(int i=0 ; i<= mid-start+1; i++){
            left[i]=arr[start+i];
    }
    for(int j=0 ; j<= end-mid; j++){
        right[j]=arr[mid+j+1];
    }
    int i=start , l=start ,j=mid+1,m=mid+1;
    while (l<mid && j<end)
    {
        if(left[i]<=right[j]){
            arr[l]=left[i];
            i++;    
            l++;
        }else{
            arr[l]=right[j];
            l++;
            j++;
        }
        while (i<mid){
            arr[start]=left[i];
            i++;
            start++;
        }
        while (m<end)
        {
            arr[start]=right[m];
            m++;
            start++;
        }
        j++;
    }
    for (int i = 0; i < x; i++)
    {
        printf("%d",arr[i]);
    }
    
}
void msort(int arr[], int start , int end){
    if (start<end){
        int mid = (start+end)/2;
        msort(arr,start,mid);
        msort(arr,mid+1,end);
        merge(arr,start,mid, end);
    }
}
int main()
{
    int arr[]={9,7,8,4,12,13};
    msort(arr,0,5);
return 0; 
}