#include<stdio.h>
int main(){
    int num, remdr = 0, sum = 0, prod = 1;
    printf("Enter number : ");
    scanf("%d", &num);
    if ( num != 0 ){
        while ( num != 0 ){
            remdr = num % 10;
            sum = sum + remdr;
            prod = prod * remdr;
            num = (num / 10);
        }
        if ( sum > prod ) printf("Number is beautiful\n");
        else printf("Number is Handsome\n");
    }
    else if ( num == 0 ) printf("Both Handome and Beautiful\n");
    return 0;
}