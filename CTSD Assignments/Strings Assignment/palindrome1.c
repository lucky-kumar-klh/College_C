#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isPalindrome ( char str[], int len ){
    for (int i = 0; i < len/2; i++){
        if ( str[i] != str[len-i-1] )
            return 0;
    }
    return 1;
}
int main(){
    char str[50];
    scanf(" %[^\n]s", str);
    int len = strlen(str);
    if ( isPalindrome(str, len) ){
        printf("Palindrome String");
    }
    else 
        printf("Not a Palindrome String");
    return 0;
}