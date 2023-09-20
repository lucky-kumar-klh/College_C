#include <stdio.h>
int main(){
    int n, sum = 0;
    scanf("%d", &n);
    printf("List of Toal Divisors of %d are : ", n);
    for (int i = 1; i < n; i++){
        if ( n % i == 0 ){
            sum = sum + i;
            printf("%d ", i);
        }
    }
    printf("\n");
    if ( sum == n ) printf("%d is a Perfect number\n", n);
    else printf("%d is not a Perfect number", n);
    
}