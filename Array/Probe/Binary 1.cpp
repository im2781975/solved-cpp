//binary search in sorted array 
#include <bits/stdc++.h> 
using namespace std; 
  
int binarySearch(int arr[], int low, int high, int key) 
{ 
    if (high < low) 
        return -1; 
    int mid = (low + high) / 2; //low + (high - low)/2
    if (key == arr[mid]) 
        return mid; 
    if (key > arr[mid]) 
        return binarySearch(arr, (mid + 1), high, key); 
    return binarySearch(arr, low, (mid - 1), key); 
} 
int search(int arr[], int l, int h, int key)
{
    if (l > h)
        return -1;
 
    int mid = (l + h) / 2;
    if (arr[mid] == key)
        return mid;
        
    if (arr[l] <= arr[mid]) {
    //As this subarray is sorted,we can quickly check if key lies in half or other half 
        if (key >= arr[l] && key <= arr[mid])
            return search(arr, l, mid - 1, key);
    //If key not lies in first half subarray,Divide other half  into two subarrays,
    //such that we can quickly check if key liesin other half 
        return search(arr, mid + 1, h, key);
    }
    //If arr[l..mid] first subarray is not sorted, then arr[mid>] must be sorted subarray
    if (key >= arr[mid] && key <= arr[h])
        return search(arr, mid + 1, h, key);
 
    return search(arr, l, mid - 1, key);
}
int main() 
{ 
    int arr[] = { 5, 6, 7, 8, 9, 10 }; 
    int n, key; 
  
    n = sizeof(arr) / sizeof(arr[0]); 
    key = 10; 
 
    cout << "\nIndex: " << search(arr, 0, n - 1, key) ;
        cout << "Index: " << binarySearch(arr, 0, n - 1, key) ;
    return 0; 
} 
