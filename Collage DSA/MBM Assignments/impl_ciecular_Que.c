//Implementing circular queue 

#include<stdio.h>
#define N 3

int cq[N];
int front = -1;
int rear = -1;

void insert(){
	int n;
	if((rear+1)%N == front){
		printf("Queue is full\n");
	}
	else{
		printf("Enter an element :");
		scanf("%d", &n);
		if(rear == -1 && front == -1){
			rear = front = 0;
		}
		else{
			rear = (rear+1)%N;
		}
        cq[rear]=n;
	}
}

void clear(){
	int n;
	if(rear== -1 && front == -1){
		printf("\n Queue is empty\n");
	}
	else{
		n = cq[front];
		printf("element deleted : %d\n", n);
		if(front == rear){
			front = rear = -1;
		}
		else{
			front = (front+1)%N;
		}
	}
}

void display(){
	int i ;
	if(rear==-1 && front==-1){
		printf("queue is empty \n ");
	}
	else{
		printf("Elements of Queue\n");
		for(i=front;i!=rear;(i=(i+1)%N)){
			printf("%d\t", cq[i]);
		}
		printf("%d\n", cq[i]);		
	}
}

int main(){
	insert();
	insert();
	insert();
	insert();
	display();
	clear();
	clear();
	clear();

	return 0;
}