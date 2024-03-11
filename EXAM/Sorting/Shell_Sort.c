#include <stdio.h>

void swap(int* a, int* b) {
    *b = (*a + *b) - (*a = *b);
}

void shell_sort(int arr[], int n) {

    for (int gap = n/2; gap > 0; gap /= 2) {

        for (int j = gap; j < n; j++) {

            for (int i = j - gap; i >= 0; i -= gap) {

                if (arr[i] > arr[i+gap]) {
                    swap(&arr[i], &arr[i+gap]);
                }
            }
        }
    }

}

void print_array(int arr[], int n) {

    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    
    printf("\n");
}

int main() {

    int arr[7] = {-1, 4, 1, 6, 2, 7, 4};

    shell_sort(arr, 7);

    print_array(arr, 7);

    return 0;
}