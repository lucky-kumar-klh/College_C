#include <stdio.h>
#include <string.h>
int countLines(char ch[]){
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++){
        if ( ch[i] == '\n' ) 
            count++;
    }
    return count;
}
int main(){
    char ch[100];
    int length = 0;
    scanf(" %[^$]s", ch);
    for (int i = 0; ch[i] != '\0'; i++){
        length++;
    }
    printf("Lines = %d", countLines(ch));
    return 0;
}