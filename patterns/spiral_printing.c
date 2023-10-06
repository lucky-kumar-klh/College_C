#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        if ( i % 2 == 0 )
        {
            for (int j = 0; i < n; j++)
            { 
                printf("%d ", arr[j]);
            }
        }
        else
        {
            for (int k = n-1; k >= 0; k--)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}