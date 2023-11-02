#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
float convert(){
    float n;
    scanf("%f", &n);
    return (n*83.25);
}
int main(){
    printf("%.2f", convert());
    return 0;
}