#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a = (n/2+1);
    int space = a, star = 0;
    for ( int  i = 1; i <= n; i++)
    {
        if ( i <= a ){
            space--;
            star++;
        }
        else {
            space++;
            star--;
        }
        
        // spaces
        for ( int j = 1; j <= space; j++){
            printf("  ");
        }
        // stars
        for ( int j = 1; j <= star; j++){
            printf("+ ");
        }
        printf("\n");
    }
    return 0;
}