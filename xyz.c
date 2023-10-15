#include <stdio.h>
int main(){
    int tea; // im ml
    int busTime; // in minutes
    scanf("%d %d", &busTime, &tea);
    int busTimeSec = busTime*60;
    int teaMin = (tea*5)/60;  // tea time in min
    int teaSec = (tea*5)%60;  // tea time in seconds
    // if yes --> teaTime + waliking <= butime or teaTime
    if ( (teaMin*60)+teaSec + 10*60 <= busTime*60 )  // 10 min by walk
    {
        printf("Yes, By walking");
    }
    else if ( (teaMin*60)+teaSec + 5*60 <= busTime*60 ) // 5 min by bike
    {
        printf("Only by using bike");
    }
    else if ( (teaMin*60)+teaSec + 10*60 > busTime*60 )
    {
        int totalTime = (teaMin*60)+teaSec + 10*60;
        int lateMin = teaMin + 10;
        int lateSec = teaSec; 
        printf("NO, He will be late by %d min and %d seconds", (teaMin+5)-busTime, lateSec);
    }
    
    return 0;
}