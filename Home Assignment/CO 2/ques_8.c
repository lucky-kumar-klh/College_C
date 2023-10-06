#include <stdio.h>
int fact(int a){
    int prod = 1;
    for (int i = a; i >= 1; i--)  prod *= i;
    return prod;
}
int main(){
    int n;
    scanf("%d", &n);
    int dup = n, sum = 0, digit;
    while ( dup != 0 )
    {
        digit = dup % 10;
        sum += fact(digit);
        dup /= 10;
    }
    if ( n == sum ) printf("%d is a Strong Number", n);
    else printf("%d is NOT a Strong Number", n);
    return 0;
}