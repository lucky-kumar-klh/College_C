#include <stdio.h>
#include <stdlib.h>
int choice, run = 1, choose = 1;

typedef struct Node {

    int data;
    struct Node* next;
}Node;

Node *head = NULL, *last = NULL;

void enque() {  // Insert at last
    do {
        Node* newNode = (Node*)malloc(12);
        int data;
        printf("Enter Data: ");
        scanf("%d", &data);
        newNode -> data = data;
        newNode -> next = NULL;

        if (head == NULL) {
            head = newNode;
            last = newNode;
        }
        else {
            last -> next = newNode;
            last = newNode;
        }
        printf("\nPress 1 to Enque, 0 to Stop: ");
        scanf("%d", &choose);
    } while(choose);
}

void dequeu() {   // Delete head 
    if (head == NULL) {
        printf("Queue is Empty !\n");
        return;
    }
    Node* temp = head -> next;
    printf("%d successfully Dequeued\n", head -> data);
    free(head);
    head = temp;
}

void peep() {
    if (head == NULL) {
        printf("Empty Queue !\n");
        return;
    }
    printf("Rear: %d\nFront: %d\n", head -> data, last -> data);
}

void display() {
    if (head == NULL) {
        printf("Empty Stack !\n");
        return;
    }
    Node* temp = head;
    printf("Stack: ");
    while (temp != NULL) {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

void userChoice() {
    printf("\n1. Enque\n2. Dequeue\n3. Peep\n4. Display\n5. Exit\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
}

int main(){

    userChoice();
    while (run) {
        switch (choice) {
            case 1:
                enque();
                break;
            case 2:
                dequeu();
                break;
            case 3:
                peep();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Thank you for using the Program");
                return 0;
            default:
                printf("Invalid Choice, Try Agian\n");
        }
        userChoice();
    }
    // return 0;
}