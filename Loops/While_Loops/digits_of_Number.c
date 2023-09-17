#include <stdio.h>
#include <math.h>
int main(){
    int n, count = 0;
    printf("Enter any number : ");
    scanf("%d", &n);
    while ( abs(n) > 0 ){
        n = n/10;
        count++;
    }
    printf("No of digits is %d", count);
    return 0;
}