#include <stdio.h>
#include <stdlib.h>

struct Node { 
    int data;
    struct Node *left, *right;
};
struct Node *rootNode = NULL;

void insert_Node(struct Node *rootNode, struct Node *newNode) {
    if (rootNode -> data > newNode -> data) {    // go to left
        if (!rootNode -> left) rootNode -> left = newNode;
        else insert_Node(rootNode -> left, newNode);
    }
    else {
        if (!rootNode -> right) rootNode -> right = newNode;
        else insert_Node(rootNode -> right, newNode);
    }
}

void binary_search(struct Node *node, int key) {
    if (key == node -> data) printf("%d Found!", node->data);
    else if (key > node -> data) {
        if (!node -> right) printf("%d NOT Found", key);
        else binary_search(node -> right, key);
    }
    else {
        if (!node -> left) printf("%d NOT Found", key);
        else binary_search(node -> left, key);
    }
}

void min_element(struct Node *node) {
    if (node == NULL) printf("No data");
    else {
        struct Node *temp = node;
        while (temp -> left)
            temp = temp -> left;
        printf("Min: %d", temp -> data);
    }
}

void create_BST(int data) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> left = NULL;
    newNode -> right = NULL;

    if (!rootNode) rootNode = newNode;
    else insert_Node(rootNode, newNode);
}

int main(){

    

    return 0;
}