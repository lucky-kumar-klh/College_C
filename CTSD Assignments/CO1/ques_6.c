#include <stdio.h>
#include <math.h>
int digit(int a){
    int count = 0;
    while ( a != 0 ){
        a /= 10;
        count++;
    }
    return (count-1);
}
int main(){
    int n, dupl;
    scanf("%d", &n);
    int divide = digit(n);
    if ( n / 1000 > 0 ){
        int ld1 = n%10; 
        dupl = (n - ld1)/10;
        int ld2 = dupl % 10;
        int fd1 = n / pow(10,divide), fd2;
        dupl = n / pow(10,divide-1);
        fd2 = dupl % 10;
        printf("last digit = %d\n", ld1);
        printf("2nd last digit = %d\n", ld2);
        printf("first digit = %d\n", fd1);
        printf("2nd digit = %d\n", fd2);
        if ( (fd1+fd2) > (ld1+ld2) ) printf("LEFT Balanced Number");
        else if ( (fd1+fd2) < (ld1+ld2) ) printf("Right Balanced Number");
        else printf("EQUALLY Balanced");
    }
    else printf("Enter atleast 4 digit number or greater.");
    return 0;
}