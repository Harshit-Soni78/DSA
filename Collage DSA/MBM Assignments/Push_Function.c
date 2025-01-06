#include<stdio.h>
#define N 4
int stack[N];
int top=-1;
void push(int data){
    if (top == N-1)
    {
        printf("\nStack is full\n"); 
    }
    else{
        top+=1; // top = top+1
        stack[top]=data; // stack[top+1]=data;
    }
}
int main(){
    push(8);
    push(12);
    push(94);
    push(102);
    push(1024);
    for (int i = 0; i < N; i++)
    {
        printf("%d ,",stack[i]);
    }
    return 0;
}

