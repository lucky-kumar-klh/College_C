#include <stdio.h>
int main(){
    int num, sum = 0, digit = 0, i, dup;
    printf("Enter any number : ");
    scanf("%d", &num);
    dup = num;
    if ( num > 100 ){
        while ( num != 0 ){
            digit = num % 10;
            sum = (10*sum) + digit;
            num = num / 10;
        }
        if ( dup == sum ) printf("It is a Palindrome ! \n");
        else printf("Not a Palindrome \n");
        
    }
    else printf("Error!\nEnter 3 or more digit number\n");
}