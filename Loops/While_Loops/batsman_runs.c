#include <stdio.h>
int main(){
    int runs = 0, balls = 0, n;
    while ( n != -1 ){
        printf("Runs scored in %d ball: ", ++balls);
        scanf("%d", &n);
        if( n >= 0 && n <= 6 ){
            if ( runs != -1 ) runs = runs + n;
        }
        else printf("Invalid runs !\n");
        
    }
    float Strike_rate = (runs/balls)*100;
    printf("\n");
    printf("Total runs = %d\n", runs);
    printf("Total balls = %d\n\n", balls);
    printf("Strike rate = %0.2f %%\n\n", Strike_rate);
    if ( Strike_rate <= 100 ) printf("Player needs to improve a lot");
    else if ( Strike_rate <= 150 ) printf("Average player");
    else if ( Strike_rate <= 200 ) printf("Good player");
    else if ( Strike_rate <= 250 ) printf("Very good Player");
    else printf("He is GOAT player");
    return 0;
}