#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    a > b ? printf("Sum is : %d", b + c) : printf("Product is : %d", b * c);

    // ? - True Statement
    // : - False Statement

    return 0;
}