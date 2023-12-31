// sort even-placed elements in increasing & odd-placed in decreasing order with constant space complexity 
#include <bits/stdc++.h> 
using namespace std; 
void bitonicGenerator(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) { 
        if (i % 2==0) 
            arr[i]=-1*arr[i]; 
    } 
    sort(arr,arr+n); 
    int mid=(n-1)/2; 
      
    // Reverting the changed sign 
    for (int i = 0; i <= mid; i++) { 
            arr[i]=-1*arr[i]; 
        } 
      
    // Reverse first half of array 
    reverse(arr,arr+mid+1); 
    
    // Reverse second half of array
    reverse(arr+mid+1,arr+n); 
} 
int main() 
{ 
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    bitonicGenerator(arr, n); 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    return 0; 
} 
