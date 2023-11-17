#include <stdio.h>
#include <string.h>  // functions that perform operations on string 
#include <ctype.h>  // functions that perform operations on charachter 
int main(){

    char a[50];
    scanf(" %[^\n]s", a);
    char b[50];
    scanf(" %[^\n]s", b);

    printf("%s", strcat(a,b));

    return 0;
}
/*
*--------------------------------------------------------------------*
    <ctype.h>
    1. islower() -> return true for lower case 
    2. isupper() -> return true for upper case
    3. isdigit() -> return true for digits
    4. tolower() -> UpperCase to LowerCase
    5. toupper() -> LowerCase to UpperCase
    6. isspace() -> return true for spaces
    7. isalnum() -> gives Alpha-Numeric
    8. isalpha() -> return true for aplphabets
    9. isxdigit() -> return true for hexadecimal digit
*---------------------------------------------------------------------*
    <string.h>
    1. strlen() -> return length of string ( not '\0' )
    2. strcpy() -> strcpy ( destiny_str, source_str ) == ( destiny_str = source_str )
    3. strncpy() -> 
    4. strcmp() -> str comparision : 1. if ( str1 == str2 ) output is 0;
                                     2. if ( str1 < str2 ) output < 0 : subtracting ascii values of both strings char by char. Eg -> str1[i] - str2[i] 
                                     3. if ( str1 > str2 ) output > 0 : When ( str1[i] - str2[i] ) > 0
    5. strncmp() ->
    6. strcat() // concatination -> strcat(str1, str2) == (str1 + str2)
    7. strncat() ->
    8. strrev() -> 
*---------------------------------------------------------------------*
    
*/