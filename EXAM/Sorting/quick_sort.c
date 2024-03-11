#include <stdio.h>

void swap(int* a, int* b) {
    *b = (*a + *b) - (*a = *b);
}

int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int i = start - 1;

    for (int j = start; j <= end; j++) {
        if (pivot > arr[j]) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    i++;
    swap(&arr[i], &arr[end]);
    return i;
}

void quick_sort(int arr[], int start, int end) {

    // base case
    if (start >= end)
        return;

    // find pivot
    int pivot = partition(arr, start, end);

    // divide array in 2 parts across pivot (excluding pivot index)
    quick_sort(arr, start, pivot-1);
    quick_sort(arr, pivot+1, end);
     
}

void print_array(int arr[], int n) {

    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    
    printf("\n");
}

int main(){

    int arr[7] = {-1, 4, 1, 6, 2, 7, 4};

    quick_sort(arr, 0, 6);

    print_array(arr, 7);

    return 0;
}