#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int vote(int n){
    if ( n > 18 ) return 1;
    else return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    if ( vote(n) ) printf("Eligible to vote");
    else printf("Not eligible");
    return 0;
}