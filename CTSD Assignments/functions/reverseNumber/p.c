#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
void reverse(int n){
    int sum = 0;
    while ( n != 0 ){
        sum = (sum*10) + (n%10);
        n /= 10;
    }
    printf("%d", sum);
}
int main(){
    int n;
    scanf("%d", &n);
    reverse(n);   
    return 0;
}