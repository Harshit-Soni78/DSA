#include<stdio.h>
#define Max 5
int Stack[Max],top=-1;
void Push(){
    if(top==Max-1){
        printf("Stack is Full\n");
    }else{
        int data;
        printf("Enter the data\n");
        scanf("%d",&data);
        Stack[++top]=data;
        printf("data %d is Pushed into the Stack\n",data);
    }
}
void Pop(){
    if(top==-1){
        printf("Stack is empty\n");
    }else{
        printf("Poped data is %d",Stack[top--]);
    }
}
void Display(){
    if(top==-1){
        printf("Stack is empty\n");
    }else {
        int x=top;
        while(x!=-1){
            printf("%d  ",Stack[x--]);
        }
        printf("\n");
    }
}
int main(){
    // Manu of stack
    int C;
    do{
    printf("\n.........Stack Manu...........\nPlease Enter the choice:-\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
    scanf("%d",&C);
    switch (C)
    {
    case 1:
        Push();
        break;
    case 2:
        Pop();
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