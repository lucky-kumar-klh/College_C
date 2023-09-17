#include <stdio.h>
#include <math.h>
int main(){
    int n, digit, sum = 0, i = 0;
    printf("Enter any decimal number : ");
    scanf("%d", &n);
    while ( n != 0 ){
        digit = n & 1;
        sum = sum + (digit*pow(10,i));
        i++;
        n = n >> 1;
    }
    printf("Binary number is %d", sum);
    return 0;
}