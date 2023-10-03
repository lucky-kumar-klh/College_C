#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // for spaces
        for (int j = 1; j <= n-i; j++)
        {
            printf("  ");
        }
        // for numbers
        int m = 1;
        for (int k = 1; k <= 2*i-1; k++)
        {
            if ( k%2 != 0 ){
                printf("%d ", m++);
            }
            else printf("  ");
        }
        
        printf("\n");
    }
    int i = 0;
    int arr[i] = pow(11,i);
    
    return 0;
}