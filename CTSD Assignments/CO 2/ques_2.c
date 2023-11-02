#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int nspace = n/2+1;
    int nstar = -1;
    for (int i = 1; i <= n; i++)
    {
        if ( i <= (n+1)/2 )
        {
            nspace--;
            nstar += 2;
        }
        else
        {
            nspace++;
            nstar -= 2;
        }
        // spaces
        for (int j = 1; j <= nspace; j++)  printf("  ");
        
        // number
        for (int j = 1; j <= nstar; j++)  printf("* ");
        
        printf("\n");
    }
    return 0;
}