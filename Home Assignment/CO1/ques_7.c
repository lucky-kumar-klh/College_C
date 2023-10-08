#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = n*10; i <= (n*10)+9; i++)
    {
        printf("%d ", i);
    }
    
    return 0;
}