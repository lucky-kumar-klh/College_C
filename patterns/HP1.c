#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int a = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int dm = pow(2,i);
        printf("%d/%d + ", a, dm);
        a += 2; 
    }
    
    return 0;
}