#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
void reverse(){
    int n, sum = 0;
    scanf("%d", &n);
    while ( n != 0 ){
        sum = (sum*10) + (n%10);
        n /= 10;
    }
    printf("%d", sum);
}
int main(){
    reverse();
    return 0;
}