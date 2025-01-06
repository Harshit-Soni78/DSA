#include<stdio.h>
int find(int f,int *t){
     int x=0;
     for(int i=0; *t!= f;i++){
            x=i+1;
            t++;
     }
     printf("The Location of %d is %d\n",f,x);
     return x;
}
int main()
{ 
     int n,f;
     printf("Enter the no. of elements in the array\n");
     scanf("%d",&n);
     int arr[n];
     printf("Enter the array\n");
     for (int i = 0; i < n; i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("What do you want to find ?\n");
     scanf("%d",&f);
     find(f,arr); 
return 0; 
}