#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int count_num(int n);
int num(int x);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",count_num(n));
    return 0;
}
int count_num(int n)
{
  int k=n,count=0,x=num(n),y=num(n),fd,ld;
  while(n!=0)
  {
    ld = n%10;
    fd = n/pow(10,x-1);
    if(k%ld==0 && k%fd==0) count+=2;
    else if(k%ld==0 || k%fd==0) count++;
    n = n - (fd)*pow(10,x-1);
    n/=10;
    x-=2;
  }
  if(k%2!=0 && count!=0) return count-1;
  else return count;
}

int num(int x)
{
  int count=0;
  while(x)
  {
    count++;
    x/=10;
  }
  return count;
}
