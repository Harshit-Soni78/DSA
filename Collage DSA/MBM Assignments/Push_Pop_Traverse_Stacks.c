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
int pop(){
    int val;
    if(top == -1){
        printf("\nStack is Empty\n");
    }
    else{
         return stack[top--];
    }
}
int tr(){
    int ptr = top;
    while(ptr>=0){
        return stack[ptr--];
    }
}
int main(){
    push(4);
    push(17);
    push(29);
    push(18);
    push(12);
    tr();
    
    
    printf("\n%d",tr());
    printf("\n%d",pop());
    printf("\n%d",pop());

    return 0;
}