// find a peak element using divide and conquer 
#include <bits/stdc++.h> 
using namespace std; 
int findPeak(int arr[], int n) 
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
int main() 
{ 
    int arr[] = { 1, 3, 20, 4, 1, 0 }; 
    int N = sizeof(arr) / sizeof(arr[0]); 
    cout << "Index of a peak point is " << findPeak(arr, N); 
    return 0; 
} 
