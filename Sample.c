#include<stdio.h> 
int main(){ 
    int n; 
    float sum=0.0; 
    scanf("%d",&n); 
    printf("1/1"); 
    for(float i=3;i<=n*2;){ 
        printf(" + %f/%f",i,i-1); 
        sum=sum+1.0+(i/(i-1)); 
        i=i+2; 
    } 
    printf("\nSum of the series is %.3f",sum); 
}