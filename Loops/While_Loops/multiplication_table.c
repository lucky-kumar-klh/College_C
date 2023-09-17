#include <stdio.h>
int main(){
    int i = 1, n, a;
    printf("Enter number for multiplication table & upto where ? ");
    scanf("%d %d", &n, &a);
    while ( i <= a )
    {
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    return 0;
}