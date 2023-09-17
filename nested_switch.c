#include <stdio.h>
int main(){
    int n, a;
    printf("What item you want to purchase :\n1. Laptops\n2. Mobile Phones\nChoose from the above list (1/2) : ");
    scanf("%d", &n);
    switch ( n ){
    case 1:
        printf("You have chosen to buy Laptops. Choose below options (1/2) :\n1. Dell\n2. Asus\n");
        scanf("%d", &a);
            switch ( a )
            {
                case 1:
                printf("You want to buy Dell laptop\n");
                break;
                case 2:
                printf("You want to buy Asus LAptop\n");
                break;
                default:
                printf("Please select from obove options only\n");
            }
    break;
    case 2:
        printf("Sorry ! Mobile phonres are out of stock.\n");
        break;
    default:
        printf("You have to choose either 1 or 2 from the above given options");
    }
    return 0;
}