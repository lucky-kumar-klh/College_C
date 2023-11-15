#include <bits/stdc++.h>
using namespace std;
int isPrime ( int n ){
    if ( n == 1 ) return 0;
    for (int i = 2; i <= n/2; i++)
        if ( n % i == 0 ) return 0;
    return 1;
}
int isPalindrome ( int n ){
    int sum = 0, digit, dup = n;
    if ( isPrime ( n ) ){
        while ( dup ){
            digit = dup % 10;
            sum = 10*sum + (digit);
            dup /= 10;
        }
    }
    if ( sum == n ) return 1;
    else return 0;
}
int digitCount ( int n ){
    int count = 0;
    while ( n ){
        n /= 10;
        count++;
    }
    return count;
}
int main(){

    int t, count, k, ans, even, odd;
    cin >> t;
    while ( t-- ){
        even = 0, odd = 0, count = 1;
        cin >> k;
        for (int i = 2; count <= k; i++){
            if ( isPalindrome ( i ) ) {
                count++;
                if ( digitCount ( i ) % 2 == 0 ) even++;
                else odd++;
            }
        }
        cout << even << " " << odd << endl; 
    }
    
    return 0;
}