// shooting practice of n rounds and points range from 50 to 100 (100 - more accurate, 50 - less accucrate)
// find how many full points he got and min points he got and which point he got more number of times/points
#include <stdio.h>
int j = 0, mostOccuredPoint = 0;
int maxPoints ( int arr[], int size ){
    int ans = 0;
    for ( int i = 0; i < size; i++ ){
        if ( arr[i] > ans ) 
            ans = arr[i];
    }
    return ans;
}
int minPoints ( int arr[], int size ){
    int ans = 101; // max point can be 100
    for ( int i = 0; i < size; i++ ){
        if ( arr[i] < ans ) 
            ans = arr[i];
    }
    return ans;
}
int mostOccured ( int arr[], int size ){
    int ans = 0;
    for ( j = 0; j < size; j++){
        if ( arr[j] > ans ){ 
            ans = arr[j];
            mostOccuredPoint = j + 50;
        }
    }
    if ( ans == 1 ) return -1;
    return ans;  // returning occurence, not the point 
}
int main(){
    int round, max, min, max_occur;
    int occur[51] = {0};
    scanf("%d", &round);
    int points[round];
    for ( int i = 0; i < round; i++ ){
        scanf("%d", &points[i]);
        occur[points[i]-50]++;
    }
    max = maxPoints ( points, round );
    min = minPoints ( points, round );
    max_occur = mostOccured ( occur, 51 );
    printf("Max Points = %d\n", max);
    printf("Min Points = %d\n", min);
    if ( max_occur == -1 ) printf("All points are occured only once");
    else printf("Point %d occured %d times", mostOccuredPoint, max_occur);
    return 0;
}