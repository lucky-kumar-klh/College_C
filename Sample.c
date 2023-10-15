#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int n;
    scanf("%d", &n);
    float f = n*(1.8)+32.0;
    printf("Temp is %.2f", f);
    return 0;
}
