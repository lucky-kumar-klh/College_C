#include <stdio.h>
#include <math.h>
int binary(int num){
    int sum = 0, digit, i = 0;
    while ( num != 0 ){
        digit = num & 1;
        sum = sum + (digit*pow(10,i));
        i++;
        num = num >> 1;
    }
    return sum;
}
int main(){
    int num, count = 0, n;
    printf("Enter any number : ");
    scanf("%d", &num);
    n = binary(num);
    printf("Binary of %d is %d\n", num, n);
    while ( n != 0 ){
        if ( n%10 == 0 ) count++;
        n = n / 10;
    }
    printf("No of zeroes is %d", count);
    return 0;
}