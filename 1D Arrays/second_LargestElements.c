#include <stdio.h>
#include <limits.h>
int secondLargest(int arr[], int n){
    int max1 = INT_MIN, max2 = INT_MIN;
    // find largest element
    for (int i = 0; i < n; i++)
        if ( arr[i] > max1 ) max1 = arr[i];
    // find second largest element
    for (int i = 0; i < n; i++){
        if ( arr[i] > max2 && arr[i] < max1 ) max2 = arr[i];
    }
    return max2;
}
int secondSmallest(int arr[], int n){
    int min1 = INT_MAX, min2 = INT_MAX;
    // find smallest element 
    
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]); 
    printf("Second Largest Element = %d", secondLargest(arr, n));
    return 0;
}