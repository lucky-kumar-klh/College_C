#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int reverse(){
    int sum = 0, a;
    scanf("%d", &a);
    while ( a != 0 ){
        sum = (10*sum) + (a%10);
        a /= 10;
    }
    return sum;
}
int main(){
    printf("%d", reverse());
    return 0;
}