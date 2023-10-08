#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    bool a = 1;
    scanf("%d", &n);
    int original = n;
    for (int i = 1; a ; i++)
    {
        int sum = 0;
        int dup = n;
        while ( dup != 0 ){
            sum += dup % 10;
            dup = dup / 10;
        }
        n = sum;
        if ( n/10 == 0 )  a = 0;
    }
    printf("Sum of the iterative digits of %d is %d", original, n);
    return 0;
}