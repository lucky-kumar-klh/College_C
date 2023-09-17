#include<stdio.h>
int main(){
    int marks;
    printf("Enter your Marks : ");
    scanf("%d", &marks);
    if ( marks > 90 ) printf("Outstanding\n");
    else if ( marks >= 80 ) printf("Very Good\n");
    else if ( marks >= 70 ) printf("Average\n");
    else if ( marks >= 60 ) printf("Needs Improvement\n");
    else if ( marks >= 50 ) printf("Poor\n");
    else if ( marks >= 40 ) printf("Fail\n");
    return 0;
}