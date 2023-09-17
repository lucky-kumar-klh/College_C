#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter all the sides of a triangle : ");
    scanf("%d %d %d", &a,& b, &c);
    if ( a==b && b==c && c==a ) printf("It is an Equalatral Triangle\n");
    else if ( a==b || b==c || c==a ) printf("Isocleses Triangle\n");
    else if ( a!=b && b!=c && c!=a ) printf("Scalene Triangle\n");
    
    return 0;
}