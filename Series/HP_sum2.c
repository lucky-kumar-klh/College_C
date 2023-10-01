#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int a, b = 3;  // powers
    float sum = 1.00;
    scanf("%d", &n);
    printf("1");
    for (int i = 1; i < n; i++)
    {
        a = pow(2,i);
        printf(" + %d/%d", b, a);
        sum += (b*1.0)/a;
        b = b+2;
    }
    printf("\nSum is %0.2f", sum);
    return 0;
}