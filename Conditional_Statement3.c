#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &a, &b);

    (a > b) ? (c = a / b, d = a % b) : (c = a * b, d = a + b);
    // ( condition ) ? ( stat_1, stat_2, ... ) : ( stat_1, stat_2, .... );
    // Therefore 2 or more conditions are separated by using ',' symbol in a particular true or false statements
    printf("c is %d & d is %d", c, d);
    return 0;
}