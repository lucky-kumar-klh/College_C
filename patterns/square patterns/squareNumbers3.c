#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a = 0;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", n-i+a);
            a++;
        }
        for (int k = 1; k <= n-i; k++)
        {
            printf("%d ", n);
        }
        
        printf("\n");
    }
    return 0;
}