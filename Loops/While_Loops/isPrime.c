#include <stdio.h>
int main(){

    int n, a = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n/2; i++) if ( n % i == 0 ) a = 1;
    if ( a == 1 ) printf("%d is Composite", n);
    else printf("%d is Prime", n);
    
    return 0;
}