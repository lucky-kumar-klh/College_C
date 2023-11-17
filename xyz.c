#include <stdio.h>
int min ( int a, int b ){
    if ( a < b ) return a;
    else return b;
}
int max ( int a, int b ){
    if ( a > b ) return a;
    else return b;
}
void print ( int m, int n, int arr[m][n] ){
    printf("\nYour given matrix : \n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int m, n, maxi, mini;
    printf("Enter row & column : ");
    scanf("%d %d", &m, &n);
    int arr[m][n], ans[2][n];
    printf("Enter elements : ");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    }
    for (int i = 0; i < m; i++){
        maxi = -99999, mini = 99999;
        for (int j = 0; j < n; j++){
            maxi = max ( maxi, arr[j][i] );
            mini = min ( mini, arr[j][i] );
        }
        ans[0][i] = mini;
        ans[1][i] = maxi;
    }
    print ( m, n, arr );
    printf("\n");
    for (int i = 0; i < 2; i++){
        
        for (int j = 0; j < m; j++){
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}