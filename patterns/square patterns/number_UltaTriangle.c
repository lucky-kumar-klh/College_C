#include <stdio.h>
int main(){
    int m;
    scanf("%d", &m);
    printf("********************************\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j <= m-i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("********************************\n");
    return 0;
}