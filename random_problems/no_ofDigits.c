#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    int digit = (ceil)(log10(n));
    printf("\n%d", digit);
}
