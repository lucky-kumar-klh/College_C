#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
void vote(){
    int n;
    scanf("%d", &n);
    if ( n > 18 ) printf("Eligible for vote");
    else printf("Not eligible");
}
int main(){
    vote();
    return 0;
}