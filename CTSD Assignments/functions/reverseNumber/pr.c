#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int reverse(int a){
    int sum = 0;
    while ( a != 0 ){
        sum = (10*sum) + (a%10);
        a /= 10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", reverse(n));   
    return 0;
}