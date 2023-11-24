#include <stdio.h>
int main(){
    char sentence[50];
    int word = 0, ch = 0;
    scanf(" %[^\n]s", sentence);
    for (int i = 0; sentence[i] != '\0'; i++){
        ch++;
        if ( sentence[i] == 32 ){
            word++;
        }
    }
    printf("Words = %d\nCharacters = %d", word, ch);
    return 0;
}