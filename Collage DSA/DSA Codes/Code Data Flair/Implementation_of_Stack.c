#include <stdio.h>
#define MAX_VALUE 10
int Stack[MAX_VALUE], top = -1;
void push()
{
    if (top == MAX_VALUE - 1)
    {
        printf("Stack Is Overflow\n");
    }
    else
    {
        int Value;
        printf("Enter The Value\n");
        scanf("%d", &Value);
        top++;
        Stack[top] = Value;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Deleted Value is %d\n", Stack[top]);
        top--;
    }
}
void Display()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        int i;
        for (i = top; i > -1; i--)
        {
            printf("%d \n", Stack[i]);
        }
    }
}
void History(){
        int i;
        printf("Previously Entered data is \n");
        for (i = MAX_VALUE; i >= 0; i--)
        {
            printf("%d \n", Stack[i]);
        }
}
int main()
{
    int choise;
    do
    {
        printf("\n..............Stack Manu..............\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. History\n5. Exit\n");
        printf("...........................................\n");
        printf(".........Please Enter Your Choise.........\n");
        scanf("%d", &choise);
        printf("\n");
        switch (choise)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            Display();
            break;
        case 4:
            History();
            break;
        case 5:
            printf("Thank You\n");
            break;
        default:
            printf("You Entered Wrong Choise\n");
            break;
        }
    } while (choise != 5);
    return 0;
}