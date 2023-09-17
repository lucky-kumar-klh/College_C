#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int A,X,B,Y,s1,s2;
    // s1 = A/X;
    // s2 = B/Y;
    while ( n > 0 ){
        scanf("%d %d %d %d", &A, &X, &B, &Y);
        if ( A/X < B/Y ){
            printf("Bob\n");
        }
        else if ( A/X > B/Y ){
            printf("Alice\n");
        }
        else if( A/X == B/Y ) printf("Equal\n");
        n--;
    }
    
    

    
    return 0;
}