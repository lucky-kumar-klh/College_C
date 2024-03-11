#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int queue[MAX];
int front = -1, rear = -1;

void insert(int d) {
    // full 
    if ((rear == -1 && front == 0) || (front-1 == rear)) {
        printf("Queue is FULL !\n");
        return;
    }
    // empty
    if (rear == -1) 
        front = 0;

    // regular case
    queue[++rear] = d;
}

int delete() {
    // empty
    if (rear == -1) {
        printf("Empty Queue!\n");
        return -1;
    }
    // Only One element is left
    if (rear == front) {
        int x = queue[rear];
        rear = -1;
        front = -1;
        return x;
    }

    // regular
    int x = queue[front];
    front = (front+1) % MAX;
    return x;
}

void display() {
    if (front <= rear) {
        printf("Queue: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
    else {
        for(int i = 0; i <= rear; i++)
            printf("%d ",queue[i]);
        
        for(int j = front; j < MAX; j++)
            printf("%d ",queue[j]);
    }
}

int main(){

    
    return 0;
}