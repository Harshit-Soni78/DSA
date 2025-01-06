// Implementation of queue

#include<stdio.h>
#define N 5

int queue[N];
int front = 0;
int rear = -1;

int isFull(){
	if(rear== N-1)
		return 1;
	else
		return 0;
}

int isEmpty(){
	if(front>rear )//|| front == -1
		return 1;
	else
		return 0;
}

void enque(int data){
	if(isFull()){
		printf("Queue is Full\n");
	}
	else{
		rear++;
		queue[rear] = data;
		printf("Inserted data!!\n");
	}
}

int deque(){
	if(isEmpty()){
		printf("Queue is Empty\n");
	}
	else{
		int val = queue[front];
		printf("element : %d\n",val);
		front++;
	}
}

void display(){
	int n = rear,i;
	for(i=0;i<=n;i++){
		printf("%d\t", queue[i]);
	}
	printf("\n");
}

int main(){
	enque(5);
	enque(4);
	enque(3);
	display();
	enque(6);
	enque(9);
	enque(1);
	display();
	deque();
	deque();
	deque();
	deque();
	deque();
	deque();

	return 0;
}