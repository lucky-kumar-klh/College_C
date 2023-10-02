//Print sum of 1,1/2,1/3,1/4,1/5... till Nth term

#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    scanf("%d",&n);
    printf("1 ");
    for(float i=1;i<=n;i++)
  {
    printf(",1/%.0f ",i);
        sum=sum+(1/i);
    }
    
    printf("\nsum=%.2f",sum);
  return 0;
}