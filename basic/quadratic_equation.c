#include <stdio.h>
int main(){
    int a, b, c;
    // ax^2 + bx + c = 0
    scanf("%d %d %d", &a, &b, &c);
    int D = b*b - 4*a*c;
    if ( D == 0 )
    {
        float ans = -b/(2*a);
        printf("Equal Roots\nTwo equal roots are %.1f & %.1f", ans, ans);
    }
    else if ( D < 0 )
    {
        printf("Roots are Imaginary");
    }
    else if (D > 0 )
    {
        float d1 = (-b+D)/(2*a);
        float d2 = (-b-D)/(2*a); 
        printf("Distinct Roots\nTwo roots are %.1f & %.1f", d1, d2);
    }
    
    return 0;
}