#include <stdio.h>
#define MAX_VALUE 10
int Queue[MAX_VALUE], front = 0, rear = -1;
void Insert()
{
    if (rear == MAX_VALUE-1)
    {
        printf("Queue is full\n");
    } else {
        int n;
        printf("Enter the data\n");
        scanf("%d",&n);
        rear++;
        Queue[rear]=n;
    }
}
void Delete()
{
    if (front>rear)
    {
        printf("Queue is Empty\n");
    } else {
        printf("Deleted Value is %d ",Queue[front]);
        front++;
    }
}
void Display()
{
    if (front>rear)
    {
        printf("Queue is Empty\n");
    } else {
        printf("Elements of Queue are \n");
        int i;
        for ( i = front; i <= rear; i++)
        {
            printf("%d \n",Queue[i]);
        }
    }
}
void History()
{
    int i;
    printf("Previously Entered data is \n");
    for ( i = MAX_VALUE-1; i >= 0; i--)
    {
        printf("%d \n",Queue[i]);
    }
}
int main()
{
    int choise;
    do
    {
        printf("\n..............Queue Manu..............\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. History\n5. Exit\n");
        printf("...........................................\n");
        printf(".........Please Enter Your Choise.........\n");
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