#include <stdio.h>
#include <stdlib.h>
int choice, run = 1;

typedef struct Node {

    int data;
    struct Node* next;
}Node;

Node *head = NULL, *last = NULL;

void push() {  // Insert at last
    int choose = 1;
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
        printf("\nPress 1 to continue Pushing, 0 to Stop: ");
        scanf("%d", &choose);
    } while(choose != 0);
}

void pop() {   // Delete from last 
    if (head == NULL) {
        printf("Stack is Empty !\n");
        return;
    }
    Node* temp = head;
    while (temp -> next != last)
        temp = temp -> next;

    temp -> next = last -> next;
    printf("%d Successfully Poped !\n", last -> data);
    free(last);
    last = temp;
}

void peep() {   // Show from last
    if (last == NULL) {
        printf("Stack is Empty !\n");
        return;
    }
    printf("Last Element: %d", last -> data);
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
    printf("\n1. Push\n2. Pop\n3. Peep\n4. Display\n5. Exit\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
}

int main(){

    userChoice();
    while (run) {
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
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
                printf("Invalid Choice, Try Agian");
        }
        userChoice();
    }
    // return 0;
}