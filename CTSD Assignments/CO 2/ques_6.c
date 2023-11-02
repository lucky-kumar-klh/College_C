#include <stdio.h>
int fact(int a){
    int prod = 1;
    for (int i = a; i >= 1; i--)
    {
        prod = prod*i;
    }
    return prod;
    }
int main(){
    int n;
    scanf("%d", &n);
    printf("1/1");
    for (int i = 2; i <= n; i++)
    {
        printf(" , %d/%d", i, fact(i));
    }
    return 0;
}