#include<stdio.h>
#define Max 5
int Queue[Max],front=-1,rear=-1;
void Insert(){
    if(front==(rear+1)%Max){
        printf("Queue is full\n");
    }else{
        int data;
        printf("Enter the data\n");
        scanf("%d",&data);
        if(rear==-1 && front==-1){
            rear=front=0;
        }else{
            rear = (rear+1)%Max;
        }
        Queue[rear]=data;
        printf("Data %d is Inserted\n",data);
    }
}
void Delete(){
    if(front==-1 && rear==-1){
        printf("Queue is Empty\n");
    }else{
        printf("Deleted data is %d\n",Queue[front]);
        if(rear==front){
            rear=front=-1;
        }else{
            front=(front+1)%Max;
        }
    }
}
void Display(){
    if(front==-1 && rear==-1){
        printf("Queue is Empty\n");
    }else{
        int i;
        for( i=front ; i!=rear ; i=(i+1)%Max){
            printf("%d  ",Queue[i]);
        }
        printf("%d\n",Queue[i]);
    }
}
int main(){
    // Manu of Queue
    int C;
    do{
    printf("\n.........Circular Queue Manu...........\nPlease Enter the choice:-\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
    scanf("%d",&C);
    switch (C)
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
        printf("Thank You\n");
        break;
    default:
        printf("Entered Wrong Choise\nPlease Try Again\n");
        break;
    }
    }while(C!=4);
    return 0;
}