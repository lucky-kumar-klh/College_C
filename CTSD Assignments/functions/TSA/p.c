#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
void TSA(float r, float h){
    printf("TSA is %.2f", (2*3.14*r*(r+h)));
}
int main(){
    float r, h;
    scanf("%f %f", &r, &h);
    TSA(r, h);
    return 0;
}