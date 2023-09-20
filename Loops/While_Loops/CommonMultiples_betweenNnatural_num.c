#include <stdio.h>
int gcd(int a, int b){
    int rem;
    if ( a < b ){
        rem = b % a;
        if (rem == 0) return a;
        return gcd(a,rem);
    }
    else{
        rem = a % b;
        if (rem == 0) return b;
        return gcd(b,rem);
    }
}
int main(){
    int a, b, num, cm;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Till where you wanna find common multiples : ");
    scanf("%d", &num);
    cm = (a*b)/gcd(a,b);  // this will give the first Common multiple --> LCM
    printf("GCD of %d and %d is %d\n", a, b, gcd(a,b));
       
    // So the series will be the multiplication table of ans.
    // (ans*1), (ans*2), (ans*3),.......,(ans*i)
    printf("First Common Multiple is %d\n", cm);
    printf("Common multiples are : ");
    int i = 1;
    while ( cm*i <= num ){
        printf("%d ", cm*i);
        i++;
    }
    
    return 0;
}