//find minimum difference of maximum & minimum of K number. 
#include<bits/stdc++.h> 
using namespace std; 
 
int minDiff(int arr[], int n,int k) 
{ 
    int result = INT_MAX; 
    sort(arr, arr + n); 
  
    // Find minimum value among all K size subarray. 
    for (int i=0; i<=n-k; i++) 
        result = min(result, arr[i+k-1] - arr[i]); 
  
    return result; 
} 
int main() 
{ 
    int arr[] = {10, 100, 300, 200, 1000, 20, 30}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int k = 3; 
  
    cout << minDiff(arr, n, k) << endl; 
    return 0; 
} 
