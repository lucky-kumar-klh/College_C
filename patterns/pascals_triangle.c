#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)  // to print spaces
        {
            printf("  ");   
        }
        for (int k = 1; k <= (2*i)-1; k++)   // to print numbers
        {
            if ( k <= i ) printf("%d ", k);
            else printf("%d ", abs(k-(2*i)));
        }
        printf("\n");
    }
    return 0;
}