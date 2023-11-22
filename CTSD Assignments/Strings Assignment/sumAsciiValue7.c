#include <stdio.h>
int main(){
    char ch[100];
    int sum = 0;
    scanf(" %[^\n]s", ch);
    for (int i = 0; ch[i] != '\0'; i++)
        sum += ch[i];
    printf("Sum of ASCII value = %d", sum);
    return 0;
}