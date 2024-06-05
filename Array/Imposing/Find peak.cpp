// find a peak element 
#include <bits/stdc++.h> 
using namespace std; 
int findpeak(int arr[], int n) 
{ 
    int l = 0; 
    int r = n-1; 
    int mid; 
    
    while (l <= r) { 
        // finding mid by binary right shifting. 
        mid = (l + r) >> 1; 
//midpoint is calculated by right-shifting the sum of l and r by 1 (which is equivalent to dividing by 2)
        // first case if mid is the answer 
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) 
            and (mid == n - 1 || arr[mid + 1] <= arr[mid])) 
            break; 
        //If mid is a peak (greater than or equal to its neighbors or it is at the boundary), the loop breaks.
        
        if (mid > 0 and arr[mid - 1] > arr[mid]) 
            r = mid - 1; 
        else
            l = mid + 1; 
    } 
    return mid; 
} 
int findPeak(int arr[], int n) 
{ 
    // first or last element is peak element 
    if (n == 1) 
        return 0; 
    if (arr[0] >= arr[1]) 
        return 0; 
    if (arr[n - 1] >= arr[n - 2]) 
        return n - 1; 
  
    // check for every other element 
    for (int i = 1; i < n - 1; i++) { 
        // check if the neighbors are smaller 
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) 
            return i; 
    } 
} 
// A binary search based function  that returns index of a peak element 
int findPeakUtil(int arr[], int low, int high, int n) 
{ 
    // low + (high - low) / 2 
    int mid = low + (high - low) / 2; 
  
    // Compare middle element with its neighbours 
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&  
        (mid == n - 1 || arr[mid + 1] <= arr[mid])) 
        return mid; 
  
    // If middle element is not peak and its left neighbour is greater than it, 
    // then left half must have a peak element 
    else if (mid > 0 && arr[mid - 1] > arr[mid]) 
        return findPeakUtil(arr, low, (mid - 1), n); 
  
    // If middle element is not peak and its right neighbour is greater than it, 
    // then right half must have a peak element 
    else
        return findPeakUtil( 
            arr, (mid + 1), high, n); 
} 
  
// A wrapper over recursive function findPeakUtil() 
int findPeak(int arr[], int n) 
{ 
    return findPeakUtil(arr, 0, n - 1, n); 
} 
int main() 
{ 
    int arr[]{ 1, 3, 20, 4, 1, 0 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Index of a peak point is " << findPeak(arr, n); 
    cout << "Index of a peak point is " << findpeak(arr, N); 
    return 0; 
} 
