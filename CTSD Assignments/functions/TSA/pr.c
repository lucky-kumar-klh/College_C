#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
float TSA(float r, float h){
    return (2*3.14*r*(r+h));
}
int main(){
    float r, h;
    scanf("%f %f", &r, &h);
    printf("TSA of cylinder is %.2f", TSA(r, h));
    return 0;
}