#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    int digit = (floor)((log10(n))+1);
    printf("\n%d", digit);
}
