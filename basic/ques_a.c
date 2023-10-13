#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    
    if ( a > b )
    {
        if ( b > c )
        {
            printf(" %d %d %d", c, b, a);
        }
        else {
            printf(" %d ", b);
            if ( a > b ) printf(" %d %d ", c, a);
            else printf(" %d %d ", a, c);
        }  
    }
    else {
        if ( b < c )
        {
            printf(" %d %d %d ", a, b, c);
        }
        else {
            if ( b < c )
            {
                printf(" %d %d %d ", a, b, c);
            }
            else {
                if ( a < c ) printf(" %d %d %d ", a, c, b);
                else printf(" %d %d %d ", c, a, b);
            }
        }
    }
    return 0;
}