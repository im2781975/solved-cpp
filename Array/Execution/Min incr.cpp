// Program to make all array equal
#include <bits/stdc++.h>
using namespace std;
bool isPairSum(int A[], int N, int X)
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // as equal i and j means same element
            if (i == j)
                continue;
            // pair exists
            if (A[i] + A[j] == X)
                return true;
            // as the array is sorted
            if (A[i] + A[j] > X)
                break;
        }
    }
    //doesn't find any pair..
    return false;
}
// function for calculating min operations
int minOps(int arr[], int n, int k)
{
    // max elements of array
    int max = *max_element(arr, arr + n);
    int res = 0;
 
    // iterate for all elements
    for (int i = 0; i < n; i++) {
 
        // check if element can make equal to
        // max or not if not then return -1
        if ((max - arr[i]) % k != 0)
            return -1;
 
        // else update res for required operations
        else
            res += (max - arr[i]) / k;
    }
 
    // return result
    return res;
}
int main()
{
    int arr[] = { 21, 33, 9, 45, 63 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;
    cout << minOps(arr, n, k);
    int ar[] = { 2, 3, 5, 8, 9, 10, 11 };
    int val = 17;
    int arrSize = *(&ar + 1) - ar;
    sort(ar, ar + arrSize);
    cout << isPairSum(ar, arrSize, val);
    return 0;
}
