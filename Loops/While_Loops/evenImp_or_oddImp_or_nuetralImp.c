//Even Importance, or Odd Importance & Nuetral Importance numbers
#include <stdio.h>
int main(){
    int n, digit, even = 0, odd = 0, dup;
    scanf("%d", &n);
    dup = n;
    for (int i = 0; n > 0; i++)
    {
        digit = n % 10;
        if ( digit % 2 == 0 ) even++;
        else odd++;
        n = n / 10;
    }

    if ( even > odd ) printf("%d is Even Importance number\n", dup);
    else if ( even < odd ) printf("%d is Odd Importance number\n", dup);
    else printf("%d is Nuetral Importance number\n", dup);
    
    return 0;
}