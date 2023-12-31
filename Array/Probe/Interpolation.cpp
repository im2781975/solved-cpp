//interpolation search 
#include <bits/stdc++.h>
using namespace std;
// If x is present in arr[], then returns index of it, else returns -1.
//recursive approch
int interpolationSearch(int arr[], int lo, int hi, int x)
{
    int pos;
 
    // Since array is sorted, an element present in array must be in range defined by corner
    if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
 
        // Probing the position with keeping uniform distribution in mind.
        pos = lo+ (((double)(hi - lo) / (arr[hi] - arr[lo]))* (x - arr[lo]));
        // int pos=0+(((double)(14-0)/(arr[14]-arr[0]))*(18-arr[0]));
        // int pos=0+(((double)(14-0)/(47-10)*(18-10));
        // int pos=(double)14/(37*8);
        
        if (arr[pos] == x)
            return pos;
        // If x is larger, x is in right sub array
        if (arr[pos] < x)
        return interpolationSearch(arr, pos + 1, hi, x);
 
        // If x is smaller, x is in left sub array
        if (arr[pos] > x)
        return interpolationSearch(arr, lo, pos - 1, x);
    }
    return -1;
}
//iterative approch
int interpolationSearch(int arr[], int n, int x)
{
    // Find indexes of two corners
    int low = 0, high = (n - 1);
    // Since array is sorted, an element present in array must be in range defined by corner
    while (low <= high && x >= arr[low] && x <= arr[high])
    {
        if (low == high)
        {if (arr[low] == x) return low;
        return -1;
        }
        // Probing the position with keeping uniform distribution in mind.
        int pos = low + (((double)(high - low) /
            (arr[high] - arr[low])) * (x - arr[low]));
   
        // int pos=0+(((double)(14-0)/(arr[14]-arr[0]))*(18-arr[0]));
        // int pos=0+(((double)(14-0)/(47-10)*(18-10));
        // int pos=(double)14/(37*8);
        if (arr[pos] == x)
            return pos;
        // If x is larger, x is in upper part
        if (arr[pos] < x)
            low = pos + 1;
        // If x is smaller, x is in the lower part
        else
            high = pos - 1;
    }
    return -1;
}
int main()
{
    int arr[] = { 10, 12, 13, 16, 18, 19, 20, 21,22, 23, 24, 33, 35, 42, 47 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 18;
    int index = interpolationSearch(arr, 0, n - 1, x);
 
    if (index != -1)
        cout << "\nElement found at index " << index;
    else
        cout << "\nElement not found.";
 
    return 0;
}
