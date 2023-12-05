#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    int n = (int)ch;
    int a = 0;
    for (int i = 65; i <= 90; i++)
    {
        if ( i == n )
        {
            a = 1;
            printf("%c is a valid character", ch);
            break;
        }
    }
    for (int i = 97; i <= 122; i++)
    {
        if ( i == n )
        {
            a = 1;
            printf("%c is a valid character", ch);
            break;
        }
    }
    if ( a == 0 ) printf("%c is NOT a valid character", ch);
    return 0;
}