#include <stdio.h>
#include <stdbool.h>
bool isPrime (int a){
    if ( a == 1 ) return false;
    for (int i = 2; i <= a/2; i++)
    { 
        if ( a % i == 0 ) return false;
    }
    return true;
}
int main(){
    int x, y, small, big;
    scanf("%d %d",&x, &y);
    ( x > y )? (big = x, small = y) : (big = y, small = x);
    printf("All Prime numbers btw %d and %d is : ",x, y);
    for( int i = small; i <= big; i++) 
    {
        if ( isPrime(i) ) printf("%d ", i);
    }
    // printf("\nAll Composite numbers btw %d and %d is : ", x, y);
    // for( int i = x; i <= y; i++) 
    // {
    //     if ( !isPrime(i) ) printf("%d ", i);
    // }
}