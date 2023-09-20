#include <stdio.h>
int fibonacci(int a){
    if ( a == 0 ) return 0;
    if ( a == 1 ) return 1;
    return fibonacci(a-1) + fibonacci(a-2);
}
int main(){
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) printf("%d ", fibonacci(i));
    return 0;
}