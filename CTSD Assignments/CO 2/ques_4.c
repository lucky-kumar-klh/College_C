#include <stdio.h>
int gcd(int a, int b){
    if ( a > b ) {
        int rem = a % b;
        if ( rem == 0 ) return b;
        return gcd(rem,a);
    }
    else {
        int rem = b % a;
        if ( rem == 0 ) return a;
        return gcd(rem,b);
    } 
}
int main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int num3_gcd = gcd(x,y);
    //int num3_lcm = (x*y)/gcd(x,y);
    int ans_gcd = gcd(num3_gcd,z);
    //int ans_lcm = (x*y*z)/gcd(num3_lcm,z);
    printf("GCD (%d, %d, %d) is %d", x, y, z, ans_gcd);
    //printf("\nLCM (%d, %d, %d) is %d", x, y, z, ans_lcm);
    return 0;
}