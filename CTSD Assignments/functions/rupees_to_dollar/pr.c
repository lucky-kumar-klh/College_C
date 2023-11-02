#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
float convert(float n){
    return (n*83.25);
}
int main(){
    float n;
    scanf("%f", &n);
    printf("%.2f", convert(n));
    return 0;
}