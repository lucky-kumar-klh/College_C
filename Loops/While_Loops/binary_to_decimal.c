#include <stdio.h>
#include <math.h>
int main(){
    int n, digit, sum = 0, i = 0;
    printf("Enter any binary number : ");
    scanf("%d", &n);
    while ( n > 0 ){
        digit = n % 10;
        sum = sum + digit*pow(2,i); 
        n = n / 10;
        i++;
    }
    printf("Decimal number is %d", sum);
    return 0;
}