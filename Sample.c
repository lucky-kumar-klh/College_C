#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int num, digit;
    scanf("%d", &num);
    digit = (floor)(log10(num)+1);
    if ( digit<= 5 )
    {
        printf("no of digits are %d", digit);
    }
    else printf("max 5 digit num only");
    return 0;
}
