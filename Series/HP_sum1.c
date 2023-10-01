#include <stdio.h>
int main(){
    int n;
    float sum = 1.00;
    scanf("%d", &n);
    printf("1");
    for (int i = 1; i < n; i++)
    {
        printf(" + 1/%d", i+1);
        sum += 1.0/(i+1);
    }
    printf("\nSum is %0.2f", sum);
    return 0;
}