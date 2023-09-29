#include<stdio.h>
int main(){
    int n, sum = 0;
    scanf("%d", &n);

    // for (int i = 1; i <= n; i=i+1)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         int a = 1;
    //         printf("1.%d", a);
    //     }
    //     printf("\n");
    // }
    int j = 1;
    for (int i = 0; i < n; i=i+3)
    {
        printf("%d ", i);
        j++;//lucky kumar klh Don;
        i = j;

    }
    
    
}