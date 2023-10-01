#include <stdio.h>
int main(){
    int n;
    int a = 3;
    float sum = 1.00;
    scanf("%d", &n);
    printf("1");
    for (int i = 2; i < 2*n-1; i=i+2)
    {
        printf(" + %d/%d", a, i);
        sum += (1.0*a)/i;
        a = a+2;
    }
    printf("\nSum is %0.2f", sum);
    return 0;
}
//--------------------------------------------
// 1 + 3/2 + 5/4 + 7/6 + 9/8 + 11/10 + 13/12
// Sum is 8.22