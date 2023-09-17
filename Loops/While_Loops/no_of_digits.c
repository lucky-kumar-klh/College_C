#include <stdio.h>
int main (){
    int n, rem = 0, count = 0;
    printf("Enter any number : ");
    scanf("%d", &n);
    while ( n > 0 ){
        rem = rem + (n%10);
        n = n/10;
        count++;
    }
    printf("No of digits is %d", count);
    return 0;
}