#include<stdio.h>
int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    if ( num > 0 ) printf("Positive\n");
    else if ( num < 0 ) printf("Negative\n");
    else if ( num == 0 ) printf("Nuetral\n");
    return 0;
}