#include<stdio.h>
#define Max 5
int Queue[Max],front=0,rear=-1;
void Insert(){
    if(rear==Max-1){
        printf("Queue is full\n");
    }else{
        int data;
        printf("Enter the data\n");
        scanf("%d",&data);
        Queue[++rear]=data;
        printf("Data %d is Inserted\n",data);
    }
}
void Delete(){
    if(front>rear){
        printf("Queue is Empty\n");
    }else{
        printf("Deleted data is %d\n",Queue[front++]);
    }
}
void Display(){
    if(front>rear){
        printf("Queue is Empty\n");
    }else{
        int x=front;
        while(x!=rear+1){
            printf("%d  ",Queue[x++]);
        }
        printf("\n");
    }
}
int main(){
    // Manu of Queue
    int C;
    do{
    printf("\n.........Queue Manu...........\nPlease Enter the choice:-\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
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