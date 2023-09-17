#include <stdio.h>
int main() {
    int n;
    printf("Enter any week number : ");
    scanf("%d", &n);
    switch ( n ){
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thrusday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Use number between 1 to 7 only\n");
        break;
    }
    return 0;
}