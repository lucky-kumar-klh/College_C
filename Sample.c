#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
bool isPrime(int a){
    if ( a == 1 ) return 0;
    for (int i = 2; i <= a/2; i++)
    {
        if ( a % i == 0 )  return 0;
    }
    return 1;
}
int sum(int b){
    int sum = 0;
    while ( b != 0 )
    {
        sum += b % 10;
        b = b/10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    if ( isPrime(n) ){
        printf("Sum is %d", sum(n));
    }
    else printf("No laddos");
    return 0;
}
