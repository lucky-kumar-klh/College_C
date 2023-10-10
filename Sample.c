#include <stdio.h>
#include <math.h>
int occurance(int num, int key){
    int count = 0, digit;
    while ( num != 0 )
    {
        digit = num % 10;
        if ( digit == key ) count++;
        num /= 10;
    }
    
    return count;
}
int main(){
    int n, digit;
    scanf("%d", &n);
    //printf("num is %d\noccurance of %d is %d", n, key, occurance(n, key));
    int dup = n;
    while ( dup != 0 )
    {
        digit = dup % 10;
        printf("%d:%d ", digit,occurance(n,digit));
        dup /= 10;
    }
    
    return 0;
}