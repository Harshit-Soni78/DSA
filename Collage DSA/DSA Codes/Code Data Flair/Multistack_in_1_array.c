#include <stdio.h>
#define MAX_VALUE 10
int Stack[MAX_VALUE];
int top_A = -1, top_B = MAX_VALUE;
void push_A()
{
    if (top_A == MAX_VALUE - 1 || top_B == 0 || top_A + 1 == top_B)
    {
        printf("Stack Is Overflow\n");
    }
    else
    {
        int Value_A;
        printf("Enter The Value\n");
        scanf("%d", &Value_A);
        top_A++;
        Stack[top_A] = Value_A;
    }
}
void push_B()
{
    if (top_A == MAX_VALUE - 1 || top_B == 0 || top_A + 1 == top_B)
    {
        printf("Stack Is Overflow\n");
    }
    else
    {
        int Value_B;
        printf("Enter The Value\n");
        scanf("%d", &Value_B);
        top_B--;
        Stack[top_B] = Value_B;
    }
}
void pop_A()
{
    if (top_A == -1)
    {
        printf("Stack A is Empty\n");
    }
    else
    {
        printf("Deleted Value is %d\n", Stack[top_A]);
        top_A--;
    }
}
void pop_B()
{
    if (top_B == MAX_VALUE)
    {
        printf("Stack B is Empty\n");
    }
    else
    {
        printf("Deleted Value is %d\n", Stack[top_B]);
        top_B++;
    }
}
void Display_A()
{
    if (top_A == -1)
    {
        printf("Stack A is Empty\n");
    }
    else
    {
        int i;
        for (i = top_A; i > -1; i--)
        {
            printf("%d \n", Stack[i]);
        }
    }
}
void Display_B()
{
    if (top_B == MAX_VALUE)
    {
        printf("Stack B is Empty\n");
    }
    else
    {
        int i;
        for (i = top_B; i < MAX_VALUE; i++)
        {
            printf("%d \n", Stack[i]);
        }
    }
}
void Display_All()
{
    if (top_B == MAX_VALUE && top_A == -1)
    {
        printf("Both Stack is Empty\n");
    }
    else
    {
        if (top_A == -1)
        {
            printf("Stack A is Empty\n");
        }
        else
        {
            printf("Stack A is\n");
            int i;
            for (i = top_A; i > -1; i--)
            {
                printf("%d \n", Stack[i]);
            }
        }
        if (top_B == MAX_VALUE)
        {
            printf("Stack B is Empty\n");
        }
        else
        {
            printf("Stack B is\n");
            int i;
            for (i = top_B; i < MAX_VALUE; i++)
            {
                printf("%d \n", Stack[i]);
            }
        }
    }
}
void History()
{
    int i;
    printf("Previously Entered data is \n");
    for (i = MAX_VALUE-1; i >= 0; i--)
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
        printf("1. Insert in Stack A\n2. Insert in Stack B\n3. Delete in Stack A\n4. Delete in Stack B\n5. Display Stack A\n6. Display Stack B\n7. Display Array\n8. History\n9. Exit\n");
        printf("...........................................\n");
        printf(".........Please Enter Your Choise.........\n");
        scanf("%d", &choise);
        printf("\n");
        switch (choise)
        {
        case 1:
            push_A();
            break;
        case 2:
            push_B();
            break;
        case 3:
            pop_A();
            break;
        case 4:
            pop_B();
            break;
        case 5:
            Display_A();
            break;
        case 6:
            Display_B();
            break;
        case 7:
            Display_All();
            break;
        case 8:
            History();
            break;
        case 9:
            printf("Thank You\n");
            break;
        default:
            printf("You Entered Wrong Choise\n");
            break;
        }
    } while (choise != 9);
    return 0;
}