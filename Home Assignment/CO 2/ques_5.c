#include <stdio.h>
int main(){
    int n, k, j;
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        // even lines ( i = 1, 3, 5, ... )
        if ( i%2 == 0 )
        {
            int b = n*i;
            for ( j = 1; j <= n; j++)
            {
                printf("%d ", b--);
            }
        }
        // odd lines ( i = 2, 4, 6, ... )
        else {
            for ( k = 1; k <= n; k++)
            {
                printf("%d ", a++);
                if ( k == n ) a += n;
            }
        }
        printf("\n");
    }
    
    return 0;
}