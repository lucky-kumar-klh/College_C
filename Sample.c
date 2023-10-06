#include <stdio.h>
int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    for (int i = N; i <= M; i++)
    {
      int a = 0;
        for (int j = 2; j <= i/2; j++)
        {
            if ( i % j == 0 )  a = 1;
        }
        if ( a == 0 ) printf("%d ", i);
    }
    
    return 0;
}