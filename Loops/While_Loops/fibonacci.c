#include <stdio.h>
int fibonacci(int a){
    if ( a == 0 ) return 0;
    else if ( a == 1 ) return 1;
    int sum = fibonacci(a-1) + fibonacci(a-2); 
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%dth number in fibonacci series is %d", n, fibonacci(n));
    
    return 0;
}