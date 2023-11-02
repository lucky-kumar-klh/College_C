#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
void count(int a){
    int digit;
    if ( a != 0 ) digit = (floor)(log10(a)+1);
    else digit = 0;
    printf("%d has %d digits", a, digit);
}
int main(){
    int n;
    scanf("%d", &n);
    count(n);
    return 0;
}