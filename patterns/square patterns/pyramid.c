#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a = n+1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2*n-1; j++)
        {
            if ( i+j == n+1 && i+j == a ) printf("* ");
            else printf("  ");
        }
        a = a+2;
        printf("\n");
    }
    
    return 0;
}