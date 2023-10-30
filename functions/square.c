#include <stdio.h>
int product( int x )  // x = x
{
    int ans = x*x;
    return ans;
}
int main()
{
    int x;
    scanf("%d", &x);
    int answer = product( x );
    printf("%d", answer);

    return 0;
}