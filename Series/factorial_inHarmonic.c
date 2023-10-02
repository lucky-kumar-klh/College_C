//Print sum of 1,1/2!,1/3!,1/4!,1/5!... till Nth term

#include<stdio.h>
int main(){
    int n;
    float sum=0,fact=1;
    scanf("%d",&n);
    for(float i=1;i<=n;i++){
        for(float j=1;j<=i;j++){
            fact=fact*j;
        }
            sum=sum+(1/fact);
            fact=1;
        }
    
    printf("%.2f",sum);
    return 0;
}
/*
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int element;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if( arr[i]==arr[j] ){
                element = arr[i];
            }
        }
    }
	return element;
}
*/

/*
 for (int i = 0; i < arr.size(); i++) {
    // Get the index of the current element.
    int index = arr[i];

    // If the element at the index is negative, then we have already seen this element before.
    if (arr[index] < 0) {
      // Return the element.
      return index;
    }

    // Mark the element at the index as negative to indicate that we have seen it before.
    arr[index] *= -1;
  }
*/

/*
#include <algorithm>

int findDuplicate(vector<int> &arr) {
    std::sort(arr.begin(), arr.end()); // Sort the array to make duplicates adjacent
    int n = arr.size();
    
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i-1]) {
            return arr[i]; // Found a duplicate element
        }
    }
}
*/