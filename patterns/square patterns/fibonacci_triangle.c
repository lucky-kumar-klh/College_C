#include <stdio.h>
int fibonacci(int a){
    if ( a == 0 ) return 1;
    if ( a == 1 ) return 1;
    return fibonacci(a-1)+fibonacci(a-2);
}
int main(){
    int m;
    scanf("%d", &m);
    printf("********************************\n");
    int a = 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = m; j >= 1; j--)
        {
            if ( j <= i ) printf("%d ", fibonacci(a));
            
            else printf("  ");
            
        }
        printf("\n");
        a++;
    }
    printf("********************************\n");
    return 0;
}