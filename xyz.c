#include <stdio.h>
#define n 20
int arr[n];
int rear = -1, front = -1;

void enqueue(){
	int value;
	printf("Enter value : ");
	scanf("%d", &value);
	if (front == -1){   // empty queue
		front = 0, rear = 0;
		arr[front] = value;
	}
	else if (front == n-1){
		printf("Queue is full");
	}
	else {
		front++;
		arr[front] = value;
	}
}

void dequeue(){
	if (front == -1){   // Empty Queue
		printf("Queue is Empty");
	}
	else if (front == rear){    // Only one element is left
		printf("%d is dequeued", arr[rear]);
		rear = -1, front = -1;
	}
	else {
		printf("%d is dequeued", arr[rear]);
		rear++;
	}
}

void display(){
	if (front == -1){
		printf("Queue is Empty");
	}
	else {
		printf("\nQueue is : ");
		for (int i = rear; i <= front; i++){
			printf("%d ", arr[i]);
		}
	}
}

int main(){
	enqueue();
	enqueue();
	enqueue();
	dequeue();
	display();
	return 0;
}