#include <stdio.h>
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
        if ( ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
            swapLetter = 32;
            if ( ch[i] >= 97 && ch[i] <= 109 ){
                swapLetter = 122 - (ch[i] - 97);
            }
            else if ( ch[i] >= 110  && ch[i] <= 122 ){
                swapLetter = 97 + (122 - ch[i]); 
            }
            if ( ch[i] >= 65 && ch[i] <= 77 ){
                swapLetter = 90 - (ch[i] - 65);
            }
            else if ( ch[i] >= 78  && ch[i] <= 90 ){
                swapLetter = 65 + (90 - ch[i]); 
            }
            ch[i] = swapLetter;
        }
    }
    printf("After Rearranging : ");
    for ( int i = 0; ch[i] != '\0'; i++ )
        printf("%c", ch[i]);
    return 0;
}
