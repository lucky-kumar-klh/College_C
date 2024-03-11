#include <stdio.h>

void swap(int* a, int* b) {
    *b = (*a + *b) - (*a = *b);
}

void print_array(int arr[], int n) {

    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    
    printf("\n");
}
/*
index->       s         e
array =       1 2 3 4 5 6 
create->   [ ]     |     [ ]
copy ->   1 2 3    |    4 5 6
merge->      1 2 3 4 5 6

*/
void merge(int arr[], int start, int end) { 

    int mid = (start + end) / 2;
    int l1 = mid - start + 1;
    int l2 = end - mid;

    int left_half[l1], right_half[l2];

    int index = start;

    for (int i = 0; i < l1; i++) {
        left_half[i] = arr[index++];
    }

    for (int i = 0; i < l2; i++) {
        right_half[i] = arr[index++];
    }

    int len1 = 0, len2 = 0;
    index = start;
    while (len1 < l1 && len2 < l2) {   // copy at a time
        if (left_half[len1] < right_half[len2]) 
            arr[index++] = left_half[len1++];
        
        else arr[index++] = right_half[len2++];
    }

    while (len1 < l1) {   // left over left half array
        arr[index++] = left_half[len1++];
    }

    while (len2 < l2) {    // right over left half array
        arr[index++] = right_half[len2++];
    }

}

// divide the array
void merge_sort(int arr[], int start, int end) {

    // base case
    if (start >= end)
        return;

    // find middle
    int mid = (start + end) / 2;

    // divide into 2 equal parts
    merge_sort(arr, start, mid);
    merge_sort(arr, mid+1, end);

    // merge
    merge(arr, start, end);
}

int main(){

    int arr[7] = {-1, 4, 1, 6, 2, 7, 4};

    merge_sort(arr, 0, 6);

    print_array(arr, 7);

    return 0;
}