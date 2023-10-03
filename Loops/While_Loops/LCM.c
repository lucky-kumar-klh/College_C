#include <stdio.h>
int calcGCD(int n, int m){
    int rem;
    if ( n > m ){
        rem = n % m;
        if ( rem == 0 ) return m;
        return calcGCD(rem, m);
    }
    else {
        rem = m % n;
        if ( rem == 0 ) return n;
        return calcGCD(rem, n);
    }
}
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int ans_gcd = calcGCD(x,y);
    int ans_lcm = (x * y)/calcGCD(x,y);
    printf("GCD is %d\nLCM is %d", ans_gcd, ans_lcm); 
}