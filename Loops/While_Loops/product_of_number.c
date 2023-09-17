#include <stdio.h>
int main(){
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);
    while ( b > 0 ) {
        sum = sum + a;
        b--;
    }
    printf("Product is %d", sum);
}