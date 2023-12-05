#include <stdio.h>
int main(){
    char ch;
    printf("Please select your plan :\nA. Monthly Plan\nB. 6 Months Plan\nC. Yearly Plan\nChoose options A, B or C\n");
    scanf("%c", &ch);
    switch ( ch )
    {
    case 'A':
        int a;
        printf("Enter the no of calls you made in total : ");
        scanf("%d", &a);
        int charge2 = (a-250);
        int charge1 = 200;
        printf("Monthly rent is 200 rupees.\n");
        if ( a >= 50 )
        {
            if ( a >= 250 )
            {
                int ans = (a-50);
                printf("Calling Charges = %d rupees\n", (200 + (ans-200)*2)); 
                printf("Total charges = %d", 200+(200 + (ans-200)*2)+0.18*( 200+(200 + (ans-200)*2)));  
            }
            else {
                printf("Calling Charges = %d rupees\n", (a-50));
                printf("Total charges = %d", 200+(a-50)+0.18*(200+(a-50)));
            }
        }
        else printf("No charges for less than 50 calls");
        break;

    case 'B':
        int b;
        printf("Enter the no of calls you made in total : ");
        scanf("%d", &b);
        printf("Monthly rent is 1000 rupees.\n");
        if ( b >= 400 )
        {
            if ( b >= 700 )
            {
                int ans = (b-400);
                printf("Calling Charges = %.2f rupees\n", (300*0.5 + (ans-300)*1.5)); 
                printf("Total charges = %.2f", 1000+(300*0.5 + (ans-300)*1.5)+0.18*(1000+(300*0.5 + (ans-300)*1.5)));  
            }
            else {
                printf("Calling Charges = %.2f rupees\n", (b-400));
                printf("Total charges = %.2f", 1000+(b-400)*0.5+0.18*(1000+(b-400)*0.5));
            }
        }
        else printf("No charges for less than 400 calls");
        break;

    case 'C':
        int c;
        printf("Enter the no of calls you made in total : ");        
        scanf("%d", &c);    
         printf("Monthly rent is 1500 rupees.\n");
        if ( c >= 500 )
        {
            if ( c >= 800 )
            {
                int ans = (c-500);
                printf("Calling Charges = %.2f rupees\n", (300*0.25 + (ans-300))); 
                printf("Total charges = %.2f", 1500+(300*0.25 + (ans-300))+0.18*(1500+(300*0.25 + (ans-300))));  
            }
            else {
                printf("Calling Charges = %.2f rupees\n", (c-500)*0.25);
                printf("Total charges = %.2f", 1500+(c-500)*0.25+0.18*(1500+(c-500)*0.25));
            }
        }
        else printf("No charges for less than 500 calls");    
        break;
    
    default:
        printf("You have select from the given options only.\nPlease try again!");
    }
    return 0;
}