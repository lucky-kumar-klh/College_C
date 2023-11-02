#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
float TSA(){
    float r, h;
    scanf("%f %f", &r, &h);
    return (2*3.14*r*(r+h));
}
int main(){
    printf("TSA is %.2f", TSA());
    return 0;
}