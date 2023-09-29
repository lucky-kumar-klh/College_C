#include <stdio.h> 
int main () 
{ 
    int n; 
    scanf("%d",&n); 
    for ( int i = 1; i <= n; i++ ) { 
      
        for (int m = 1; m <= n; m++){
            if ( i+m < n+1 ) printf("  ");     // print spaces 1st       
        }
       
        for ( int k = i; k >= 1; k-- ) { 
            printf("%d ",k);                   // print numbers in decreasing wise
        } 

        printf(". ");                          // print " . "

        for ( int j = 1; j <= i; j++ ) { 
            printf("%d ",j);                   // print no in increasing wise
        } 

        printf("\n"); 
    } 
    return 0; 
}
    
    