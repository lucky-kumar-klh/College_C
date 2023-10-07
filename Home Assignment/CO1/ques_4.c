#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int num, digit, sum = 0, ans;
    while ( ans )
    {
        digit = n % 10;
        sum = sum + digit;
    }
    ans = sum;
    return 0;
}