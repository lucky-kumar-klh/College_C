// array of n Emplyees salaries, bonus on occassion. 
// Bonus calculated as : max salary - 20% bonus, second max salary - 21% bonus, third - 22% bonus, so on
// last person slaray - 20 + (n-1)% bonus
// maintain the bonus in separate array called bonus
/*
    int salary[] = {10,25,8,30};
    int bohus[] = {()} 
*/
#include <stdio.h>
#include <limits.h>
int bonus ( int arr[], int size, float salary[], int *maxi, int *j ){
    int max = INT_MIN;
    float bonus;
    // find max1
    for (int i = 0; i < size; i++){
        if ( arr[i] > max && arr[i] < maxi )
            max = arr[i];
    }
    maxi = max;
    bonus = 20 * (j/100) ;
    salary[j] = 20 + bonus;

    if ( j == (size-1) ) return;
    return bonus(arr, size, salary, *maxi, *j); 
}
int main(){
    // n = 4; 
    // 1 --> 20+(0)%
    // 2 --> 20+(1)%
    // 4 --> 20+(3)%
    int n;
    int j = 0, iniMax = 1000; 
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    float salary[n];
    bonus (arr, n, salary, &iniMax, &j);

    return 0;
}