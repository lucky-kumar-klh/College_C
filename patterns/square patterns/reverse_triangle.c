#include <stdio.h>
int main(){
    int m;
    scanf("%d", &m);
    printf("********************************\n");
    for (int i = 1; i <= m; i++)
    {
        for (int j = m; j >= 1; j--)
        {
            if ( j <= i ) printf("%d ", j);
            else printf("  ");
        }
        printf("\n");
    }
    printf("********************************\n");
    return 0;
}