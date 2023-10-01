#include <stdio.h>
#include <math.h>
int main(){
    int n, a = 0;
    scanf("%d", &n);
    for (int i = 0, j = 0; i < n; i++, j++)
    {
        a = a + (i+j);
        printf("%d ", a);   
    }
   
    return 0;
}
//---------------------------------------
// 0 2 6 12 20 30 42 56