#include <stdio.h>

int main(){
    int m;
    scanf("%d", &m);
    printf("********************************\n");
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("* ");   
        }
        printf("\n");
    }
    printf("********************************\n");
    return 0;
}