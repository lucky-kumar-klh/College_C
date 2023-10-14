#include <stdio.h>
int main(){
    int n, sum = 0, digit;
    scanf("%d", &n);
    int original = n;
    while ( n > 0 ) {
        digit = n % 10;
        sum = sum*10 + digit;
        n = n/10;
    }
    printf("%d", sum);
    // if ( original == sum ) printf("Palindrom number");
    // else printf("Not a Palindrome");
    
}