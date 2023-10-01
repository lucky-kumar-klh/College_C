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
//----------------------------------------------------
// 1 + 3/2 + 5/4 + 7/8 + 9/16 + 11/32 + 13/64 + 15/128
// Sum is 5.85