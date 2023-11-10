#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
int maximum(int arr[], int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++){
        if ( arr[i] > max ) 
            max = arr[i];
    }
    printf("\nLargest = %d", max);
    return max;
}
int secondMax(int arr[], int n, int max){
    int s_max;
    for (int i = 0; i < n; i++){
        if ( arr[i] < max )
            s_max = arr[i];
    }
    printf("Second = %d", s_max);
    return s_max;
}
int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]); 

    int max1 = maximum(arr, n);
    int max2 = secondMax(arr, n, max1);
    printf("Sencond largest = %d", max2);
    return 0;
}