#include <stdio.h>
#include <math.h>
int main(){
    int n, j = 2, a = 0;
    scanf("%d", &n);
    printf("0 ");
    for (int i = 1; i < n; i++, j++)
    {
        a = a + (i+j);
        printf("%d ", a);   
    }
   
    return 0;
}
//-------------------------------------
// 0 1 4 9 16 25 36
// Odd incrementation