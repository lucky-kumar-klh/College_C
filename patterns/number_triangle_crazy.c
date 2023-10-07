#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int add = 0;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i+add); 
            add += (n-j);
        }
        printf("\n");
    }
    
    return 0;
}