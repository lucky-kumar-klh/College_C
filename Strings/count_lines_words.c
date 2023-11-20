#include <stdio.h>
int main(){
    char ch[100];
    int countNextLine = 0, countWords = 1;
    printf("Press '#' symbol to exit\n");
    scanf("%[^#]s", ch);
    for (int i = 0; ch[i] != '\0'; i++){
        if ( ch[i] == '\n' )
            countNextLine++;
        if ( ch[i] == 32 )
            countWords++;
    }
    printf("Words = %d\nLines = %d", countWords, countNextLine);
    return 0;
}