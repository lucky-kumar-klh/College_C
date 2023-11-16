#include <stdio.h>
#include <string.h>  // functions that perform operations on string 
#include <ctype.h>  // functions that perform operations on charachter 
int main(){

    char ch[100];
    int Ucount = 0, Lcount = 0, digit = 0, special = 0;
    scanf("%[^\n]s", ch);
    for (int i = 0; ch[i] != '\0'; i++){
        // if ( 48 <= ch[i] && ch[i] <= 57 ) digit++;
        // if ( 97 <= ch[i] && ch[i] <= 122 ) Lcount++;
        // if ( 65 <= ch[i] && ch[i] <= 90 ) Ucount++;
        if ( (33 <= ch[i] && ch[i] <= 47) || (58 <= ch[i] && ch[i] <= 64) ) special++;
        if ( islower(ch[i]) ) Lcount++;
        if ( isupper(ch[i]) ) Ucount++;
        if ( isdigit(ch[i]) ) digit++;
    }
    
    printf("Uppercase : %d\nLowercase : %d\nDigits : %d\nSpecial Case : %d\n", Ucount, Lcount, digit, special);

    return 0;
}
/*
    <ctype.h>
    1. islower() -> return true for lower case 
    2. isupper() -> return true for upper case
    3. isdigit() -> return true for digits
*/