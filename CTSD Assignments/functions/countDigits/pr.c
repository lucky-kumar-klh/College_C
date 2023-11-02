#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int count(int a){
    if ( a == 0 ) return 0;
    return ((floor)(log10(a)+1));
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d has %d digits", n, count(n));
    return 0;
}