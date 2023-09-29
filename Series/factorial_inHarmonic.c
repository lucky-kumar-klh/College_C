//Print sum of 1,1/2!,1/3!,1/4!,1/5!... till Nth term

#include<stdio.h>
int main(){
    int n;
    float sum=0,fact=1;
    scanf("%d",&n);
    for(float i=1;i<=n;i++){
        for(float j=1;j<=i;j++){
            fact=fact*j;
        }
            sum=sum+(1/fact);
            fact=1;
        }
    
    printf("%.2f",sum);
    return 0;
}