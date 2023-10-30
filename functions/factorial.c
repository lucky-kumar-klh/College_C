#include <stdio.h>
int Lucky( int a )
{
    int fact = 1;
    for (int i = a; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    scanf("%d", &n);
    int answer = Lucky( n );
    printf("%d", answer);
}