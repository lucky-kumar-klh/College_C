#include <stdio.h>
int main(){
    int n, prod = 1;
    printf("Enter any number : ");
    scanf("%d", &n);
    while ( n > 0 ){
        prod = prod * (n%10);
        n = n/10;
    }
    printf("No of digits is %d", prod);
    return 0;
}