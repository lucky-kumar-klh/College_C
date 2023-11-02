#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
void convert(float n){
    float ans = n*(83.25);
    printf("%.2f", ans);
}
int main(){
    float n;
    scanf("%f", &n);
    convert(n);
    return 0;
}