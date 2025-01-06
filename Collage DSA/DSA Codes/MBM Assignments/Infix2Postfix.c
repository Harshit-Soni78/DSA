#include <stdio.h>
#include <string.h>
#define N 10
char pri[100];
int k = 0;
char stack[N];
int top = -1;
void push(char data)
{
    if (top == N - 1)
    {
        printf("\nStack is full\n");
    }
    else
    {
        top += 1;          // top = top+1
        stack[top] = data; // stack[top+1]=data;
    }
}
char pop()
{
    int val;
    if (top == -1)
    {
        printf("\nStack is Empty\n");
    }
    else
    {
        return stack[top--];
    }
}
char read()
{
    return stack[top];
}
void PopAll()
{
    int ptr = top;
    while (ptr >= 0)
    {
        // printf("%c",stack[ptr--]);
        pri[k++] = stack[ptr--];
    }
}
int priority(char a)
{
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
        break;
    }
}

void prifix(char equation[])
{
    equation = strrev(equation);

    for (int i = 0; equation[i] != '\0'; i++)
    {
        if (equation[i] == '^' || equation[i] == '+' || equation[i] == '-' || equation[i] == '*' || equation[i] == '/')
        {
            while (priority(equation[i]) == priority(stack[top]))
            {
                pri[k++] = pop();
                push(equation[i]);
                i++;
            }
            while (priority(equation[i]) < priority(stack[top]))
            {
                // printf("%c",pop());
                pri[k++] = pop();
                // push(equation[i]);
            }
            push(equation[i]);
        }
        else
        {
            // printf("%c",equation[i]);
            pri[k++] = equation[i];
        }
    }

    PopAll();
    pri[strlen(equation)] = '\0';
    for (int i = 0, j = strlen(pri) - 1; i < strlen(pri); i++, j--)
    {
        printf("%c", pri[j]);
    }
}
int main()
{
    char equation[100];
    printf("Enter The Equation : \n");
    scanf("%s", equation);
    prifix(equation);
    return 0;
}