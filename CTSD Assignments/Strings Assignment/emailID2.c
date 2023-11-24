#include <stdio.h>
#include <ctype.h>
int main(){
    char str[50];
    int lower = 0, upper = 0, special = 0, digit = 0;
    scanf(" %[^\n]s", str);
    for (int i = 0; str[i] != '\0'; i++){
        if ( islower(str[i]) ) 
            lower++;
        if ( isupper(str[i]) )
            upper++;
        if ( isdigit(str[i]) ) 
            digit++;
        if ( (str[i] >= 33 && str[i] <= 46) || (str[i] >= 58 && str[i] <= 64) )
            special++;
    }
    printf("Upper case = %d\n", upper);
    printf("Lower case = %d\n", lower);
    printf("Digits = %d\n", digit);
    printf("Special case = %d\n", special);
    return 0;
}