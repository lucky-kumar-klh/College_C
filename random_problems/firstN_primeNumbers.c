#include <stdio.h>
int main(){
    int n, c = 1;
    scanf("%d", &n);
    for (int i = 2; c <= n; i++)
    {
        int k = 0;
        for (int j = 2; j <= i/2; j++)
        {
            if ( i % j == 0 && i != j ) k = 1;
            
        }
        if ( k == 0 )
        {
            printf("%d ", i);
            c++;
        }
    }
    return 0;
}