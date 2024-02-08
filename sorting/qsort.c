#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int comparator(const void* p, const void* q) {

    int l = *(const int*)p;
    int r = *(const int*)q;

    if (l > r) return false;
    else return true;
}

void printArr(int arr[], int n) { 
    int i; 
    for (i = 0; i < n; ++i) 
        printf("%d ", arr[i]); 
}

int main(){

    int arr[] = { 1, 6, 5, 2, 3, 9, 4, 7, 8 }; 
    
    int size = 9;
    printf("Input array is: ");
    printArr(arr, size);

    qsort ( (void*)arr, size, sizeof(arr[0]), comparator); 
  
    printf("\nOutput array is: "); 
    printArr(arr, size); 

    return 0;
}