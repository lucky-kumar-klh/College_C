#include <stdio.h>
#include <limits.h>
int duplicate ( int arr[], int size ){
    int ans = 0;
    int duplicate[101] = {0};
    for (int i = 0; i < size; i++){
        duplicate[arr[i]]++;
    }
    for (int i = 0; i < 101; i++){
        if ( duplicate[i] == 2 )
            return i;
    }
    return -1;
}
int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    if ( duplicate(arr, n) == -1 ) printf("No duplicate Element found");
    else printf("Duplicate Element = %d", duplicate(arr, n));
    
    return 0;
}