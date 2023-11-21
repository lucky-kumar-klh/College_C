#include <stdio.h>
int main(){
    char ch[50];
    scanf("%[^#]s", ch);
    int countLines = 0, countWords = 0, countChar = 0;
    for (int i = 0; ch[i] != '\0'; i++){
        countChar++;
        if ( ch[i] == '\n' ) countLines++;
        if ( ch[i] == '32' ) countWords++;
    }
    printf("Words = %d\n", countWords);
    printf("Lines = %d\n", countLines);
    printf("Characters = %d", countChar);
}