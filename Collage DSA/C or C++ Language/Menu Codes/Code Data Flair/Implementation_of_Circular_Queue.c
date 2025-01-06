#include <stdio.h>
#define MAX_VALUE 10
int Circular_Queue[MAX_VALUE], front = -1, rear = -1;
void Insert()
{
    if (front == (rear + 1) % MAX_VALUE)
    {
        printf("Queue is full\n");
    }
    else
    {
        int n;
        printf("Enter the data\n");
        scanf("%d", &n);
        if (rear == -1 && front == -1)
        {
            rear = 0;
            front = 0;
        }
        else
        {
            rear = (rear + 1) % MAX_VALUE;
        }
        Circular_Queue[rear] = n;
    }
}
void Delete()
{
    if (rear == -1 && front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        int n = Circular_Queue[front];
        if (rear == front)
        {
            rear = front = -1;
        }
        else
        {
            front = (front + 1) % MAX_VALUE;
        }
        printf("Deleted Value is %d ", n);
    }
}
void Display()
{
    if (rear == -1 && front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Elements of Queue are \n");
        int i;
        for (i = front; i != rear; i = (i + 1) % MAX_VALUE)
        {
            printf("%d \n", Circular_Queue[i]);
        }
        printf("%d \n", Circular_Queue[i]);
    }
}
void History()
{
    int i;
    printf("Previously Entered data is \n");
    for (i = 0; i <= MAX_VALUE - 1; i++)
    {
        printf("%d \n", Circular_Queue[i]);
    }
}
int main()
{
    int choise;
    do
    {
        printf("\n..............Circular Queue Manu..............\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. History\n5. Exit\n");
        printf("...............................................\n");
        printf("............Please Enter Your Choise............\n");
        scanf("%d", &choise);
        printf("\n");
        switch (choise)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
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