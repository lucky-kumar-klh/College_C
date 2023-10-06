#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    printf("1/1");
    for (int i = 2; i <= n; i++)
    {
        printf(" , 1/%d", i);
    }
    return 0;
}