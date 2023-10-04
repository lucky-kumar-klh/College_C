#include <stdio.h>
int main(){
    int n, dup, digit, x;
    printf("Enter any number : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        dup = i;
        int rev = 0;
        while ( dup > 0 )
        {
            digit = dup % 10;
            rev = rev*10 + digit;
            dup = dup / 10;
        }
        if ( rev == i )
        {
            printf("%d ", i);
        }
        
    }
    return 0;
}