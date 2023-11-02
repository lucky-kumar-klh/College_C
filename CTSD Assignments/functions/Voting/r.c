#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int vote(){
    int a;
    scanf("%d", &a);
    if ( a > 18 ) return 1;
    else return 0;
}
int main(){
    if ( vote() ) printf("Eligible to vote");
    else printf("Not eligible to vote");
    return 0;
}