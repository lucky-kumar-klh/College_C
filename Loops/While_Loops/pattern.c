#include <stdio.h>
int main(){
    float n;
    printf("Enter any number : ");
    scanf("%f", &n);
    
    for (int i = 0; i < n; i++)
    {
        printf("1 . ");
        for (int j = i; j >= 0 ; j--)
        {
            printf("1 ");
        }
        printf("\n");
    }
    
}