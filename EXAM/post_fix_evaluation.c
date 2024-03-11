#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX 50

char stack[MAX];
int top = -1;

void push (char c) {
    stack[++top] = c;
}

char pop () {
    return stack[top--];
}

int main(){

    char exp[MAX];
    int a, b;
    printf("Enter the Post-fix Expression: ");
    scanf("%s", exp);

    for (int i = 0; i < strlen(exp); i++) {
        if (isdigit(exp[i])) {
            push(exp[i]);
        }
        else {
            a = pop();
            b = pop();
            switch (exp[i]) {
                case '+':
                    push(b + a);
                    break;
                case '-':
                    push(b - a);
                    break;
                case '*':
                    push(b * a);
                    break;
                case '/':
                    push(b / a);
                    break;
                case '^':
                    push(pow(b, a));
                    break;
            }   
        }
    }

    while (top != -1) {
        printf("%d ", pop());
    }

    return 0;
}