#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
void convert(){
    float n;
    scanf("%f", &n);
    printf("%.2f", (n*83.25));
}
int main(){
    convert();
    return 0;
}