#include <stdio.h>
int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    n/=2;
    for(i=1;i<=n;i++,k++)
    {
      for(j=1;j<=n;j++)
      {
        if(j<=n-i+1) printf("%d ",k);
        else printf("  ");
      }
      for(j=1;j<=n;j++)
      {
        if(j>=i) printf("%d ",k);
        else printf("  ");
      }
      printf("\n");
    }
    for(i=1;i<=n;i++,k--)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i) printf("%d ",k);
            else printf("  ");
        }
        for(j=1;j<=n;j++)
        {
          if(j>=n-i+1) printf("%d ",k);
          else printf("  ");
        }
        printf("\n");
    }
}