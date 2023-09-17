#include<stdio.h>
int main(){
    float price;
    printf("Enter your Purchase Amount (in rupees) : ");
    scanf("%f", &price);
    if ( price > 25000 ){
        printf("You have got 20 percent Discount\nDiscount price = %0.2f\nTotal Balance = %0.2f\n", 0.2 * price, price-(0.2 * price));
    }
    else if ( price >= 15000 ){
        printf("You have got 15 percent Discount\nDiscount price = %0.2f\nTotal Balance = %0.2f\n", 0.15 * price, price-(0.15 * price));
    }
    else if ( price >= 10000 ){
        printf("You have got 10 percent Discount\nDiscount price = %0.2f\nTotal Balance = %0.2f\n", 0.1 * price, price-(0.1 * price));
    }
    else if ( price >= 5000 ){
        printf("You have got 5 percent Discount\nDiscount price = %0.2f\nTotal Balance = %0.2f\n", 0.05 * price, price-(0.05 * price));
    }
    return 0;
}