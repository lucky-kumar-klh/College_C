#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1+i;
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", a++);
        }
        printf("\n");
    }
    
    return 0;
}