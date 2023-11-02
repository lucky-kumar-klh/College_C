#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int count(){
    int n;
    scanf("%d", &n);
    if ( n > 0 ) return (floor)(log10(n)+1);
    else return 0;
}
int main(){
    int ans = count();
    printf("%d digits", ans);
}