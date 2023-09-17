#include <stdio.h>
#include <math.h>
int main (){
    int n, sum = 0, i = 0;
    printf("Enter any number : ");
    scanf("%d", &n);
    while ( i <= n ) sum = sum + pow(i++,2);
    printf("Sum is %d", sum);
    return 0;
}