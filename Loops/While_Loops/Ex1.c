#include <stdio.h>
void even(int a){
    int i = a;
    while ( i >= 0 ){
        printf("%d ", i);
        i = i - 2;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    (n%2 == 0) ? (even(n)) : (even(n-1)); 
}