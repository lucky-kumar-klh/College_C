#include <stdio.h>

void insertionSort(int arr[], int n) {

    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main(){

    int arr[5] = {4,1,2,8,4};
  
    insertionSort(arr, 5);
  
    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}