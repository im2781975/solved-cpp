#include <iostream> 
using namespace std; 
int findPivot(int arr[], int n) 
{ 
    int low = 0, high = n - 1; 
    while (low <= high) { 
        int mid = low + (high - low) / 2; 
        if (mid < high && arr[mid] > arr[mid + 1]) 
            return mid; 
        if (mid > low && arr[mid - 1] > arr[mid]) 
            return mid - 1; 
        if (arr[low] > arr[mid]) 
            high = mid - 1; 
        else
            low = mid + 1; 
    } 
    return -1; 
} 
// Returns count of rotations for an array which is first sorted in ascending order, then rotated 
int countRotations(int arr[], int n){ 
    int pivot = findPivot(arr, n); 
    return pivot + 1; 
} 
int main()
{ 
    int arr[] = {15, 18, 2, 3, 6, 12}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << countRotations(arr, n); 
    return 0; 
}
