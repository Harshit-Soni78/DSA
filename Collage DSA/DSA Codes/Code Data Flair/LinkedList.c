#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node *add;
};struct node *start = NULL , *temp ,*new1 , *prev , *next;

void Create(){
    int n;
    char ch;
    printf("Enter an Element\n");
    scanf("%d",&n);
    start = (struct node*)(malloc(sizeof(struct node))); // malloc returns void ponter so we are explisitly converting void pointer to struct node* pointer
    start -> data =n;
    start -> add = NULL;
    temp = start;
    printf("Want to continue :- ");
    scanf("%c",&ch);
    scanf("%c",&ch);
    while (ch=='y'|| ch=='Y')
    {
        printf("Enter next element\n");
        scanf("%d",&n);
        new1 = (struct node*)(malloc(sizeof(struct node)));
        new1->data = n;
        new1-> add = NULL;
        temp->add=new1;
        temp = temp->add;
        printf("Want to continue :- ");
        scanf("%c",&ch);
        scanf("%c",&ch);
    }
}

void Display(){
    if(start==NULL){
        printf("List Nost Found\n");
    }
    else {
            temp = start;
            while (temp!=NULL)
            {
                printf("%d \n", temp->data);
                temp=temp->add;
            }           
    }
}
void Insert_on_First(){
    if (start==NULL)
    {
        printf("List not Found\n");
    }else{
        int n;
        printf("Enter new Element\n");
        scanf("%d",&n);
        new1 = (struct node*)(malloc(sizeof(struct node)));
        new1->data =n;
        new1->add=NULL;
        new1->add=start;
        start= new1;
    }
}
void Insert_on_Middle(){
    if (start==NULL)
    {
        printf("List not Found\n");
    }else{
        int n,pos;
        printf("Enter new Element\n");
        scanf("%d",&n);
        new1 = (struct node*)(malloc(sizeof(struct node)));
        new1->data =n;
        new1->add=NULL;
        printf("Enter the Position\n");
        scanf("%d",&pos);
        next=start;
        for (int i = 1; i < pos; i++)
        {
            prev = next ;
            next = next->add;
        }
        prev->add=new1;
        new1->add = next;
    }
}
void Insert_on_Last(){
    if (start==NULL)
    {
        printf("List not Found\n");
    }else{
        int n;
        printf("Enter new Element\n");
        scanf("%d",&n);
        new1 = (struct node*)(malloc(sizeof(struct node)));
        new1->data =n;
        new1->add=NULL;
        temp=start;
        while (temp->add != NULL)
        {
            temp=temp->add;
        }
        temp->add=new1;
    }
}
void Delete_on_First(){
    if(start==NULL){
        printf("List not Found\n");
    }else {
        temp=start;
        start=start->add;
        printf("Deleted node is %d\n",temp->data);
        free(temp);
    }
}
void Delete_on_Middle(){
    if(start==NULL){
        printf("List not Found\n");
    }else {
        int pos;
        printf("Enter the Position\n");
        scanf("%d",&pos);
        next=start;
        for (int i = 1; i < pos; i++)
        {
            prev = temp ;
            temp=temp->add;
        }
        next = temp->add;
        prev->add=next;
        printf("Deleted node is %d\n",temp->data);
        free(temp);
    }
}
void Delete_on_Last(){
    if(start==NULL){
        printf("List not Found\n");
    }else {
        temp=start;
        while (temp->add != NULL)
        {
            prev=temp;
            temp=temp->add;
        }
        prev->add=NULL;
        printf("Deleted node is %d\n",temp->data);
        free(temp);
    }
}
int main()
{
    int choise;
    do
    {
        printf("\n..............Linked List Manu..............\n");
        printf("1. Create\n2. Insert on First\n3. Insert on Middle\n4. Insert on Last\n5. Delete on First\n6. Delete on Middle\n7. Delete on Last\n8. Display\n9. Exit\n");
        printf("...........................................\n");
        printf(".........Please Enter Your Choise.........\n");
        scanf("%d", &choise);
        printf("\n");
        switch (choise)
        {
        case 1:
            Create();
            break;
        case 2:
            Insert_on_First();
            break;
        case 3:
            Insert_on_Middle();
            break;
        case 4:
            Insert_on_Last();
            break;
        case 5:
            Delete_on_First();
            break;
        case 6:
            Delete_on_Middle();
            break;
        case 7:
            Delete_on_Last();
            break;
        case 8:
            Display();
            break;
        case 9:
            printf("Exiting Manu\nThank You\n");
            break;
        default:
            printf("You Entered Wrong Choise\n");
            break;
        }
    } while (choise != 9);
    return 0;
}
