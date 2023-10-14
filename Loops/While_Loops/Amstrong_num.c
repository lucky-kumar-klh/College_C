#include <stdio.h>
#include <math.h>
int noOfDigits(int a){
    int count = 0;
    while ( a > 0 ){
        a = a / 10;
        count++;
    }
    return count;
}
int main(){
    int n, sum = 0, digit, dup;
    scanf("%d", &n);
    dup = n;
    for (int i = 0; n > 0 ; i++)
    {
        digit = n % 10;
        sum = sum + pow(digit,noOfDigits(dup));
        n = n / 10;
    }
    printf("Sum is %d\n", sum);
    if ( sum == dup ) printf("%d is an Amstrong number\n", dup);
    else printf("%d Not an Amstrong number\n", dup);
}