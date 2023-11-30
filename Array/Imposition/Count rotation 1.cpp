//find number of rotations in a sorted and rotated array for being sorted
#include <bits/stdc++.h> 
using namespace std; 
// Returns count of rotations for an array which is first sorted in ascending order, then rotated 
int countRotations(int arr[], int low, int high) 
{ 
    if (high < low) 
        return 0; 
    if (high == low) 
        return low; 
 
    int mid = low +(high - low) /2; //(low + high)/2;
  
    // Check if element (mid+1) is minimum element.like {3, 4, 5, 1, 2} 
    if (mid < high && arr[mid + 1] < arr[mid]) 
        return (mid + 1); 
    // Check if mid itself is minimum element 
    if (mid > low && arr[mid] < arr[mid - 1]) 
        return mid; 
  
    // Decide whether we need to go to left half or 
    // right half 
    if (arr[high] > arr[mid]) 
        return countRotations(arr, low, mid - 1); 
    return countRotations(arr, mid + 1, high); 
} 
int countRotations(int arr[], int n) 
{ 
    int low = 0, high = n - 1; 
    if (arr[low] <= arr[high]) 
        return 0; 
    //returns 0 if array is already sorted
    while (low <= high) { 
  
        // if first element is mid or last element is mid 
        // then simply use modulo so it  never goes out of bound. 
        int mid = low + (high - low) / 2; 
        int prev = (mid - 1 + n) % n; 
        // Finds the index of the element before the middle element, considering the array is circular.
        int next = (mid + 1) % n; 
        //Finds the index of the element after the middle element, also considering the circular nature of the array.
        if (arr[mid] <= arr[prev] && arr[mid] <= arr[next]) 
            return mid; 
            // The if condition checks whether the element at the middle index is less than or equal to its neighbors (prev and next). If true, it means the array is rotated and the middle element is the minimum. In this case, the function returns the middle index.
        else if (arr[mid] <= arr[high]) 
            high = mid - 1; 
            //it checks whether the element at the middle index is less than or equal to the element at the high index. If true, it means the minimum element lies in the left half, so it updates the high index accordingly.
        else if (arr[mid] >= arr[0]) 
            low = mid + 1; 
            // it means the minimum element lies in the right half, so it updates the low index accordingly.
    } 
    return 0; 
} 
int main() 
{ 
    int arr[] = { 15, 18, 2, 3, 6, 12 }; 
    int N = sizeof(arr) / sizeof(arr[0]); 
    cout << countRotations(arr, 0, N - 1); 
    cout<<"\n"<< countRotations(arr, N);
    return 0;
}
