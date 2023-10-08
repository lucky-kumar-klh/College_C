#include <stdio.h>
#include <stdbool.h>
bool isPrime(int a){
    if ( a==1 ) return 0;
    if ( a==2 ) return 1;
    for (int i = 2; i <= a/2; i++){
        if ( a%i == 0 ) return 0;
    }
    return 1;
}
int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    for (int i = N; i <= M; i++)
    {
        if ( isPrime(i) ) {
            if ( i % 10 == 9 ){
                printf("%d ", i);
            }
        }
    }
    return 0;
}