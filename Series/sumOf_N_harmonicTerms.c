//Print sum of the given Harmonic progression till Nth term

#include<stdio.h>
int main(){
    int n,common_diff_of_denometer;
    float sum=0;
    scanf("%d%d",&n,&common_diff_of_denometer);
    for(float i=1;i<=n;i=i+common_diff_of_denometer){
            sum=sum+(1/i);
        }
    printf("Sum is %.2f",sum);
}