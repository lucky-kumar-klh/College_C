#include <stdio.h>
#include <math.h>
int main(){
    int n, sum = 0, i = 0;
    printf("Enter any number : ");
    scanf("%d", &n);
    while ( i < n ){
        sum += pow(10,i);
        printf("%d\n", sum);
        i++;
    }
    return 0;
}