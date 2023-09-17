#include<stdio.h>
int main(){
    int cost_apples, cost_mangoes;
    printf("Enter cost of Apples (1 dozen) and Mangoes (per 3) respectively (in Rupees) : ");
    scanf("%d %d", &cost_apples, &cost_mangoes);
    int ca = (float)cost_apples/12;
    int cm = (float)cost_mangoes/3;
    printf("Cost of 1 Apple is %d and Cost of 1 Mango is %d\n", ca, cm);
    if (ca > cm) printf("Buy Mangoes\n");
    else printf("Buy Apples");
    return 0;
}