//Count Inversions in an array using Merge Sort
#include <bits/stdc++.h>
using namespace std;
 
int _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid, int right);

int mergeSort(int arr[], int n)
{
    int temp[n];
    return _mergeSort(arr, temp, 0, n - 1);
}
int _mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (right > left) {
        mid = (right + left) / 2;
 
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);
        
        // Merge the two parts
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}
// This function merges two sorted arrays & returns inversion count in the arrays.
int merge(int arr[], int temp[], int left, int mid,
          int right)
{
    int i, j, k;
    int inv_count = 0;
    i = left; j = mid; k = left;
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }
    // Copy the remaining elements of left subarray to temp
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    // Copy the remaining elements of right subarray to temp
    while (j <= right)
        temp[k++] = arr[j++];
 
    // Copy back the merged elements to original array
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
    return inv_count;
}
int main()
{
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = mergeSort(arr, n);
    cout << " Number of inversions are " << ans;
    return 0;
}
