#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n-i; j++)
        {
            printf("%d ", i+a);
            a++;
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", k);
        }
        
        printf("\n");
    }
    
    return 0;
}