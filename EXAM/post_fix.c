#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 50

char stack[MAX];
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}

int priority(char ch) {
    if (ch == '(')
        return 0;
    if (ch == '+' || ch == '-')
        return 1;
    if (ch == '*' || ch == '/')
        return 2;
    if (ch == '^')
        return 3;
}

int main(){

    char exp[MAX], x;
    printf("Enter the expression: ");
    scanf("%s", exp);
    for (int i = 0; i < strlen(exp); i++) {
        if (isalpha(exp[i])) {
            printf("%c", exp[i]);
        }
        else if (exp[i] == '(') {
            push(exp[i]);
        }
        else if (exp[i] == ')') {
            while (x = pop() != '(') {
                printf("%c", x);
            }
        }
        else {
            while (priority(exp[i]) <= priority(stack[top])) {
                printf("%c", pop());
            }
            push(exp[i]);
        }
    }

    while (top != -1) {
        printf("%c", pop());
    }

    return 0;
}