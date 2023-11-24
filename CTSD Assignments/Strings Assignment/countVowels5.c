#include <stdio.h>
int main(){
    char ch[50];
    int count = 0;
    scanf(" %[^\n]s", ch);
    for (int i = 0; ch[i] != '\0'; i++){
        if ( ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
            count++;
        }
    }
    printf("No of Vowels = %d", count);
    return 0;
}