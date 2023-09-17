#include<stdio.h>
int main(){
    int n, fact = 1, ans;
    int a;
    printf("Enter any number : ");
    scanf("%d", &n);
    ans = n;
    if ( n == 0 ) a = 1;
    else while ( n != 0 )fact = fact * n--; 
    if( a == 1 ) printf("Factorial of 0 is 1");
    else printf("Factorial of %d is %d", ans, fact);

    return 0;
}