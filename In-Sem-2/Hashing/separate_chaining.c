#include <stdio.h>
#include <stdlib.h>
#define size 10

struct Node {
    int data;
    struct Node* next;
};

struct Node* chain[size];

void insert(int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = NULL;

    int index = data % size;
    if (chain[index] == NULL) chain[index] = newNode;
    else {
        struct Node* temp = chain[index];
        while (temp -> next != NULL) 
            temp = temp -> next;

        temp -> next = newNode;
    }
}

void print() {
    printf("Data in Seperate Chain:\n");
    for (int i = 0; i < size; i++) {
        struct Node* temp = chain[i];
        printf("%d -> ", i);
        while (temp != NULL) {
            printf("%d ", temp -> data);
            temp = temp -> next;
        }
        printf("\n");
    }
}

int main(){

    // Initializing the Chain with NULL values
    for (int i = 0; i < size; i++)
        chain[i] = NULL;

    int choice, data, print_choice = 0;
    do {
        printf("Enter data: ");
        scanf("%d", &data);
        insert(data);
        printf("Want to print Data: ");
        scanf("%d", &print_choice);
        if (print_choice) print();
        printf("Your Choice: ");
        scanf("%d", &choice);
    } while (choice != 0);

    print();

    return 0;
}