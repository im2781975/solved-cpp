//chocklet distribution
#include <iostream>
#include <algorithm> 
#include <climits>  
using namespace std;
// Returns minimum difference between max & min values of distribution.
int findMinDiff(int arr[], int n, int m)
{
    // Check if there are no students or no chocolates
    if (m == 0 || n == 0)
        return 0;

    sort(arr, arr + n);
    // Number of students cannot be more than the number of packets
    if (n < m)
        return -1;

    int min_diff = INT_MAX;
    int max_diff = INT_MIN;

    // Find the subarray of size m such that the difference between the last (maximum in case of sorted)
    // and first (minimum in case of sorted) elements of subarray is minimum.
    for (int i = 0; i + m - 1 < n; i++)
    {
        int diff = arr[i + m - 1] - arr[i];
        min_diff = min(min_diff, diff); 
        max_diff = max(max_diff, diff); 
    }
    cout << "\nMinimum difference is: " << min_diff;
    cout << "\nMaximum difference is: " << max_diff;
    return 0;
}
//find minimum difference of maximum & minimum of K number. 
int minDiff(int arr[], int n,int k) 
{ 
    int result = INT_MAX; 
    sort(arr, arr + n); 
  
    // Find minimum value among all K size subarray. 
    for (int i=0; i<=n-k; i++) 
        result = min(result, arr[i+k-1] - arr[i]); 
  
    return result; 
} 
int main()
{
    int arr[] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50};
    //number of students
    int m = 7;
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    findMinDiff(arr, n, m);
    cout << "\n" << minDiff(arr, n, m);
    return 0;
}
