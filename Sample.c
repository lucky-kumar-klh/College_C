#include <stdio.h>
#include <math.h>
int main(){
  int n,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    int a=sqrt(i);
    float b=sqrt(i);
    if(a!=b) printf("%d ",i);
  }
}