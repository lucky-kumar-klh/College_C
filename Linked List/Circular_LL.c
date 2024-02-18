#include <stdio.h>
#include <stdlib.h>

int list_length = 0, choice;

typedef struct Node {

    int data;
    struct Node* next;
}Node;

Node* head = NULL;
Node* currentNode = NULL;

void createList() {

    int value;
    printf("Enter Value: ");
    scanf("%d", &value);
    Node* newNode = (Node*)malloc(sizeof(12));
    newNode -> data = value;
    newNode -> next = newNode;

    list_length++;
    head = newNode;
    currentNode = newNode;
}

void insertAtBegin() {

    if (head == NULL) {
        printf("\nCreate a Node first\n");
        return;
    }
    int value;
    printf("Enter Value: ");
    scanf("%d", &value);
    Node* newNode = (Node*)malloc(sizeof(12));
    newNode -> data = value;

    newNode -> next = head;
    head = newNode;
    currentNode -> next = newNode;
    list_length++;
}

void insertAtLast() {

    if (head == NULL) {
        printf("\nCreate a Node first\n");
        return;
    }   
    int value;
    printf("Enter Value: ");
    scanf("%d", &value);
    Node* newNode = (Node*)malloc(sizeof(12));
    newNode -> data = value;
    
    if (head -> next == head) {
        head -> next = newNode;
        newNode -> next = head;
    } else {
        newNode -> next = head;
        currentNode -> next = newNode;
        currentNode = newNode;
    }
    list_length++;
}

void insertAtPosition() {
    
    if (head == NULL) {
        printf("\nCreate a Node first\n");
        return;
    } 
    int position, i = 2, value;
    printf("Enter the position: ");
    scanf("%d", &position);

    if (position > list_length+1 || position < 1) {
        printf("Enter a Valid Position\n");
        return;
    }

    list_length++;
    printf("Enter the Value: ");
    scanf("%d", &value);
    Node* newNode = (Node*)malloc(sizeof(12));
    newNode -> data = value;

    if (position == 1){   // Insert At Begin
        newNode -> next = head;
        head = newNode;
        currentNode -> next = newNode;
    }
    else if (position == list_length+1) {   // Insert At End
        currentNode -> next = newNode;
        currentNode = newNode;
        newNode -> next = head;
    }
    else {
        Node* temp = head;
        while (i < position) {
            temp = temp -> next;
            i++;
        }
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }
}

void printList() {
    if (head == NULL) {
        printf("List is Empty\n");
        return;
    }
    if (list_length == 1) {
        printf("List: %d\n", head->data);
        printf("\nNo of Nodes: %d\n", list_length);
        return;
    }
    Node* temp = head;
    int i = 0;
    printf("\nList: ");
    while (i != list_length) {
        printf("%d ", temp -> data);
        temp = temp -> next;
        i++;
    }
    printf("No of Nodes: %d\n", list_length);
    printf("\nCurrent Node: %d\nHead Node: %d\n", currentNode->data, head->data);
}

void showOptions() {
    printf("\n1. Create List\n2. Insert At Begin\n3. Insert At Last\n4. Insert At Position\n5. Display List\n6. Exit\nYour Choice: ");
    scanf("%d", &choice);
}

int main(){

    while (1) {
        showOptions();
        switch (choice) {
            case 1:
                createList();
                break;
            case 2:
                insertAtBegin();
                break;
            case 3:
                insertAtLast();
                break;
            case 4:
                insertAtPosition();
                break;
            case 5:
                printList();
                break;
            case 6:
                printf("\nThank you For using My Program\n");
                exit(1);
            default:
                printf("Enter a Valid Choice bro -_-");
        }
    }
    return 0;
}