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