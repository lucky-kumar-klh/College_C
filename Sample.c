#include<stdio.h>
int main(){
    
    int n, count = 0, digit;
    scanf("%d", &n);

    while ( n > 0 ){
        digit = n % 10;
        count = count + 1;
        n = n / 10;
    }

    printf("%d", count);

}