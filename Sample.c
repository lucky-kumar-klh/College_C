#include <stdio.h>
int main()
{
  int n,c=1,i;
  scanf("%d",&n);
  for(i=2;c<=n;i++)
  {
    int k=0,j;
    for(j=2;j<=i/2;j++)
    {
      if(i%j==0 && i!=j) k=1;
    }
    if(k==0)
    {
      printf("%d ",i);
      c++;
    }
  }
}