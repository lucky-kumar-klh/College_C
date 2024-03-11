#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* top = NULL;

void push(int d) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode -> data = d;
    newNode -> next = NULL;
    if (top == NULL)
        top = newNode;
    else {
        newNode -> next = top;
        top = newNode;
    }
}

void pop() {
    if (top == NULL) {
        printf("Empty Stack\n");
        return;
    }
    struct Node* del = top;
    top = top -> next;
    free(del);

}

void display() {
    if (top == NULL) {
        printf("Empty Stack\n");
        return;
    }
    struct Node* temp = top;
    printf("\n");
    while (temp != NULL) {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
}

int main(){

    push(1);
    push(2);
    push(3);
    
    display();

    pop();

    display();

    return 0;
}