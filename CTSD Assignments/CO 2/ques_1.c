#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }
        // numbers
        for (int k = 1; k <= 2*(n-i)-1; k++)
        {
            if ( k % 2 == 0 ) printf("  ");
            else printf("* ");
        }
        printf("\n");
        
    }
    
    return 0;
}