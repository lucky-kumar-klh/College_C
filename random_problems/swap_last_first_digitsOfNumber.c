#include <stdio.h>
#include <math.h>
int digits(int a){
    int count = 0;
    while ( a != 0 ){
        a = a / 10;
        count++;
    }
    return (count-1);
}
int main(){
    int n;
    scanf("%d", &n);
    if ( 0 < n/10 ){
        int lastDigit, firstDigit, num1, num2, ans;
        int divide = pow(10,digits(n));
        lastDigit = n % 10;
        firstDigit = n / divide;
        num1 = n % divide;
        num2 = (lastDigit*divide) + num1;
        ans = (num2 - lastDigit) + firstDigit;
        printf("Answer is %d", ans);
  }
  else printf("Enter atleast 2 or any greater digit number only");
    return 0;
}