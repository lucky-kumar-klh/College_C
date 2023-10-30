#include <stdio.h>

float addition(float x , float y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    float a, b, c, d;  // a = 4.12, b = 5.99 
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float answer1 = addition(a,b);  // a and b is called arguments / parameter
    float answer2 = addition(c,d);
    printf("Sum is %.2f", answer1);
    return 0;
}

// functionnName( arg1, arg2, arg3 );  // sending variable

/* 
dataType functionName( int a, float b, char c )   // recieving
{

}
*/

// f(x) = x+y;
// x , y --> inputs
// f(x) --> output