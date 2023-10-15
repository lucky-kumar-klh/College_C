#include <stdio.h>
#include <stdbool.h>
int main(){
    printf("Simple Calculator\n\n\n");
    int n;
    float a, b;
    bool x = 1;
    while ( x ) {
        printf("*********\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &n);
        switch ( n ){
        case 1:
            printf("Enter 2 numbers for Addition : ");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f + %.2f = %.2f\n\n", a, b, a+b);
            break;
        
        case 2:
            printf("Enter 2 numbers for Subtraction : ");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f - %.2f = %.2f\n\n", a, b, a-b);
            break;
        
        case 3:
            printf("Enter 2 numbers for Multiplication : ");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f * %.2f = %.2f\n\n", a, b, a*b);
            break;
        
        case 4:
            printf("Enter 2 numbers for Division : ");
            scanf("%f %f", &a, &b);
            if ( b == 0 ) printf("Error: Division by zero is not allowed.\n\n");
            else printf("Result: %.2f / %.2f = %.2f\n\n", a, b, a/b);
            break;
        
        case 5:
            x = 0;
            break;
        }
    }
    printf("Thank you for using the calculator.");
}