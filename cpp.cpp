#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr = {4,1,6,3,5,8,1};
    
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}