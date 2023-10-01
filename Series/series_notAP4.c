#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = (i*i) - 1;
        printf("%d ", a);
    }
    
}
// 0 3 8 15 24 35 48
/*
0 -> (1x1)-1 
3 -> (2x2)-1
8 -> (3x3)-1
15 -> (4x4)-1
24 -> (5x5)-1
35 -> (6x6)-1
*/

