#include <stdio.h>
int main(){
    int d, a, an, sum = 0;
    scanf("%d %d %d", &a, &d, &an);
    for (int i = a; i <= an; i=i+d)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\n%d", sum);
    return 0;
}