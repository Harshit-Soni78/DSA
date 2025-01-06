#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* previous;
    node* next;

    //constructor
    node(int d){
        this->data=d;
        this->previous=NULL;
        this->next=NULL;
    }
};

void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int getlength(node* head){
    int count=0;
    while (head!=NULL){
        head=head->next;
        count++;
    }
    return count;
}

void insertathead(node* &head,node* &tail,int d){
    if(head==NULL){// this case when the list is empty than both head and tail will point NULL
        node* temp=new node(d);
        head=temp;
        tail=temp;
    }
    else{
    node* temp=new node(d);
    temp->next=head;
    head->previous=temp;
    head=temp;
    }
}

void insertattail(node* &tail,node* &head,int d){
    if(tail==NULL){// this case when the list is empty than both head and tail will point NULL
        node* temp=new node(d);
        tail=temp;
        head=temp;
    }
    else{
    node* temp=new node(d);
    temp->previous=tail;
    tail->next=temp;
    tail=temp;
    }
}

void insertatposition(node* &head,node* &tail,int position,int d){
    if(position==1)
    insertathead(head,tail,d);
    return ;

    node* temp=head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //insert at last position    
    if(temp->next==NULL){
        insertattail(tail,head,d);
        return;
    }

    //creating a node for d
    node* nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next->previous=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->previous=temp;

}

int main(){

    node *node1=new node(10);
    node* head=node1;
    node* tail=node1;

    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;

    cout<<"the length is:"<<getlength(head)<<endl;
    print(head); 

    insertathead(head,tail,14);
    print(head);

   cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;

    insertattail(tail,head,21);
    print(head);

    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;

    insertatposition(head,tail,2,24);
    print(head);

    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;

    
return 0;
}