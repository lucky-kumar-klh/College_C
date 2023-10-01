#include<stdio.h>
int main(){
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    if ( n % 2 == 0 ){
        printf("%d is even number\n", n);
        if ( n % 8 == 0 ){
            printf("It is also devible by 8\n");
        }
        else printf("It is not divisible by 8\n");
    }
    else if ( n % 2 != 0 ){
        printf("%d is odd number\n", n);
        if ( n % 7 == 0 ){
            printf("It is divisible by 7 also\n");
        }
        else printf("Not divisible by 7\n");
    }
    
    return 0;
}