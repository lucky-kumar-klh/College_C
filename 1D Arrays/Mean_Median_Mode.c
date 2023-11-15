#include <stdio.h>
#include <stdbool.h>
void swap ( int* x, int* y ){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort ( int arr[], int n ){
    bool swapping;
    for (int i = 0; i < n; i++){
        swapping = false;
        for (int j = 0; j < n-1; j++){
            if ( arr[j] > arr[j+1] ){
                swap (&arr[j], &arr[j+1]);
                swapping = true;
            }
        }
        if ( swapping == false ) break;
    }
}
int odd_even_Data ( int size ){
    
}
int medianGroupedData ( int arr[], int size ){
    
}
int medianUngroupedData ( int arr[], int size ){

}
float mean ( int arr[], int size ){
    float sum = 0;
    for (int i = 0; i < size; i++ )
        sum += arr[i];
    return (sum/size);
}
int main(){

    int n;
    float median;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    //median = (mode(arr, n) + (2*mean(arr, n)))/3;
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    // printf("MEAN = %.2f\n", mean(arr,n));
    // printf("MEADIAN = %.2f\n", median);
    // printf("MODE = %d", mode(arr,n));

    return 0;
}