#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
void count(){
    int n, digit;
    scanf("%d", &n);
    if ( n > 0 ) digit = (floor)(log10(n)+1);
    else digit = 0;
    printf("%d has %d digits", n, digit);
}
int main(){
    count();
    return 0;
}