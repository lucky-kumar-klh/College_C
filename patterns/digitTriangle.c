#include <stdio.h>
#include <math.h>
int reverse(int a){
    int sum = 0;
    while ( a != 0 ){
        sum = sum*10 + a%10;
        a /= 10;
    }
    return sum;
}
int main(){
     int n;
    scanf("%d", &n);
    int noOfDigit = (floor)(log10(n)+1);
    int num = reverse(n);
    int dup, digit;
    for ( int  i = 0; i < noOfDigit; i++){
        dup = num;
        for ( int j = 1; j <= noOfDigit-i; j++)
        {
            digit = dup % 10;
            printf("%d ", digit);
            dup /= 10;
        }
        printf("\n");
    }
    return 0;
}