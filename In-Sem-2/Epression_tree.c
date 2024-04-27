#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct Node {
    char data;
    struct Node* left;
    struct Node* right;
};

struct Node* stack[30];
int top = -1;

void inOrder(struct Node* temp) {
    if (!temp) return;

    inOrder(temp -> left);
    printf("%c ", temp -> data);
    inOrder(temp -> right);
}

void push(struct Node* temp) {stack[++top] = temp;}

struct Node* pop() {return stack[top--];}

int main(){

    char exp[50];
    printf("Enter the PostFix Expression: ");
    scanf("%s", exp);

    for (int i = 0; exp[i] != '\0'; i++) {
        if (isalpha(exp[i])) {
            struct Node* newNode = malloc(sizeof(struct Node));
            newNode -> data = exp[i];
            newNode -> left = NULL;
            newNode -> right = NULL;

            push(newNode);
        } 
        else if (exp[i]=='-'||exp[i]=='+'||exp[i]=='*'||exp[i]=='/'||exp[i]=='^') {
            struct Node* l, *r;
            l = pop();
            r = pop();
            struct Node* newNode = malloc(sizeof(struct Node));
            newNode -> data = exp[i];
            newNode -> right = l;
            newNode -> left = r;

            push(newNode);
        }
    }
    
    inOrder(stack[0]);

    return 0;
}