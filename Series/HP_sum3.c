#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int a;  
    float sum = 1.00;
    scanf("%d", &n);
    printf("1");
    for (int i = 2; i <= n; i++)
    {
        a = i*i;
        printf(" + 1/%d", a);
        sum += 1.0/a;
    }
    printf("\nSum is %0.2f", sum);
    return 0;
}
//--------------------------------------------
// 1 + 1/4 + 1/9 + 1/16 + 1/25 + 1/36 + 1/49
// Sum is 1.51