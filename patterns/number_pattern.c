/*1.1
21.12
321.123... .Nth term each series of the element should be in a newline.
*/
#include<stdio.h> 
int main()
{ 
    int x; 
    int right=0; 
    scanf("%d",&x); 
    int left=1; 
    int step=1; 
    for(int i=1;i<=x;i++)
    { 
        right=right*10+i; 
        if(i!=1) 
        {
          left=i*step+left; 
    }    
        printf("%d.%d\n",left,right); 
        step*=10; 
    } 
    return 0; 
}