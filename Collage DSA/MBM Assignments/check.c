#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 7
// #define M 50
char stack[N];
int top=-1;
void push(char data){
    if (top == N-1)
    {
        printf("\nStack is full\n"); 
    }
    else{
        top+=1; // top = top+1
        stack[top]=data; // stack[top+1]=data;
    }
}
char pop(){
    int val;
    if(top == -1){
        printf("\nStack is Empty\n");
    }
    else{
         return stack[top--];
    }
}
int priority(char a){
    switch (a)
    {
    case '^':
        return 6;
        break;
    case '/':
        return 5;
        break;
    case '*':
        return 5;
        break;    
    case '+':
        return 3;
        break;
    case '-':
        return 3;
        break;
    default:
    // return 1;
        break;
    }
}
void prifix(char *equation , int length){
    // push('\0');
    equation = strrev(equation);
    char pri[length-1];
    int i=0;
    while (*equation)  
    {
        if (*equation== '^' || *equation == '+'|| *equation == '-' || *equation == '*'|| *equation =='/' )
        {
            while(priority(*equation) <= priority(stack[top]))
            {
                pri[i]=pop();
            }
           push(*equation);
        }
        else{
                pri[i++]=*equation;
        }
        equation++;
    }
    while (top>0 )
    {   
        pri[i]=pop();
        i++;
        top--;
    }
    printf("%s",pri);
    // int j = length;
    // while(j>=0)
    // {
    //         printf("%c",pri[j]);
    //         j--;        
    // }
    
}
int main()
{   char equation[100];
    printf("Enter the Equation :- \n");
    scanf("%s",equation);
    int n= strlen(equation);
    prifix(equation,n);
return 0; 
}