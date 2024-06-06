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
//-----
int binarySearch(int arr[], int low, int high, int key)
{
    if (high < low)
        return -1;
 
    int mid = (low + high) / 2;
    if (key == arr[mid])
        return mid;
 
    if (key > arr[mid])
        return binarySearch(arr, (mid + 1), high, key);
 
    return binarySearch(arr, low, (mid - 1), key);
}

int findPivot(int arr[], int low, int high)
{
    if (high < low)
        return -1;
    if (high == low)
        return low;
 
    // low + (high - low)/2;
    int mid = (low + high) / 2;
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;
 
    if (mid > low && arr[mid] < arr[mid - 1])
        return (mid - 1);
 
    if (arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1);
 
    return findPivot(arr, mid + 1, high);
}
// Searches an element key in a pivoted sorted array arr[] of size n
int pivotedBinarySearch(int arr[], int n, int key)
{
    int pivot = findPivot(arr, 0, n - 1);
 
    // If we didn't find a pivot,then array is not rotated at all
    if (pivot == -1)
        return binarySearch(arr, 0, n - 1, key);
    // If we found a pivot, then first compare with pivot & then search in two subarrays around pivot
    if (arr[pivot] == key)
        return pivot;
 
    if (arr[0] <= key)
        return binarySearch(arr, 0, pivot - 1, key);
 
    return binarySearch(arr, pivot + 1, n - 1, key);
}
//-----
//iterative binary search 
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
    //if element wasn't present
    return -1;
}
//recursive Binary search 
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        // If the element is present at the middle
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        // Else the element can only be present in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main() 
{ 
    int arr[] = { 5, 6, 7, 8, 9, 10 }; 
    int n, key; 
  
    n = sizeof(arr) / sizeof(arr[0]); 
    key = 10; 
 
    cout << "\nIndex: " << search(arr, 0, n - 1, key) ;
        cout << "Index: " << binarySearch(arr, 0, n - 1, key) ;
    
    cout << "\nIndex of the element is : "<< pivotedBinarySearch(arr1, n, key);
int result = binarySearch(arr, 0, n - 1, key);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0; 
} 
