#include <stdio.h>
#include <string.h>
int main(){
    int year[8] = {2,0,6,4,2,0,6,4};
    int month[12] = {0,3,3,6,1,4,6,2,5,0,3,5};
    char days[7][100] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Satuday"}; 
    int dd, mm, yy;
    char day_inp[100];
    printf("Enter the day : ");
    scanf("%s", &day_inp);
    printf("Enter date as dd mm yyyy : ");
    scanf("%d %d %d", &dd, &mm, &yy);
    int LD = yy % 100;
    int Y = year[(yy/100)-14];
    int R = LD / 4;
    int M = month[mm-1];
    int Ans = (dd + M + Y + LD + R) % 7;
    //printf("%s", days[Ans]);
    int a = strcmp( day_inp, days[Ans]);
    if ( a == 0 ) printf("YES");
    else printf("NO");
}