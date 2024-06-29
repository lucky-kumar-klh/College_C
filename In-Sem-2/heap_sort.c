#include <stdio.h>

void heapify(int arr[], int n, int i) {
  int large = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;
  if (left < n && arr[left] > arr[large])
    large = left;
  if (right < n && arr[right] > arr[large])
    large = right;
  if (large != i) {
    swap(&arr[i], &arr[large]);
    heapify(arr, n, large);
  }
}

void heapsort(int arr[], int n) {
  // constructing max heap
  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);

  for (int i = n - 1; i >= 0; i--) {
    swap(&arr[0], &arr[i]);
    heapify(arr, i, 0);
  }
}

void swap(int *a, int *b) { *b = (*a + *b) - (*a = *b); }

int main() {
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  heapsort(arr, n);

  printf("Array after sorting: ");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}
