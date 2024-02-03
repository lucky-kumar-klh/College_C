#include <stdio.h>

void swap(int *a, int *b) {
    *b = (*a + *b) - (*a = *b);
}

void shellSort(int arr[], int n) {
    for (int gap = n/2; gap >= 1; gap = gap/2) {
        for (int j = gap; j < n; j++) {
            for (int i = j-gap; i >= 0; i = i-gap) {
                if (arr[i] > arr[i+gap]) {
                    swap(&arr[i], &arr[i+gap]);
                }
            }
        }
    }
}

int main(){

    int arr[8] = {8,7,6,5,4,3,2,1};
    shellSort(arr, 8);
    for (int i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }    
    return 0;
}