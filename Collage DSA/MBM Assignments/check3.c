#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int  data_1;
    struct Node *next;
};
struct Node *creatNode(int data){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data_1 = data;
    newNode -> data_1 = NULL;
    return newNode;
}
void insertEnd(struct Node **head , int data){
    struct Node *newNode = creatNode(data);
    if (*head ==NULL)
    {
        *head = newNode;
    }
    else{
        struct Node
    }
    
}
int main()
{ 
     
return 0; 
}