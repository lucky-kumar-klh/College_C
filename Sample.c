#include<stdio.h>
int main(){
    
    int a, sum = 0;
    scanf("%d", &a);
    if (a%2==0) a = a+1;
    for (int i = a; i <= a + 38; i=i+2)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\n%d", sum);
}