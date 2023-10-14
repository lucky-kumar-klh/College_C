#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int a = 1 + ( n >> 31 ) - ( -n >> 31 );
    if ( a == 0 ) printf("%d is Negative", n);
    else if ( a == 1 ) printf("%d is Zero", n);
    else if ( a == 2 ) printf("%d is Positive", n);
    
    return 0;
}