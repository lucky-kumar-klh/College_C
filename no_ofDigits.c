#include <stdio.h>
int main(){
    int Num;
    printf("Enter any Number");
    scanf("%d",&Num);
    if(Num<0)
    {
        printf("Number is Negative");
    }
    else if(Num<10)
    {
        printf("Number has 1 digit");
    }
    else if(Num<100)
    {
        printf("Number has 2 digits");
    }
    else if(Num<1000)
    {
        printf("Number has 3 digits");
    }
    else if(Num<10000)
    {
        printf("Number has 4 digits");
    }
