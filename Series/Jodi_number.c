#include <stdio.h>
#include <math.h>
int binary(int x){
    int i = 0, digit, sum = 0;
    while ( x ){
        digit = x & 1;
        sum += digit*pow(10,i);
        i++;
        x = x >> 1;
    }
    return sum;
}
int count(int a, int b){
    int count = 0;
    while ( a ){
        if ( a % 10 == b ) count++;
        a /= 10;
    }
    return count;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int binaryA = binary(a);
    int binaryB = binary(b);
    int A0 = count(binaryA,0), B0 = count(binaryB,0), A1 = count(binaryA,1), B1 = count(binaryB,1);
    if ( A0 == B0 && B1 == A1 ) printf("JODI NUMBER");
    else printf("NOT a jodi number");
    return 0;
}