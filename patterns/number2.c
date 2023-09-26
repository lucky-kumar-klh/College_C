#include <stdio.h>
int main(){
    int n, a = 1;
    scanf("%d", &n);
    printf("-----------------------------\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
    printf("-----------------------------\n");
    
    return 0;
}