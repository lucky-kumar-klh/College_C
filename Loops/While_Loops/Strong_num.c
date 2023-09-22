#include <stdio.h>
int factorial(int a){
    if ( a == 0 || a == 1 ) return 1;
    return a*factorial(a-1);
}
int main(){
    int n, sum = 0, digit, dup;
    scanf("%d", &n);
    dup = n;
    for ( int i = 0; n > 0; i++){
        digit = n % 10;
        sum = sum + factorial(digit);
        n = n / 10;
    }
    
    if ( dup == sum ) printf("%d is Strong Number\n", dup);
    else printf("%d is NOT a Strong Number\n", dup);
    
    return 0;
}