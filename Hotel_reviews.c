#include <stdio.h>
int main(){
    int x, y;
    printf("Enter no of reviews of Hotel A and Hotel B respectively : ");
    scanf("%d %d", &x,&y);
    printf("Hotel A got %d % reviews and Hotel B got %d % reviews\n", x/5, y);
    if ( x/5 > y ) printf("Go to Hotel A\n");
    else printf("Go to Hotel B\n");
    return 0;
}