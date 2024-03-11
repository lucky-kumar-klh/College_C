#include <stdio.h>

void swap(int* a, int* b) {
    *b = (*a + *b) - (*a = *b);
}

void print_array(int arr[], int n) {

    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    
    printf("\n");
}

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {

        int j = i-1;
        int temp = arr[i];
        while (j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main(){

    int arr[7] = {10, 4, 1, 6, 2, 7, 4};

    insertion_sort(arr, 7);

    print_array(arr, 7);

    return 0;
}