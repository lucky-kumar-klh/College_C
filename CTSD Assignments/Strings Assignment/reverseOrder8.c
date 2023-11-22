#include <stdio.h>
#include <string.h>
int main(){
    char ch[100];
    scanf(" %[^\n]s", ch);
    int len = strlen(ch);
    printf("Reverse Order : ");
    for ( int i = len-1; i >= 0; i-- )
        printf("%c", ch[i]);
    return 0;
}