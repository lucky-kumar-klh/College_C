//Print sum of the given geometric progression till Nth term

#include<stdio.h>

int main(){
    int n,j=1,sum=0,common_ratio;
    scanf("%d%d",&n,&common_ratio);
    for(int i=1;i<=n;i++){
            j=j*common_ratio;
             printf("%d\t",j);
            sum+=j;

    }
    printf("%d ",sum);
    return 0;
}