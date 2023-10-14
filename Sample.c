#include <stdio.h>
int main(){
    int n, digit;
    scanf("%d", &n);
    for ( int  i = 0; i <= 9; i++) // to check digits from 0 to 9
    {
        int dup = n; // for reusing number again and again
        int count = 0;  
        while ( dup != 0 ){
            digit = dup % 10;
            if ( i == digit ) count++;
            dup /= 10;
        }
        if ( count != 0 ) {
            printf("%d : %d\n", i, count);
        }
    }
}