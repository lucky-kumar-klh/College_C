#include <stdio.h>
// #include <ctype.h>
int main()
{
    char ch;

    printf("Enter any Charachter : ");
    scanf("%c", &ch);
    int x = (int)ch;

    if (x >= 65 && x <= 90)
    {
        printf("Uppercase\n");
    }
    else
        printf("Lowercase");

    return 0;
}