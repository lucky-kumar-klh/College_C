//Print sum of the given geometric progression till Nth term
#include<stdio.h>
#include<math.h>
int main(){
    // int n,j=1,sum=0,common_ratio;
    // scanf("%d%d",&n,&common_ratio);
    // for(int i=1;i<=n;i++){
    //         j=j*common_ratio;
    //          printf("%d\t",j);
    //         sum+=j;

    // }
    // printf("%d ",sum);

    int n, sum = 0, a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        a = pow(2,i);
        printf("%d ", a);
        sum += pow(2,i);
    }
    printf("\n%d", sum);
    return 0;
}