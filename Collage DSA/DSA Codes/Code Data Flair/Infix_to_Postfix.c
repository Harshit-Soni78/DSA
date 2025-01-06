#include <stdio.h>
#include<string.h>
#define MAX_VALUE 10
char Stack[MAX_VALUE], top = -1;
void push(char Value)
{
    if (top == MAX_VALUE - 1)
    {
        printf("Stack Is Overflow\n");
    }
    else
    {
        top++;
        Stack[top] = Value;
    }
}
char pop()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        return Stack[top--];
    }
}
// void Display()
// {
//     if (top == -1)
//     {
//         printf("Stack is Empty\n");
//     }
//     else
//     {
//         int i;
//         for (i = top; i > -1; i--)
//         {
//             printf("%d \n", Stack[i]);
//         }
//     }
// }
// void History(){
//         int i;
//         printf("Previously Entered data is \n");
//         for (i = MAX_VALUE; i >= 0; i--)
//         {
//             printf("%d \n", Stack[i]);
//         }
// }
int priority(char Value){
    switch (Value)
    {
    case '^':
        return 5;
        break;
    case '/':
        return 4;
        break;
    case '*':
        return 3;
        break;
    case '+':
        return 2;
        break;
    case '-':
        return 1;
        break;
    default:
        return 0;
        break;
    }
}
int isOperator(char c){
    if (c=='^'||c=='/'||c=='*'||c=='-'||c=='+')
    {
        return 1;
    } else {
        return 0;
    }
}
int isEmpty(){
    if (top==-1)
    {
        return 1;
    } else {
        return 0;
    }
}
char * Postfix(char *Expression){
    char Post[]={};
    int i=0;
    while (*Expression!= '\0')
    {
        if (isOperator)
        {
            if (priority(*Expression)>Stack[top])
            {
                push(*Expression);
            }
            while (priority(*Expression)<=Stack[top])
            {
                Post[i]=pop();
                i++;
            }  
        } else {
            Post[i]= *Expression;
            i++;
        }
        Expression++;
    }
    while (isEmpty)
    {
        Post[i]=pop();
        i++;
    }
    Post[i]='\0';
    return Post;
}
int main()
{
    char EQ='a+b*c/d+e-f';
    printf("%s",Postfix(EQ));
    return 0;
}