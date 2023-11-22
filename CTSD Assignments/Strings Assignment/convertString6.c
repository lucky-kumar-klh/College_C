#include <stdio.h>
void swap ( char* a, char* b ){
    *b = ( *b + *a ) - ( *a = *b );
}
int main(){
    char ch[100], swapLetter;
    scanf(" %[^\n]s", ch);
    for (int i = 0; ch[i] != '\0'; i++){
        // lower to upper
        if ( ch[i] >= 97 && ch[i] <= 122 )
            ch[i] -= 32; 
        // upper to lower
        else 
            ch[i] += 32;
        // swap vowels
        if ( ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' ){
            int position = ;
            if ( ch[i] >= 97 && ch[i] <= 109 ){
                position = ch[i] - 'a'; 
                swapLetter = 122-position;
            }
            else if ( ch[i] >= 110  && ch[i] <= 122 ){
                position = 122-ch[i];
                swapLetter = 97 + position; 
            }
            ch[i] = swapLetter;
        }
    }
    printf("After Rearranging : ");
    for ( int i = 0; ch[i] != '\0'; i++ )
        printf("%c", ch[i]);
    return 0;
}
// a = 97, z = 122 :: 122-97 = 25
