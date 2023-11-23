// find number of subset containing consecutive numbers 
#include <bits/stdc++.h> 
using namespace std; 
  
// Returns count of subsets with consecutive numbers 
int numofsubset(int arr[], int n) 
{ 
    sort(arr, arr + n); 
  
    int count = 1; 
    for (int i = 0; i < n - 1; i++) { 
        // Check if there is beginning of another 
        // subset of consecutive number 
        if (arr[i] + 1 != arr[i + 1]) 
            count++; 
    } 
    return count; 
} 
int main() 
{ 
    int arr[] = { 100, 56, 5, 6, 102, 58, 101, 57, 7, 103, 59 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    sort(arr,arr+n);
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout << numofsubset(arr, n) ;
    return 0; 
} 
