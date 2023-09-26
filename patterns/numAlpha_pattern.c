#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x = 1, y = 65;
        for (int j = 0; j < i; j++)
        {
            if ( i % 2 == 0 ) {
                printf("%d ", x);
                x++;
            }
            else {
                printf("%c ", y);
                y++;
            }
        }
        printf("\n");
    }
    
    return 0;
}