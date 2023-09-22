#include <stdio.h>
#include <math.h>

int main(){
    int n, digit, sum = 0;
    printf("Enter any Octa Decimal Value : ");
    scanf("%d", &n);
    int num = n ,i = 0;
    while ( n > 0 ){
        digit = n % 10;
        sum = sum + digit*pow(8,i);
        i++;
        n = n / 10;
    }
    printf("Decimal value for %d is %d", num, sum);
    return 0;
}