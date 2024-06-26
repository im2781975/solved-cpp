//find minimum number of swaps to reach a permutation with at most 2 left swaps allowed for every element 
#include <bits/stdc++.h> 
using namespace std; 
int merge(int arr[], int temp[], int left, int mid, int right) 
{ 
    int inv_count = 0, i = left, j = mid; 
    //resultant array
    int k = left;
    while ((i <= mid - 1) && (j <= right)) 
    { 
        if (arr[i] <= arr[j]) 
            temp[k++] = arr[i++]; 
        else
        { 
            temp[k++] = arr[j++]; 
            inv_count = inv_count + (mid - i); 
        } 
    } 
    //Copy the remaining elements of left subarray 
    while (i <= mid - 1) 
        temp[k++] = arr[i++]; 
    //Copy the remaining elements of right subarray 
    while (j <= right) 
       temp[k++] = arr[j++]; 
  
    //Copy back the merged elements to original array
    for (i = left; i <= right; i++)
        arr[i] = temp[i]; 
    return inv_count; 
} 

int _mergeSort(int arr[], int temp[], int left, int right) 
{ 
    int mid, inv_count = 0; 
    if (right > left) 
    { 
        //Divide the array into two parts & call _mergeSort & CountInv() for each  of the parts 
        mid = (right + left)/2; 
        //Inversion count will be sum of inversions in left-part, right-part and number of inversions in merging 
        inv_count  = _mergeSort(arr, temp, left, mid); 
        inv_count += _mergeSort(arr, temp, mid+1, right); 
  
        //Merge the two parts
        inv_count += merge(arr, temp, left, mid+1, right); 
    } 
    return inv_count; 
}
//function sorts the input array and returns the number of inversions in the array 
int mergeSort(int arr[], int n) 
{ 
    int *temp = (int *)malloc(sizeof(int)*n); 
    return _mergeSort(arr, temp, 0, n - 1); 
}
// method returns minimum number of swaps to reach permuted array 'arr' 
int minSwapToReachArr(int arr[], int N) 
{ 
    for (int i = 0; i < N; i++) 
    { 
        //if element has distance more than 2 from its actual position then 
        //it isn't possible to reach permuted array just by swapping with 2 positions left elements so returning -1   
        if ((arr[i] - 1) - i > 2) 
            return -1; 
    } 
    //If permuted array is not Invalid, then number  of Inversion in array will be our final answer 
    int numOfInversion = mergeSort(arr, N); 
    return numOfInversion; 
} 
int main() 
{ 
    int arr[] = {1, 2, 5, 3, 4}; 
    int N = sizeof(arr) / sizeof(int); 
    int res = minSwapToReachArr(arr, N); 
    if (res == -1) 
        cout << "Not Possible\n"; 
    else
        cout << res << endl; 
    return 0; 
}
