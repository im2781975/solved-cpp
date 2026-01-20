// find a peak element 
#include <bits/stdc++.h> 
using namespace std; 
int peak(int *arr, int n){
    int l = 0, r = mid - 1;
    int mid;
    while(l <= r){
        mid = (l + r) >> 1;
        if((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid])) break;
        if(mid > 0 && arr[mid - 1] > arr[mid]) r = mid - 1;
        else l = mid + 1;
    }
    return mid;
}
int peak(int *arr, int n){
    if(n == 1) return 0;
    if(arr[0] >= arr[1]) return 0;
    if(arr[n - 1] >= arr[n - 2]) return n - 1;
    for(int i = 1; i < n - 1; i++){
        if(arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) return i;
    }
}
// return idx of peak element
int peakutil(int *arr, int low, int high, int n){
    int mid = low + (high - low) >> 1;
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&  
        (mid == n - 1 || arr[mid + 1] <= arr[mid])) 
        return mid; 
    else if (mid > 0 && arr[mid - 1] > arr[mid]) 
        return peakutil(arr, low, (mid - 1), n); 
    else return peakutil( 
            arr, (mid + 1), high, n); 
}
int peak(int *arr, int n){
    return peakutil(arr, 0, n - 1, n);
}
