#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *add; // Stores the address of the next node so this pointeris of structure type
};struct node *start=NULL,*temp,*new1,*prev,*next;

void Create(){
    int n;
    printf("Enter the data\n");
    scanf("%d",&n);
    start = (struct node*)malloc(sizeof(struct node));
    start->data=n;
    start->add=NULL;
    temp=start;
    char c;
    printf("Do you want to continue\n");
    scanf("%c",&c);
    while(c=='Y'|| c=='y'){
        printf("Enter Next value\n");
        scanf("%d",&n);
        new1=(struct node*)malloc(sizeof(struct node));
        new1->data=n;
        new1->add=NULL;
        temp->add=new1;
        temp=temp->add;
        printf("Do you want to continue\n");
        scanf("%c",&c);
    }
}

void Display(){
    if(start==NULL){
        printf("List is empty\n");
    }else{
        temp=start;
        printf("Data in the list are:- \n");
        while(temp!=NULL){
            printf("%d  ",temp->data);
            temp=temp->add;
        }
        printf("\n");
    }
}

void Insert_from_first(){
    if(start==NULL){
        printf("List is empty\n");
    }else{
        int data;
        printf("Enter the data\n");
        scanf("%d",&data);
        new1=(struct node*)(malloc(sizeof(struct node)));
        new1->data=data;
        new1->add=NULL;
        new1->add=start;
        start=new1;
    }
}

void Insert_from_middle(){
    if(start==NULL){
        printf("List is empty\n");
    }else{
        int data,loc;
        printf("Enter the location\n");
        scanf("%d",&loc);
        printf("Enter the data\n");
        scanf("%d",&data);
        new1=(struct node*)(malloc(sizeof(struct node)));
        new1->data=data;
        new1->add=NULL;
        next= start;
        for (int i = 1; i < loc; i++)
        {
            prev=next;
            next=next->add;
        }
        prev->add=new1;
        new1->add=next;
    }
}

void Insert_from_last(){
    if(start==NULL){
        printf("List is empty\n");
    }else{
        int data;
        printf("Enter the data\n");
        scanf("%d",&data);
        new1=(struct node*)(malloc(sizeof(struct node)));
        new1->data=data;
        new1->add=NULL;
        temp=start;
        while(temp->add!=NULL){
            temp=temp->add;
        }
        temp->add=new1;
    }
}

void Delete_from_first(){
    if(start==NULL){
        printf("List is empty\n");
    }else{
        temp=start;
        start=start->add;
        printf("Deleted node is %d\n",temp->data);
        free(temp);
    }
}

void Delete_from_middle(){
    if(start==NULL){
        printf("List is empty\n");
    }else{
        int loc;
        printf("Enter the location\n");
        scanf("%d",&loc);
        next= start;
        for (int i = 1; i < loc; i++)
        {
            prev=next;
            next=next->add;
        }
        printf("Deleted node is %d\n",next->data);
        next->add=prev->add;
        free(next);
    }
}

void Delete_from_last(){
    if(start==NULL){
        printf("List is empty\n");
    }else{
        temp=start;
        while(temp->add!=NULL){
            prev=temp;
            temp=temp->add;
        }
        printf("Deleted node is %d\n",temp->data);
        prev->add=NULL;
        free(temp);
    }
}

void Exit(){
    if(start==NULL){
        return;
    }else{
        temp=start;
        while(temp!=NULL){
            prev=temp;
            temp=temp->add;
            free(prev);
        }
    }
}

int main(){
    // Manu of Linked List
    int C;
    do{
    printf("\n.........Linked List Manu...........\nPlease Enter the choice:-\n1. Create\n2. Display\n3. Insert From First\n4. Insert From Middle\n5. Insert From last\n6. Delete From First\n7. Delete From Middle\n8. Delete From Last\n9. Exit\n");
    scanf("%d",&C);
    switch (C)
    {
    case 1:
        Create();
        break;
    case 2:
        Display();
        break;
    case 3:
        Insert_from_first();
        break;
    case 4:
        Insert_from_middle();
        break;
    case 5:
        Insert_from_last();
        break;
    case 6:
        Delete_from_first();
        break;
    case 7:
        Delete_from_middle();
        break;
    case 8:
        Delete_from_last();
        break;
    case 9:
        Exit();
        printf("Thank You\n");
        break;
    default:
        printf("Entered Wrong Choise\nPlease Try Again\n");
        break;
    }
    }while(C!=9);
    return 0;
}